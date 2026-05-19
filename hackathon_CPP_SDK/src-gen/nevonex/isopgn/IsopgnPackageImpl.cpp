/*
 * nevonex/isopgn/IsopgnPackageImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/isopgn/IsopgnPackage.hpp>
#include <nevonex/isopgn/IsopgnFactory.hpp>
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
#include <ecore/EcorePackage.hpp>
#include <nevonex/common/CommonPackage.hpp>

using namespace ::nevonex::isopgn;

IsopgnPackage::IsopgnPackage()
{

    // Feature definitions of ISOPGN
    m_ISOPGN__accpedPos1 = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__ambAirt = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__brkPedPos = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__engFuRatePerTime = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__engSpd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__engTotOperHrs = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__fuLvlPer = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__fuLvlPer2 = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__gndBasdMacSpd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__tachoVehSpd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__totalVehDist = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__totVehHrs = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ISOPGN__whlBasdMacSpd = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of ISOPGNProvider
    m_ISOPGNProvider__iSOPGN = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void IsopgnPackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = IsopgnFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // ISOPGN
    {
        m_ISOPGNEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ISOPGNEClass->setClassifierID(ISOPGN);
        m_ISOPGNEClass->setEPackage(_this());
        getEClassifiers().push_back(m_ISOPGNEClass);
    }
    // m_ISOPGN__accpedPos1 has already been allocated above
    m_ISOPGN__accpedPos1->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__ACCPEDPOS1);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__accpedPos1);
    // m_ISOPGN__ambAirt has already been allocated above
    m_ISOPGN__ambAirt->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__AMBAIRT);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__ambAirt);
    // m_ISOPGN__brkPedPos has already been allocated above
    m_ISOPGN__brkPedPos->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__BRKPEDPOS);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__brkPedPos);
    // m_ISOPGN__engFuRatePerTime has already been allocated above
    m_ISOPGN__engFuRatePerTime->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGFURATEPERTIME);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__engFuRatePerTime);
    // m_ISOPGN__engSpd has already been allocated above
    m_ISOPGN__engSpd->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGSPD);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__engSpd);
    // m_ISOPGN__engTotOperHrs has already been allocated above
    m_ISOPGN__engTotOperHrs->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGTOTOPERHRS);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__engTotOperHrs);
    // m_ISOPGN__fuLvlPer has already been allocated above
    m_ISOPGN__fuLvlPer->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__fuLvlPer);
    // m_ISOPGN__fuLvlPer2 has already been allocated above
    m_ISOPGN__fuLvlPer2->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER2);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__fuLvlPer2);
    // m_ISOPGN__gndBasdMacSpd has already been allocated above
    m_ISOPGN__gndBasdMacSpd->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__GNDBASDMACSPD);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__gndBasdMacSpd);
    // m_ISOPGN__tachoVehSpd has already been allocated above
    m_ISOPGN__tachoVehSpd->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__TACHOVEHSPD);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__tachoVehSpd);
    // m_ISOPGN__totalVehDist has already been allocated above
    m_ISOPGN__totalVehDist->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTALVEHDIST);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__totalVehDist);
    // m_ISOPGN__totVehHrs has already been allocated above
    m_ISOPGN__totVehHrs->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTVEHHRS);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__totVehHrs);
    // m_ISOPGN__whlBasdMacSpd has already been allocated above
    m_ISOPGN__whlBasdMacSpd->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGN__WHLBASDMACSPD);
    m_ISOPGNEClass->getEStructuralFeatures().push_back(
            m_ISOPGN__whlBasdMacSpd);

    // ISOPGNProvider
    {
        m_ISOPGNProviderEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ISOPGNProviderEClass->setClassifierID(ISOPGNPROVIDER);
        m_ISOPGNProviderEClass->setEPackage(_this());
        getEClassifiers().push_back(m_ISOPGNProviderEClass);
    }
    // m_ISOPGNProvider__iSOPGN has already been allocated above
    m_ISOPGNProvider__iSOPGN->setFeatureID(
            ::nevonex::isopgn::IsopgnPackage::ISOPGNPROVIDER__ISOPGN);
    m_ISOPGNProviderEClass->getEStructuralFeatures().push_back(
            m_ISOPGNProvider__iSOPGN);

    // Create enums

    // Create data types

    // Initialize package
    setName("isopgn");
    setNsPrefix("isopgn");
    setNsURI("com.bosch.nevonex.isopgn");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ISOPGNEClass->getESuperTypes().push_back(
            dynamic_cast< ::nevonex::common::CommonPackage* >(::nevonex::common::CommonPackage::_instance().get())->getTopicObject());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ISOPGN
    m_ISOPGNEClass->setName("ISOPGN");
    m_ISOPGNEClass->setAbstract(false);
    m_ISOPGNEClass->setInterface(false);
    m_ISOPGN__accpedPos1->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__accpedPos1),
            "accpedPos1", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__accpedPos1->setID(false);
    m_ISOPGN__ambAirt->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__ambAirt),
            "ambAirt", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__ambAirt->setID(false);
    m_ISOPGN__brkPedPos->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__brkPedPos),
            "brkPedPos", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__brkPedPos->setID(false);
    m_ISOPGN__engFuRatePerTime->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__engFuRatePerTime),
            "engFuRatePerTime", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__engFuRatePerTime->setID(false);
    m_ISOPGN__engSpd->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__engSpd),
            "engSpd", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__engSpd->setID(false);
    m_ISOPGN__engTotOperHrs->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__engTotOperHrs),
            "engTotOperHrs", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__engTotOperHrs->setID(false);
    m_ISOPGN__fuLvlPer->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__fuLvlPer),
            "fuLvlPer", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__fuLvlPer->setID(false);
    m_ISOPGN__fuLvlPer2->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__fuLvlPer2),
            "fuLvlPer2", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__fuLvlPer2->setID(false);
    m_ISOPGN__gndBasdMacSpd->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__gndBasdMacSpd),
            "gndBasdMacSpd", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__gndBasdMacSpd->setID(false);
    m_ISOPGN__tachoVehSpd->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__tachoVehSpd),
            "tachoVehSpd", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__tachoVehSpd->setID(false);
    m_ISOPGN__totalVehDist->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__totalVehDist),
            "totalVehDist", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__totalVehDist->setID(false);
    m_ISOPGN__totVehHrs->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__totVehHrs),
            "totVehHrs", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__totVehHrs->setID(false);
    m_ISOPGN__whlBasdMacSpd->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ISOPGN__whlBasdMacSpd),
            "whlBasdMacSpd", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_ISOPGN__whlBasdMacSpd->setID(false);
    // ISOPGNProvider
    m_ISOPGNProviderEClass->setName("ISOPGNProvider");
    m_ISOPGNProviderEClass->setAbstract(false);
    m_ISOPGNProviderEClass->setInterface(false);
    m_ISOPGNProvider__iSOPGN->setEType(
            dynamic_cast< ::nevonex::isopgn::IsopgnPackage* >(::nevonex::isopgn::IsopgnPackage::_instance().get())->getISOPGN());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_ISOPGNProvider__iSOPGN),
            "iSOPGN", false, false, false, "", false, true, true, true, 0,
            1, false, false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr IsopgnPackage::getISOPGN()
{
    return m_ISOPGNEClass;
}
::ecore::EClass_ptr IsopgnPackage::getISOPGNProvider()
{
    return m_ISOPGNProviderEClass;
}

::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__accpedPos1()
{
    return m_ISOPGN__accpedPos1;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__ambAirt()
{
    return m_ISOPGN__ambAirt;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__brkPedPos()
{
    return m_ISOPGN__brkPedPos;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__engFuRatePerTime()
{
    return m_ISOPGN__engFuRatePerTime;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__engSpd()
{
    return m_ISOPGN__engSpd;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__engTotOperHrs()
{
    return m_ISOPGN__engTotOperHrs;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__fuLvlPer()
{
    return m_ISOPGN__fuLvlPer;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__fuLvlPer2()
{
    return m_ISOPGN__fuLvlPer2;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__gndBasdMacSpd()
{
    return m_ISOPGN__gndBasdMacSpd;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__tachoVehSpd()
{
    return m_ISOPGN__tachoVehSpd;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__totalVehDist()
{
    return m_ISOPGN__totalVehDist;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__totVehHrs()
{
    return m_ISOPGN__totVehHrs;
}
::ecore::EAttribute_ptr IsopgnPackage::getISOPGN__whlBasdMacSpd()
{
    return m_ISOPGN__whlBasdMacSpd;
}
::ecore::EReference_ptr IsopgnPackage::getISOPGNProvider__iSOPGN()
{
    return m_ISOPGNProvider__iSOPGN;
}
