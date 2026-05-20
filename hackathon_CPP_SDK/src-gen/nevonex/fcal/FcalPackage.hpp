/*
 * nevonex/fcal/FcalPackage.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_FCALPACKAGE_HPP
#define _NEVONEX_FCALPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nevonex/fcal_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <nevonex/types/TypesPackage.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace fcal
    {

    class EXPORT_NEVONEX_DLL FcalPackage : public virtual ::ecore::EPackage
    {
    public:

        static FcalPackage_ptr _instance();
        static FcalPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int BULKPROCESSOR = 0;

        static const int GPS_INFO_R = 1;

        static const int IBULKPROCESSOR = 2;

        static const int IFCALFACTORY = 3;

        static const int GPS_INFO_R__LATITUDE = 0;

        static const int GPS_INFO_R__LONGITUDE = 1;

        static const int GPS_INFO_R__ALTITUDE = 2;

        static const int GPS_INFO_R__POSITIONTIME = 3;

        static const int GPS_INFO_R__HDOP = 4;

        static const int GPS_INFO_R__PDOP = 5;

        static const int GPS_INFO_R__NUMBEROFSATTELITES = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getBulkProcessor();
        virtual ::ecore::EClass_ptr getGPS_INFO_R();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getGPS_INFO_R__latitude();
        virtual ::ecore::EAttribute_ptr getGPS_INFO_R__longitude();
        virtual ::ecore::EAttribute_ptr getGPS_INFO_R__altitude();
        virtual ::ecore::EAttribute_ptr getGPS_INFO_R__positionTime();
        virtual ::ecore::EAttribute_ptr getGPS_INFO_R__hDOP();
        virtual ::ecore::EAttribute_ptr getGPS_INFO_R__pDOP();
        virtual ::ecore::EAttribute_ptr getGPS_INFO_R__numberOfSattelites();

    protected:

        static ::ecore::Ptr< FcalPackage > s_instance;

        FcalPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_BulkProcessorEClass;

        ::ecore::EClass_ptr m_GPS_INFO_REClass;

        // EEnuminstances 



        // EDataType instances 



        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_GPS_INFO_R__latitude;

        ::ecore::EAttribute_ptr m_GPS_INFO_R__longitude;

        ::ecore::EAttribute_ptr m_GPS_INFO_R__altitude;

        ::ecore::EAttribute_ptr m_GPS_INFO_R__positionTime;

        ::ecore::EAttribute_ptr m_GPS_INFO_R__hDOP;

        ::ecore::EAttribute_ptr m_GPS_INFO_R__pDOP;

        ::ecore::EAttribute_ptr m_GPS_INFO_R__numberOfSattelites;

    };

}
 // fcal
}// nevonex

#endif // _NEVONEX_FCALPACKAGE_HPP
