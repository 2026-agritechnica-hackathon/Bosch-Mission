/*
 * nevonex/device2device/Device2DeviceImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#include "Device2Device.hpp"
#include <stdexcept>

#include <nevonex/device2device/Device2devicePackage.hpp>
#include <nevonex/device2device/IDeviceDownload.hpp>
#include <nevonex/types/PropertyChange.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>
#include <nevonex/fcb.hpp>
#include <nevonex/common.hpp>

#include <boost/filesystem.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <nevonex-fcal-platform/common/CommonUtils.hpp>

using namespace ::nevonex::device2device;
using namespace ::nevonex::log;

Device2Device_ptr Device2Device::s_holder;

Device2Device_ptr Device2Device::getInstance()
{
    if (!s_holder.get())
        s_holder = Device2Device_ptr(new Device2Device());

    return s_holder;
}

void Device2Device::clearDownloadFiles()
{
    m_availableFilesPair.clear();
}

std::vector< ::ecore::StringPair > const& Device2Device::getAvailableFiles() const
{
    return m_availableFilesPair;
}

void Device2Device::_initialize()
{
    // Supertypes
    ::nevonex::device2device::IDeviceDownload::_initialize();
    ::nevonex::types::PropertyChange::_initialize();

    // References

    /*PROTECTED REGION ID(Device2DeviceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

void Device2Device::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    // PropertyChange::addPropertyChangeListener (  _listener);
    PropertyChange::addPropertyChangeListener(_listener);

}

void Device2Device::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    // PropertyChange::removePropertyChangeListener (  _listener);
    PropertyChange::removePropertyChangeListener(_listener);

}

void Device2Device::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    // PropertyChange::notifyPropertyChange (  _name,  _oldValue,  _newValue);
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
    // Notify property change for Device2Device

}

// Operations

void Device2Device::processDownloadMessage(::ecore::EString const &_message)
{

    try
    {
        using namespace ::ecore;
        using namespace ::nevonex::common::utils;
        using namespace ::rapidjson;
        Document jsonObject(kObjectType);
        CommonUtils::convertStringToJsonObject(_message.c_str(), jsonObject);

        if (jsonObject.HasMember("fileName") && jsonObject.HasMember("path"))
        {
            const EString &fPath = jsonObject["path"].GetString();
            const EString &fName = jsonObject["fileName"].GetString();
            ::nevonex::resource::FilePath filePath = importFile(
                    fPath + "/" + fName);
            notifyPropertyChange("file", nullptr, filePath);
        }
        else if (jsonObject.HasMember("content"))
        {
            const rapidjson::Value &jsonContent = jsonObject["content"];
            const EString &contentString = jsonContent.GetString();
            notifyPropertyChange("content", nullptr, contentString);
        }
        else
        {
            SDK_FCAL_LOG(SeverityLevel::warning)
                    << "Invalid download topic received for D2D.";
        }
    } catch (const std::exception &e)
    {
        SDK_FCAL_LOG(SeverityLevel::error)
                << "Exception while processing the data download message from the processDownloadMessage ."
                << e.what();
    }

}

void Device2Device::stopPlatformService()
{
    /*PROTECTED REGION ID(Device2DeviceImpl_stopPlatformService) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw std::runtime_error(
            "UnsupportedOperationException: nevonex::device2device::Device2Device::stopPlatformService");
    /*PROTECTED REGION END*/

}

::ecore::EString Device2Device::sendCommand(::ecore::EString const &_command)
{
    return IDevice::i_SendCommand(_command);

}

::ecore::EBoolean Device2Device::isDeviceConnected()
{
    return IDevice::i_IsDeviceConnected();

}

::ecore::EString Device2Device::sendFile(::nevonex::types::File const &_file)
{
    return IDevice::i_SendFile(_file);

}

::ecore::EString Device2Device::sendFile(::ecore::EString const &_filePath)
{
    return IDevice::i_SendFile(_filePath);

}

// EObject
::ecore::EJavaObject Device2Device::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::types::TypesPackage::PROPERTYCHANGE__LISTENERS:
    {
        return nevonex::types::PropertyChange::eGet(_featureID, _resolve);
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void Device2Device::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::types::TypesPackage::PROPERTYCHANGE__LISTENERS:
    {
        nevonex::types::PropertyChange::eSet(_featureID, _newValue);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean Device2Device::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::types::TypesPackage::PROPERTYCHANGE__LISTENERS:
    {
        return nevonex::types::PropertyChange::eIsSet(_featureID);
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void Device2Device::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr Device2Device::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::device2device::Device2devicePackage* >(::nevonex::device2device::Device2devicePackage::_instance().get())->getDevice2Device();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Device2Device::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Device2Device::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///

