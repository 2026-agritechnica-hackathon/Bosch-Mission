/*
 * nevonex/platform_service/Platform_servicePackage.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_PLATFORM_SERVICEPACKAGE_HPP
#define _NEVONEX_PLATFORM_SERVICEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nevonex/platform_service_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <nevonex/common/CommonPackage.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace platform_service
    {

    class EXPORT_NEVONEX_DLL Platform_servicePackage : public virtual ::ecore::EPackage
    {
    public:

        static Platform_servicePackage_ptr _instance();
        static Platform_servicePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int IPLATFORM_SERVICE = 0;

        static const int IPLATFORM_SERVICEFACTORY = 1;

        static const int IPLATFORM_SERVICEPROVIDER = 2;

        static const int PLATFORM_SERVICE = 3;

        static const int PLATFORM_SERVICEPROVIDER = 4;

        static const int PLATFORM_SERVICE__DOWNLOAD = 0;

        static const int PLATFORM_SERVICE__UPLOADDATA = 1;

        static const int PLATFORM_SERVICE__UPLOADFILE = 2;

        static const int PLATFORM_SERVICE__RECEIVE = 3;

        static const int PLATFORM_SERVICE__SENDCOMMAND = 4;

        static const int PLATFORM_SERVICE__SENDFILE = 5;

        static const int PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE = 6;

        // IDs for classifiers for inherited features

        static const int PLATFORM_SERVICE__INDEX = ::nevonex::common::CommonPackage::TOPICOBJECT__INDEX;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getPlatform_Service();
        virtual ::ecore::EClass_ptr getPlatform_ServiceProvider();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getPlatform_Service__download();
        virtual ::ecore::EAttribute_ptr getPlatform_Service__uploadData();
        virtual ::ecore::EAttribute_ptr getPlatform_Service__uploadFile();
        virtual ::ecore::EAttribute_ptr getPlatform_Service__receive();
        virtual ::ecore::EAttribute_ptr getPlatform_Service__sendCommand();
        virtual ::ecore::EAttribute_ptr getPlatform_Service__sendFile();
        virtual ::ecore::EReference_ptr getPlatform_ServiceProvider__platform_Service();

    protected:

        static ::ecore::Ptr< Platform_servicePackage > s_instance;

        Platform_servicePackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_Platform_ServiceEClass;

        ::ecore::EClass_ptr m_Platform_ServiceProviderEClass;

        // EEnuminstances 



        // EDataType instances 



        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Platform_Service__download;

        ::ecore::EAttribute_ptr m_Platform_Service__uploadData;

        ::ecore::EAttribute_ptr m_Platform_Service__uploadFile;

        ::ecore::EAttribute_ptr m_Platform_Service__receive;

        ::ecore::EAttribute_ptr m_Platform_Service__sendCommand;

        ::ecore::EAttribute_ptr m_Platform_Service__sendFile;

        ::ecore::EReference_ptr m_Platform_ServiceProvider__platform_Service;

    };

}
 // platform_service
}// nevonex

#endif // _NEVONEX_PLATFORM_SERVICEPACKAGE_HPP
