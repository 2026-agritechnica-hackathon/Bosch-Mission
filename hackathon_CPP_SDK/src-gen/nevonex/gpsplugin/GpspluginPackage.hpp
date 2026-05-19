/*
 * nevonex/gpsplugin/GpspluginPackage.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_GPSPLUGINPACKAGE_HPP
#define _NEVONEX_GPSPLUGINPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nevonex/gpsplugin_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <nevonex/common/CommonPackage.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace gpsplugin
    {

    class EXPORT_NEVONEX_DLL GpspluginPackage : public virtual ::ecore::EPackage
    {
    public:

        static GpspluginPackage_ptr _instance();
        static GpspluginPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int GPSPLUGIN = 0;

        static const int GPSPLUGINPROVIDER = 1;

        static const int IGPSPLUGIN = 2;

        static const int IGPSPLUGINFACTORY = 3;

        static const int IGPSPLUGINPROVIDER = 4;

        static const int GPSPLUGIN__GPSSENSORPOSITION = 0;

        static const int GPSPLUGIN__INTERNALGPSDETAILEDINFO = 1;

        static const int GPSPLUGINPROVIDER__GPSPLUGIN = 2;

        // IDs for classifiers for inherited features

        static const int GPSPLUGIN__INDEX = ::nevonex::common::CommonPackage::TOPICOBJECT__INDEX;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getGPSPlugin();
        virtual ::ecore::EClass_ptr getGPSPluginProvider();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getGPSPlugin__gPSSensorPosition();
        virtual ::ecore::EReference_ptr getGPSPlugin__internalGpsDetailedInfo();
        virtual ::ecore::EReference_ptr getGPSPluginProvider__gPSPlugin();

    protected:

        static ::ecore::Ptr< GpspluginPackage > s_instance;

        GpspluginPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_GPSPluginEClass;

        ::ecore::EClass_ptr m_GPSPluginProviderEClass;

        // EEnuminstances 



        // EDataType instances 



        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_GPSPlugin__gPSSensorPosition;

        ::ecore::EReference_ptr m_GPSPlugin__internalGpsDetailedInfo;

        ::ecore::EReference_ptr m_GPSPluginProvider__gPSPlugin;

    };

}
 // gpsplugin
}// nevonex

#endif // _NEVONEX_GPSPLUGINPACKAGE_HPP
