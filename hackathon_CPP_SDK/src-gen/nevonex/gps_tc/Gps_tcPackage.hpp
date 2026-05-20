/*
 * nevonex/gps_tc/Gps_tcPackage.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_GPS_TCPACKAGE_HPP
#define _NEVONEX_GPS_TCPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nevonex/gps_tc_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <nevonex/common/CommonPackage.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace gps_tc
    {

    class EXPORT_NEVONEX_DLL Gps_tcPackage : public virtual ::ecore::EPackage
    {
    public:

        static Gps_tcPackage_ptr _instance();
        static Gps_tcPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int GPS_TC = 0;

        static const int GPS_TCPROVIDER = 1;

        static const int IGPS_TC = 2;

        static const int IGPS_TCFACTORY = 3;

        static const int IGPS_TCPROVIDER = 4;

        static const int GPS_TC__ACTIVE_TC_GPS_SOURCE = 0;

        static const int GPS_TC__POSITIONOFGPSSENSOR = 1;

        static const int GPS_TC__TCGPSINFO = 2;

        static const int GPS_TCPROVIDER__GPS_TC = 3;

        // IDs for classifiers for inherited features

        static const int GPS_TC__INDEX = ::nevonex::common::CommonPackage::TOPICOBJECT__INDEX;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getGPS_TC();
        virtual ::ecore::EClass_ptr getGPS_TCProvider();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getGPS_TC__active_TC_GPS_source();
        virtual ::ecore::EAttribute_ptr getGPS_TC__positionofGpsSensor();
        virtual ::ecore::EReference_ptr getGPS_TC__tcGpsInfo();
        virtual ::ecore::EReference_ptr getGPS_TCProvider__gPS_TC();

    protected:

        static ::ecore::Ptr< Gps_tcPackage > s_instance;

        Gps_tcPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_GPS_TCEClass;

        ::ecore::EClass_ptr m_GPS_TCProviderEClass;

        // EEnuminstances 



        // EDataType instances 



        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_GPS_TC__active_TC_GPS_source;

        ::ecore::EAttribute_ptr m_GPS_TC__positionofGpsSensor;

        ::ecore::EReference_ptr m_GPS_TC__tcGpsInfo;

        ::ecore::EReference_ptr m_GPS_TCProvider__gPS_TC;

    };

}
 // gps_tc
}// nevonex

#endif // _NEVONEX_GPS_TCPACKAGE_HPP
