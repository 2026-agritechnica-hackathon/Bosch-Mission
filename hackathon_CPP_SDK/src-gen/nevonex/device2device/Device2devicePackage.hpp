/*
 * nevonex/device2device/Device2devicePackage.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#ifndef _NEVONEX_DEVICE2DEVICEPACKAGE_HPP
#define _NEVONEX_DEVICE2DEVICEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nevonex/device2device_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <nevonex/types/TypesPackage.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace device2device
    {

    class EXPORT_NEVONEX_DLL Device2devicePackage : public virtual ::ecore::EPackage
    {
    public:

        static Device2devicePackage_ptr _instance();
        static Device2devicePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int DEVICE2DEVICE = 0;

        static const int IDEVICEDOWNLOAD = 1;

        // IDs for classifiers for class Device2Device 

        static const int DEVICE2DEVICE__LISTENERS = ::nevonex::types::TypesPackage::PROPERTYCHANGE__LISTENERS;

        // IDs for classifiers for class IDeviceDownload 

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getIDeviceDownload();

        virtual ::ecore::EClass_ptr getDevice2Device();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getPropertyChange__listeners();

    protected:

        static ::ecore::Ptr< Device2devicePackage > s_instance;

        Device2devicePackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_IDeviceDownloadEClass;

        ::ecore::EClass_ptr m_Device2DeviceEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_PropertyChange__listeners;

    };

}
 // device2device
}// nevonex

#endif // _NEVONEX_DEVICE2DEVICEPACKAGE_HPP

