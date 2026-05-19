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

    // Feature definitions of INTERNAL_GPS_DETAILEDINFO_R
    m_INTERNAL_GPS_DETAILEDINFO_R__latitude = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__longitude = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__altitude = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__positionDil = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__timeDil = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__speed = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__course = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites = ::ecore::Ptr < ::ecore::EAttribute
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

    // INTERNAL_GPS_DETAILEDINFO_R
    {
        m_INTERNAL_GPS_DETAILEDINFO_REClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_INTERNAL_GPS_DETAILEDINFO_REClass->setClassifierID(INTERNAL_GPS_DETAILEDINFO_R);
        m_INTERNAL_GPS_DETAILEDINFO_REClass->setEPackage(_this());
        getEClassifiers().push_back(m_INTERNAL_GPS_DETAILEDINFO_REClass);
    }
    // m_INTERNAL_GPS_DETAILEDINFO_R__latitude has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__latitude->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LATITUDE);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__latitude);
    // m_INTERNAL_GPS_DETAILEDINFO_R__longitude has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__longitude->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__longitude);
    // m_INTERNAL_GPS_DETAILEDINFO_R__altitude has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__altitude->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__altitude);
    // m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMESTAMP);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp);
    // m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALACCURACY);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy);
    // m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALACCURACY);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy);
    // m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALDIL);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil);
    // m_INTERNAL_GPS_DETAILEDINFO_R__positionDil has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__positionDil->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__POSITIONDIL);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__positionDil);
    // m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALDIL);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil);
    // m_INTERNAL_GPS_DETAILEDINFO_R__timeDil has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__timeDil->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMEDIL);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__timeDil);
    // m_INTERNAL_GPS_DETAILEDINFO_R__speed has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__speed->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__SPEED);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__speed);
    // m_INTERNAL_GPS_DETAILEDINFO_R__course has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__course->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__COURSE);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__course);
    // m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites has already been allocated above
    m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites->setFeatureID(
            ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__NUMBEROFSATELLITES);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->getEStructuralFeatures().push_back(
            m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites);

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
    // INTERNAL_GPS_DETAILEDINFO_R
    m_INTERNAL_GPS_DETAILEDINFO_REClass->setName("INTERNAL_GPS_DETAILEDINFO_R");
    m_INTERNAL_GPS_DETAILEDINFO_REClass->setAbstract(false);
    m_INTERNAL_GPS_DETAILEDINFO_REClass->setInterface(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__latitude->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__latitude),
            "latitude", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__latitude->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__longitude->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__longitude),
            "longitude", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__longitude->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__altitude->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__altitude),
            "altitude", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__altitude->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp),
            "timeStamp", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy),
            "horizontalAccuracy", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy),
            "verticalAccuracy", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil),
            "horizontalDil", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__positionDil->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__positionDil),
            "positionDil", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__positionDil->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil),
            "verticalDil", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__timeDil->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__timeDil),
            "timeDil", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__timeDil->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__speed->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__speed),
            "speed", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__speed->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__course->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEFloat());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__course),
            "course", true, false, false, "0.0f", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__course->setID(false);
    m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites),
            "numberOfSatellites", true, false, false, "0", false, false, true, true, 0,
            1, false, false);
    m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites->setID(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr FcalPackage::getBulkProcessor()
{
    return m_BulkProcessorEClass;
}
::ecore::EClass_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R()
{
    return m_INTERNAL_GPS_DETAILEDINFO_REClass;
}

::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__latitude()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__latitude;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__longitude()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__longitude;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__altitude()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__altitude;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__timeStamp()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__timeStamp;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__horizontalAccuracy;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__verticalAccuracy;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__horizontalDil()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__horizontalDil;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__positionDil()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__positionDil;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__verticalDil()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__verticalDil;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__timeDil()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__timeDil;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__speed()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__speed;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__course()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__course;
}
::ecore::EAttribute_ptr FcalPackage::getINTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites()
{
    return m_INTERNAL_GPS_DETAILEDINFO_R__numberOfSatellites;
}
