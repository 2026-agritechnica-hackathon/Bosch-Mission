/*
 * nevonex.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "nevonex.hpp"
#include <nevonex/dllNevonex.hpp>
#include <nevonex/NevonexPackage.hpp>
#include <nevonex/NevonexFactory.hpp>
#include <nevonex/common/CommonPackage.hpp>
#include <nevonex/common/CommonFactory.hpp>
#include <nevonex/types/IMachineProvider.hpp>
#include <nevonex/gps_tc/Gps_tcPackage.hpp>
#include <nevonex/gps_tc/Gps_tcFactory.hpp>
#include <nevonex/implement/ImplementPackage.hpp>
#include <nevonex/implement/ImplementFactory.hpp>
#include <nevonex/isopgn/IsopgnPackage.hpp>
#include <nevonex/isopgn/IsopgnFactory.hpp>
#include <nevonex/platform_service/Platform_servicePackage.hpp>
#include <nevonex/platform_service/Platform_serviceFactory.hpp>
#include <nevonex/customui/UIWebServiceProvider.hpp>

#include <ecore/EPackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EObject.hpp>

#include <boost/algorithm/string/predicate.hpp>

#include <vector>
#include <string>

typedef std::vector< ::ecore::EObject_ptr > PROVIDER_LIST;

using namespace ::ecore;

EObject_ptr getNevonexPackageClass(const std::string & searchClassName)
{
    ::nevonex::NevonexPackage_ptr nevonex = ::nevonex::NevonexPackage::_instance();
    auto & subPackages = nevonex->getESubpackages();
    for (const auto & pkg : subPackages)
    {
        auto & classifiers = pkg->getEClassifiers();
        for (const auto & cls : classifiers)
        {
            if (boost::iequals(searchClassName, cls->getName()))
            {
                return pkg->getEFactoryInstance()->create(
                        ::ecore::as< EClass >(cls));
            }
        }
    }
    return nullptr;
}

extern "C" EXPORT_NEVONEX_DLL PROVIDER_LIST & getProviders(void)
{
    static PROVIDER_LIST providers;
    if (providers.empty())
    {
        {
            EObject_ptr _obj = getNevonexPackageClass("GPS_TCProvider");
            if (_obj && ::ecore::as< ::nevonex::types::IMachineProvider >(_obj))
            {
                providers.push_back(_obj);
            }
        }
        {
            EObject_ptr _obj = getNevonexPackageClass("ImplementProvider");
            if (_obj && ::ecore::as< ::nevonex::types::IMachineProvider >(_obj))
            {
                providers.push_back(_obj);
            }
        }
        {
            EObject_ptr _obj = getNevonexPackageClass("ISOPGNProvider");
            if (_obj && ::ecore::as< ::nevonex::types::IMachineProvider >(_obj))
            {
                providers.push_back(_obj);
            }
        }
    }
    return providers;
}

typedef std::vector< ::ecore::EObject_ptr > WEB_SERVICE_PROVIDER_LIST;

extern "C" EXPORT_NEVONEX_DLL WEB_SERVICE_PROVIDER_LIST & getWebServiceProvidersInstance(void)
{
    static WEB_SERVICE_PROVIDER_LIST webServiceProvidersList;
    static bool webServiceProvidersInitialized = false;
    if (webServiceProvidersInitialized)
    {
        return webServiceProvidersList;
    }
    webServiceProvidersList.clear();
    {
        using namespace ::nevonex::customui;
        webServiceProvidersList.push_back(UIWebServiceProvider::getInstance());
    }
    webServiceProvidersInitialized = true;
    return webServiceProvidersList;
}

typedef std::vector< ::ecore::EObject_ptr > PLATFORM_SERVICE_PROVIDER_LIST;

extern "C" EXPORT_NEVONEX_DLL PLATFORM_SERVICE_PROVIDER_LIST & getCloudDownloadInstance(void)
{
    static PLATFORM_SERVICE_PROVIDER_LIST platformServiceProviders;
    /*PROTECTED REGION ID(nevonex_getCloudDownloadInstance) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
    return platformServiceProviders;
}
