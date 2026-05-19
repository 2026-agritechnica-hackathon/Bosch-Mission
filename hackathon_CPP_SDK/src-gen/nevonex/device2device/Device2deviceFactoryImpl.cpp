/*
 * nevonex/device2device/Device2deviceFactoryImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#include <nevonex/device2device/Device2deviceFactory.hpp>
#include <nevonex/device2device/Device2devicePackage.hpp>
#include <nevonex/device2device/IDeviceDownload.hpp>
#include <nevonex/device2device/Device2Device.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::nevonex::device2device;

Device2deviceFactory::Device2deviceFactory()
{
}

::ecore::EObject_ptr Device2deviceFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case Device2devicePackage::DEVICE2DEVICE:
        return createDevice2Device();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject Device2deviceFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString Device2deviceFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Device2Device_ptr Device2deviceFactory::createDevice2Device()
{
    return Device2Device::getInstance();
}

