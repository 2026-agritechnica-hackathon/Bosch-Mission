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

        static const int IBULKPROCESSOR = 1;

        static const int IFCALFACTORY = 2;

        static const int INTERNAL_GPS_DETAILEDINFO_R = 3;

        static const int INTERNAL_GPS_DETAILEDINFO_R__LATITUDE = 0;

        static const int INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE = 1;

        static const int INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE = 2;

        static const int INTERNAL_GPS_DETAILEDINFO_R__TIMESTAMP = 3;

        static const int INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALACCURACY = 4;

        static const int INTERNAL_GPS_DETAILEDINFO_R__VERTICALACCURACY = 5;

        static const int INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALDIL = 6;

        static const int INTERNAL_GPS_DETAILEDINFO_R__POSITIONDIL = 7;

        static const int INTERNAL_GPS_DETAILEDINFO_R__VERTICALDIL = 8;

        static const int INTERNAL_GPS_DETAILEDINFO_R__TIMEDIL = 9;

        static const int INTERNAL_GPS_DETAILEDINFO_R__SPEED = 10;

        static const int INTERNAL_GPS_DETAILEDINFO_R__COURSE = 11;

        static const int INTERNAL_GPS_DETAILEDINFO_R__NUMBEROFSATELLITES = 12;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getBulkProcessor();
        virtual ::ecore::EClass_ptr getINTERNAL_GPS_DETAILEDINFO_R();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__latitude();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__longitude();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__altitude();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__timeStamp();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__horizontalDil();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__positionDil();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__verticalDil();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__timeDil();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__speed();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__course();
        virtual ::ecore::EAttribute_ptr getINTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites();

    protected:

        static ::ecore::Ptr< FcalPackage > s_instance;

        FcalPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_BulkProcessorEClass;

        ::ecore::EClass_ptr m_INTERNAL_GPS_DETAILEDINFO_REClass;

        // EEnuminstances 



        // EDataType instances 



        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__latitude;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__longitude;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__altitude;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__positionDil;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__timeDil;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__speed;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__course;

        ::ecore::EAttribute_ptr m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites;

    };

}
 // fcal
}// nevonex

#endif // _NEVONEX_FCALPACKAGE_HPP
