/*
 * nevonex/device2device/Device2devicePackageImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#include <nevonex/device2device/Device2devicePackage.hpp>
#include <nevonex/device2device/Device2deviceFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <nevonex/types/TypesPackage.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::nevonex::device2device;

Device2devicePackage::Device2devicePackage()
{

    // Feature definitions of IDeviceDownload

    // Feature definitions of Device2Device

}

void Device2devicePackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = Device2deviceFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // IDeviceDownload
    {
        m_IDeviceDownloadEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_IDeviceDownloadEClass->setClassifierID(IDEVICEDOWNLOAD);
        m_IDeviceDownloadEClass->setEPackage(_this());
        getEClassifiers().push_back(m_IDeviceDownloadEClass);
    }

    // Device2Device
    {
        m_Device2DeviceEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_Device2DeviceEClass->setClassifierID(DEVICE2DEVICE);
        m_Device2DeviceEClass->setEPackage(_this());
        getEClassifiers().push_back(m_Device2DeviceEClass);
    }

    // Create enums

    // Create data types

    // Initialize package
    setName("device2device");
    setNsPrefix("device2device");
    setNsURI("com.bosch.nevonex.device2device");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_Device2DeviceEClass->getESuperTypes().push_back(m_IDeviceDownloadEClass);
    m_Device2DeviceEClass->getESuperTypes().push_back(
            dynamic_cast< ::nevonex::types::TypesPackage* >(::nevonex::types::TypesPackage::_instance().get())->getPropertyChange());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // IDeviceDownload
    m_IDeviceDownloadEClass->setName("IDeviceDownload");
    m_IDeviceDownloadEClass->setAbstract(true);
    m_IDeviceDownloadEClass->setInterface(true);
    // Device2Device
    m_Device2DeviceEClass->setName("Device2Device");
    m_Device2DeviceEClass->setAbstract(false);
    m_Device2DeviceEClass->setInterface(false);
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_Device2DeviceEClass,
                nullptr, "processDownloadMessage", 0, 1, true, true);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "message", 0, 1,
                    true, true);
            _pa->setEType(
                    dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_Device2DeviceEClass,
                nullptr, "stopPlatformService", 0, 1, true, true);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_Device2DeviceEClass,
                nullptr, "sendCommand", 0, 1, true, true);
        _op->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "command", 0, 1,
                    true, true);
            _pa->setEType(
                    dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_Device2DeviceEClass,
                nullptr, "isDeviceConnected", 0, 1, true, true);
        _op->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_Device2DeviceEClass,
                nullptr, "sendFile", 0, 1, true, true);
        _op->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "file", 0, 1, true,
                    true);
            _pa->setEType(
                    dynamic_cast< ::nevonex::types::TypesPackage* >(::nevonex::types::TypesPackage::_instance().get())->getFile());
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_Device2DeviceEClass,
                nullptr, "sendFile", 0, 1, true, true);
        _op->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "filePath", 0, 1,
                    true, true);
            _pa->setEType(
                    dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        }
    }

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr Device2devicePackage::getIDeviceDownload()
{
    return m_IDeviceDownloadEClass;
}
::ecore::EClass_ptr Device2devicePackage::getDevice2Device()
{
    return m_Device2DeviceEClass;
}

::ecore::EAttribute_ptr Device2devicePackage::getPropertyChange__listeners()
{
    return m_PropertyChange__listeners;
}

