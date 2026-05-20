/*
 * nevonex/platform_service/Platform_servicePackage.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/platform_service/Platform_servicePackage.hpp>

using namespace ::nevonex::platform_service;

::ecore::Ptr< ::nevonex::platform_service::Platform_servicePackage > Platform_servicePackage::s_instance;

::nevonex::platform_service::Platform_servicePackage_ptr Platform_servicePackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< Platform_servicePackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < Platform_servicePackage > (new Platform_servicePackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::nevonex::platform_service::Platform_servicePackage_ptr Platform_servicePackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}
