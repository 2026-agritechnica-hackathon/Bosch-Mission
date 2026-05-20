/*
 * nevonex/platform_service/Platform_ServiceImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "Platform_Service.hpp"
#include <stdexcept>

#include <nevonex/platform_service/Platform_servicePackage.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(Platform_ServiceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::platform_service;
using namespace ::nevonex::log;

void Platform_Service::_initialize()
{
    // Supertypes
    ::nevonex::common::TopicObject::_initialize();

    // References

    /*PROTECTED REGION ID(Platform_ServiceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject Platform_Service::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__DOWNLOAD:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_download);
        return _any;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADDATA:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_uploadData);
        return _any;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADFILE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_uploadFile);
        return _any;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__RECEIVE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_receive);
        return _any;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDCOMMAND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_sendCommand);
        return _any;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDFILE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_sendFile);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void Platform_Service::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__DOWNLOAD:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::platform_service::Platform_Service::setDownload(_t0);
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADDATA:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::platform_service::Platform_Service::setUploadData(_t0);
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADFILE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::platform_service::Platform_Service::setUploadFile(_t0);
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__RECEIVE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::platform_service::Platform_Service::setReceive(_t0);
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDCOMMAND:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::platform_service::Platform_Service::setSendCommand(_t0);
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDFILE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::platform_service::Platform_Service::setSendFile(_t0);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean Platform_Service::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__DOWNLOAD:
    {
        return m_download != "";
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADDATA:
    {
        return m_uploadData != "";
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADFILE:
    {
        return m_uploadFile != "";
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__RECEIVE:
    {
        return m_receive != "";
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDCOMMAND:
    {
        return m_sendCommand != "";
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDFILE:
    {
        return m_sendFile != "";
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void Platform_Service::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__DOWNLOAD:
    {
        // ""
        setDownload("");
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADDATA:
    {
        // ""
        setUploadData("");
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADFILE:
    {
        // ""
        setUploadFile("");
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__RECEIVE:
    {
        // ""
        setReceive("");
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDCOMMAND:
    {
        // ""
        setSendCommand("");
        return;
    }
    case ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDFILE:
    {
        // ""
        setSendFile("");
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr Platform_Service::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::platform_service::Platform_servicePackage* >(::nevonex::platform_service::Platform_servicePackage::_instance().get())->getPlatform_Service();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Platform_Service::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Platform_Service::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
