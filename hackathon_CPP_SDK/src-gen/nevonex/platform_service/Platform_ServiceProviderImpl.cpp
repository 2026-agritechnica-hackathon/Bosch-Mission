/*
 * nevonex/platform_service/Platform_ServiceProviderImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "Platform_ServiceProvider.hpp"
#include <stdexcept>

#include <nevonex/platform_service/Platform_servicePackage.hpp>
#include <nevonex/platform_service/Platform_Service.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(Platform_ServiceProviderImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::platform_service;
using namespace ::nevonex::log;

void Platform_ServiceProvider::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(Platform_ServiceProviderImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject Platform_ServiceProvider::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE:
    {
        if (m_platform_Service)
            _any = ::ecore::as < ::ecore::EObject > (m_platform_Service);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void Platform_ServiceProvider::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::nevonex::platform_service::Platform_Service_ptr _t1 =
                dynamic_cast< ::nevonex::platform_service::Platform_Service* >(_t0.get());
        ::nevonex::platform_service::Platform_ServiceProvider::setPlatform_Service(_t1);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean Platform_ServiceProvider::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE:
    {
        return (bool) m_platform_Service;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void Platform_ServiceProvider::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE:
    {
        // nullptr
        setPlatform_Service(nullptr);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr Platform_ServiceProvider::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::platform_service::Platform_servicePackage* >(::nevonex::platform_service::Platform_servicePackage::_instance().get())->getPlatform_ServiceProvider();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Platform_ServiceProvider::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Platform_ServiceProvider::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
