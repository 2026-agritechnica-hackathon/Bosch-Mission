/*
 * nevonex/fcal/FcalPackageImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/fcal/FcalPackage.hpp>
#include <nevonex/fcal/FcalFactory.hpp>
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

using namespace ::nevonex::fcal;

FcalPackage::FcalPackage()
{

    // Feature definitions of GPS_INFO_R
    m_GPS_INFO_R__latitude = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_INFO_R__longitude = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_INFO_R__altitude = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_INFO_R__positionTime = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_INFO_R__hDOP = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_INFO_R__pDOP = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPS_INFO_R__numberOfSattelites = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void FcalPackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = FcalFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // BulkProcessor
    {
        m_BulkProcessorEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_BulkProcessorEClass->setClassifierID(BULKPROCESSOR);
        m_BulkProcessorEClass->setEPackage(_this());
        getEClassifiers().push_back(m_BulkProcessorEClass);
    }

    // GPS_INFO_R
    {
        m_GPS_INFO_REClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_GPS_INFO_REClass->setClassifierID(GPS_INFO_R);
        m_GPS_INFO_REClass->setEPackage(_this());
        getEClassifiers().push_back(m_GPS_INFO_REClass);
    }
    // m_GPS_INFO_R__latitude has already been allocated above
    m_GPS_INFO_R__latitude->setFeatureID(
            ::nevonex::fcal::FcalPackage::GPS_INFO_R__LATITUDE);
    m_GPS_INFO_REClass->getEStructuralFeatures().push_back(
            m_GPS_INFO_R__latitude);
    // m_GPS_INFO_R__longitude has already been allocated above
    m_GPS_INFO_R__longitude->setFeatureID(
            ::nevonex::fcal::FcalPackage::GPS_INFO_R__LONGITUDE);
    m_GPS_INFO_REClass->getEStructuralFeatures().push_back(
            m_GPS_INFO_R__longitude);
    // m_GPS_INFO_R__altitude has already been allocated above
    m_GPS_INFO_R__altitude->setFeatureID(
            ::nevonex::fcal::FcalPackage::GPS_INFO_R__ALTITUDE);
    m_GPS_INFO_REClass->getEStructuralFeatures().push_back(
            m_GPS_INFO_R__altitude);
    // m_GPS_INFO_R__positionTime has already been allocated above
    m_GPS_INFO_R__positionTime->setFeatureID(
            ::nevonex::fcal::FcalPackage::GPS_INFO_R__POSITIONTIME);
    m_GPS_INFO_REClass->getEStructuralFeatures().push_back(
            m_GPS_INFO_R__positionTime);
    // m_GPS_INFO_R__hDOP has already been allocated above
    m_GPS_INFO_R__hDOP->setFeatureID(
            ::nevonex::fcal::FcalPackage::GPS_INFO_R__HDOP);
    m_GPS_INFO_REClass->getEStructuralFeatures().push_back(
            m_GPS_INFO_R__hDOP);
    // m_GPS_INFO_R__pDOP has already been allocated above
    m_GPS_INFO_R__pDOP->setFeatureID(
            ::nevonex::fcal::FcalPackage::GPS_INFO_R__PDOP);
    m_GPS_INFO_REClass->getEStructuralFeatures().push_back(
            m_GPS_INFO_R__pDOP);
    // m_GPS_INFO_R__numberOfSattelites has already been allocated above
    m_GPS_INFO_R__numberOfSattelites->setFeatureID(
            ::nevonex::fcal::FcalPackage::GPS_INFO_R__NUMBEROFSATTELITES);
    m_GPS_INFO_REClass->getEStructuralFeatures().push_back(
            m_GPS_INFO_R__numberOfSattelites);

    // Create enums

    // Create data types

    // Initialize package
    setName("fcal");
    setNsPrefix("fcal");
    setNsURI("com.bosch.nevonex.fcal");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // BulkProcessor
    m_BulkProcessorEClass->setName("BulkProcessor");
    m_BulkProcessorEClass->setAbstract(false);
    m_BulkProcessorEClass->setInterface(false);
    // GPS_INFO_R
    m_GPS_INFO_REClass->setName("GPS_INFO_R");
    m_GPS_INFO_REClass->setAbstract(false);
    m_GPS_INFO_REClass->setInterface(false);
    m_GPS_INFO_R__latitude->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_INFO_R__latitude),
            "latitude", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_GPS_INFO_R__latitude->setID(false);
    m_GPS_INFO_R__longitude->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_INFO_R__longitude),
            "longitude", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_GPS_INFO_R__longitude->setID(false);
    m_GPS_INFO_R__altitude->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_INFO_R__altitude),
            "altitude", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_GPS_INFO_R__altitude->setID(false);
    m_GPS_INFO_R__positionTime->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_INFO_R__positionTime),
            "positionTime", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_GPS_INFO_R__positionTime->setID(false);
    m_GPS_INFO_R__hDOP->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_INFO_R__hDOP),
            "hDOP", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_GPS_INFO_R__hDOP->setID(false);
    m_GPS_INFO_R__pDOP->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_INFO_R__pDOP),
            "pDOP", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_GPS_INFO_R__pDOP->setID(false);
    m_GPS_INFO_R__numberOfSattelites->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPS_INFO_R__numberOfSattelites),
            "numberOfSattelites", true, false, false, "0", false, false, true, true, 0,
            1, false, false);
    m_GPS_INFO_R__numberOfSattelites->setID(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr FcalPackage::getBulkProcessor()
{
    return m_BulkProcessorEClass;
}
::ecore::EClass_ptr FcalPackage::getGPS_INFO_R()
{
    return m_GPS_INFO_REClass;
}

::ecore::EAttribute_ptr FcalPackage::getGPS_INFO_R__latitude()
{
    return m_GPS_INFO_R__latitude;
}
::ecore::EAttribute_ptr FcalPackage::getGPS_INFO_R__longitude()
{
    return m_GPS_INFO_R__longitude;
}
::ecore::EAttribute_ptr FcalPackage::getGPS_INFO_R__altitude()
{
    return m_GPS_INFO_R__altitude;
}
::ecore::EAttribute_ptr FcalPackage::getGPS_INFO_R__positionTime()
{
    return m_GPS_INFO_R__positionTime;
}
::ecore::EAttribute_ptr FcalPackage::getGPS_INFO_R__hDOP()
{
    return m_GPS_INFO_R__hDOP;
}
::ecore::EAttribute_ptr FcalPackage::getGPS_INFO_R__pDOP()
{
    return m_GPS_INFO_R__pDOP;
}
::ecore::EAttribute_ptr FcalPackage::getGPS_INFO_R__numberOfSattelites()
{
    return m_GPS_INFO_R__numberOfSattelites;
}
