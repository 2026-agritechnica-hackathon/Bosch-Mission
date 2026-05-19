/*
 * nevonex/isopgn/IsopgnPackage.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_ISOPGNPACKAGE_HPP
#define _NEVONEX_ISOPGNPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nevonex/isopgn_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <nevonex/common/CommonPackage.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace isopgn
    {

    class EXPORT_NEVONEX_DLL IsopgnPackage : public virtual ::ecore::EPackage
    {
    public:

        static IsopgnPackage_ptr _instance();
        static IsopgnPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int IISOPGN = 0;

        static const int IISOPGNFACTORY = 1;

        static const int IISOPGNPROVIDER = 2;

        static const int ISOPGN = 3;

        static const int ISOPGNPROVIDER = 4;

        static const int ISOPGN__ACCPEDPOS1 = 0;

        static const int ISOPGN__AMBAIRT = 1;

        static const int ISOPGN__BRKPEDPOS = 2;

        static const int ISOPGN__ENGFURATEPERTIME = 3;

        static const int ISOPGN__ENGSPD = 4;

        static const int ISOPGN__ENGTOTOPERHRS = 5;

        static const int ISOPGN__FULVLPER = 6;

        static const int ISOPGN__FULVLPER2 = 7;

        static const int ISOPGN__GNDBASDMACSPD = 8;

        static const int ISOPGN__TACHOVEHSPD = 9;

        static const int ISOPGN__TOTALVEHDIST = 10;

        static const int ISOPGN__TOTVEHHRS = 11;

        static const int ISOPGN__WHLBASDMACSPD = 12;

        static const int ISOPGNPROVIDER__ISOPGN = 13;

        // IDs for classifiers for inherited features

        static const int ISOPGN__INDEX = ::nevonex::common::CommonPackage::TOPICOBJECT__INDEX;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getISOPGN();
        virtual ::ecore::EClass_ptr getISOPGNProvider();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getISOPGN__accpedPos1();
        virtual ::ecore::EAttribute_ptr getISOPGN__ambAirt();
        virtual ::ecore::EAttribute_ptr getISOPGN__brkPedPos();
        virtual ::ecore::EAttribute_ptr getISOPGN__engFuRatePerTime();
        virtual ::ecore::EAttribute_ptr getISOPGN__engSpd();
        virtual ::ecore::EAttribute_ptr getISOPGN__engTotOperHrs();
        virtual ::ecore::EAttribute_ptr getISOPGN__fuLvlPer();
        virtual ::ecore::EAttribute_ptr getISOPGN__fuLvlPer2();
        virtual ::ecore::EAttribute_ptr getISOPGN__gndBasdMacSpd();
        virtual ::ecore::EAttribute_ptr getISOPGN__tachoVehSpd();
        virtual ::ecore::EAttribute_ptr getISOPGN__totalVehDist();
        virtual ::ecore::EAttribute_ptr getISOPGN__totVehHrs();
        virtual ::ecore::EAttribute_ptr getISOPGN__whlBasdMacSpd();
        virtual ::ecore::EReference_ptr getISOPGNProvider__iSOPGN();

    protected:

        static ::ecore::Ptr< IsopgnPackage > s_instance;

        IsopgnPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ISOPGNEClass;

        ::ecore::EClass_ptr m_ISOPGNProviderEClass;

        // EEnuminstances 



        // EDataType instances 



        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_ISOPGN__accpedPos1;

        ::ecore::EAttribute_ptr m_ISOPGN__ambAirt;

        ::ecore::EAttribute_ptr m_ISOPGN__brkPedPos;

        ::ecore::EAttribute_ptr m_ISOPGN__engFuRatePerTime;

        ::ecore::EAttribute_ptr m_ISOPGN__engSpd;

        ::ecore::EAttribute_ptr m_ISOPGN__engTotOperHrs;

        ::ecore::EAttribute_ptr m_ISOPGN__fuLvlPer;

        ::ecore::EAttribute_ptr m_ISOPGN__fuLvlPer2;

        ::ecore::EAttribute_ptr m_ISOPGN__gndBasdMacSpd;

        ::ecore::EAttribute_ptr m_ISOPGN__tachoVehSpd;

        ::ecore::EAttribute_ptr m_ISOPGN__totalVehDist;

        ::ecore::EAttribute_ptr m_ISOPGN__totVehHrs;

        ::ecore::EAttribute_ptr m_ISOPGN__whlBasdMacSpd;

        ::ecore::EReference_ptr m_ISOPGNProvider__iSOPGN;

    };

}
 // isopgn
}// nevonex

#endif // _NEVONEX_ISOPGNPACKAGE_HPP
