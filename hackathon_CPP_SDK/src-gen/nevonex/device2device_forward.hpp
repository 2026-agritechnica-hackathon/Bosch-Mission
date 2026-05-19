/*
 * nevonex/device2device_forward.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#ifndef _NEVONEX_DEVICE2DEVICE_FORWARD_HPP
#define _NEVONEX_DEVICE2DEVICE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/property_tree/ptree.hpp>
#include <nevonex/propertychange/PropertyChangeListener.hpp>
#include <nevonex/machine/InterfaceDetails.hpp>

/*PROTECTED REGION ID(nevonex_device2device_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace nevonex
{
    namespace device2device
    {

// EDataType

// EClass

// IDeviceDownload
        class IDeviceDownload;
        using IDeviceDownload_ptr = ::ecore::Ptr<IDeviceDownload>;

// Device2Device
        class Device2Device;
        using Device2Device_ptr = ::ecore::Ptr<Device2Device>;

// EEnum

// Package & Factory
        class Device2deviceFactory;
        using Device2deviceFactory_ptr = ::ecore::Ptr<Device2deviceFactory>;
        class Device2devicePackage;
        using Device2devicePackage_ptr = ::ecore::Ptr<Device2devicePackage>;

    } // device2device
} // nevonex

#endif // _NEVONEX_DEVICE2DEVICE_FORWARD_HPP
