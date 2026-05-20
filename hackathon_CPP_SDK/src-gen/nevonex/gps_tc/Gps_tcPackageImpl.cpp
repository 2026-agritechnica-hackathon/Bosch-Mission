/*
 * nevonex/gps_tc/Gps_tcPackageImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gps_tc/Gps_tcPackage.hpp>
#include <nevonex/gps_tc/Gps_tcFactory.hpp>
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
#include <nevonex/fcal/FcalPackage.hpp>

using namespace ::nevonex::gps_tc;

Gps_tcPackage::Gps_tcPackage()
{

    // Feature definitions of GPS_TC
    m_GPS_TC__active_TC_GPS_source = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_TC__positionofGpsSensor = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_TC__tcGpsInfo = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of GPS_TCProvider
    m_GPS_TCProvider__gPS_TC = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void Gps_tcPackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = Gps_tcFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // GPS_TC
    {
        m_GPS_TCEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_GPS_TCEClass->setClassifierID(GPS_TC);
        m_GPS_TCEClass->setEPackage(_this());
        getEClassifiers().push_back(m_GPS_TCEClass);
    }
    // m_GPS_TC__active_TC_GPS_source has already been allocated above
    m_GPS_TC__active_TC_GPS_source->setFeatureID(
            ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__ACTIVE_TC_GPS_SOURCE);
    m_GPS_TCEClass->getEStructuralFeatures().push_back(
            m_GPS_TC__active_TC_GPS_source);
    // m_GPS_TC__positionofGpsSensor has already been allocated above
    m_GPS_TC__positionofGpsSensor->setFeatureID(
            ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__POSITIONOFGPSSENSOR);
    m_GPS_TCEClass->getEStructuralFeatures().push_back(
            m_GPS_TC__positionofGpsSensor);
    // m_GPS_TC__tcGpsInfo has already been allocated above
    m_GPS_TC__tcGpsInfo->setFeatureID(
            ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__TCGPSINFO);
    m_GPS_TCEClass->getEStructuralFeatures().push_back(
            m_GPS_TC__tcGpsInfo);

    // GPS_TCProvider
    {
        m_GPS_TCProviderEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_GPS_TCProviderEClass->setClassifierID(GPS_TCPROVIDER);
        m_GPS_TCProviderEClass->setEPackage(_this());
        getEClassifiers().push_back(m_GPS_TCProviderEClass);
    }
    // m_GPS_TCProvider__gPS_TC has already been allocated above
    m_GPS_TCProvider__gPS_TC->setFeatureID(
            ::nevonex::gps_tc::Gps_tcPackage::GPS_TCPROVIDER__GPS_TC);
    m_GPS_TCProviderEClass->getEStructuralFeatures().push_back(
            m_GPS_TCProvider__gPS_TC);

    // Create enums

    // Create data types

    // Initialize package
    setName("gps_tc");
    setNsPrefix("gps_tc");
    setNsURI("com.bosch.nevonex.gps_tc");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_GPS_TCEClass->getESuperTypes().push_back(
            dynamic_cast< ::nevonex::common::CommonPackage* >(::nevonex::common::CommonPackage::_instance().get())->getTopicObject());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // GPS_TC
    m_GPS_TCEClass->setName("GPS_TC");
    m_GPS_TCEClass->setAbstract(false);
    m_GPS_TCEClass->setInterface(false);
    m_GPS_TC__active_TC_GPS_source->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_TC__active_TC_GPS_source),
            "active_TC_GPS_source", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_GPS_TC__active_TC_GPS_source->setID(false);
    m_GPS_TC__positionofGpsSensor->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_TC__positionofGpsSensor),
            "positionofGpsSensor", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_GPS_TC__positionofGpsSensor->setID(false);
    m_GPS_TC__tcGpsInfo->setEType(
            dynamic_cast< ::nevonex::fcal::FcalPackage* >(::nevonex::fcal::FcalPackage::_instance().get())->getGPS_INFO_R());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_GPS_TC__tcGpsInfo),
            "tcGpsInfo", false, false, false, "", false, false, true, true, 0,
            1, false, false);
    // GPS_TCProvider
    m_GPS_TCProviderEClass->setName("GPS_TCProvider");
    m_GPS_TCProviderEClass->setAbstract(false);
    m_GPS_TCProviderEClass->setInterface(false);
    m_GPS_TCProvider__gPS_TC->setEType(
            dynamic_cast< ::nevonex::gps_tc::Gps_tcPackage* >(::nevonex::gps_tc::Gps_tcPackage::_instance().get())->getGPS_TC());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_GPS_TCProvider__gPS_TC),
            "gPS_TC", false, false, false, "", false, true, true, true, 0,
            1, false, false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr Gps_tcPackage::getGPS_TC()
{
    return m_GPS_TCEClass;
}
::ecore::EClass_ptr Gps_tcPackage::getGPS_TCProvider()
{
    return m_GPS_TCProviderEClass;
}

::ecore::EAttribute_ptr Gps_tcPackage::getGPS_TC__active_TC_GPS_source()
{
    return m_GPS_TC__active_TC_GPS_source;
}
::ecore::EAttribute_ptr Gps_tcPackage::getGPS_TC__positionofGpsSensor()
{
    return m_GPS_TC__positionofGpsSensor;
}
::ecore::EReference_ptr Gps_tcPackage::getGPS_TC__tcGpsInfo()
{
    return m_GPS_TC__tcGpsInfo;
}
::ecore::EReference_ptr Gps_tcPackage::getGPS_TCProvider__gPS_TC()
{
    return m_GPS_TCProvider__gPS_TC;
}
