/*
 * nevonex/gpsplugin/GpspluginPackageImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gpsplugin/GpspluginPackage.hpp>
#include <nevonex/gpsplugin/GpspluginFactory.hpp>
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

using namespace ::nevonex::gpsplugin;

GpspluginPackage::GpspluginPackage()
{

    // Feature definitions of GPSPlugin
    m_GPSPlugin__gPSSensorPosition = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_GPSPlugin__internalGpsDetailedInfo = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of GPSPluginProvider
    m_GPSPluginProvider__gPSPlugin = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void GpspluginPackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = GpspluginFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // GPSPlugin
    {
        m_GPSPluginEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_GPSPluginEClass->setClassifierID(GPSPLUGIN);
        m_GPSPluginEClass->setEPackage(_this());
        getEClassifiers().push_back(m_GPSPluginEClass);
    }
    // m_GPSPlugin__gPSSensorPosition has already been allocated above
    m_GPSPlugin__gPSSensorPosition->setFeatureID(
            ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__GPSSENSORPOSITION);
    m_GPSPluginEClass->getEStructuralFeatures().push_back(
            m_GPSPlugin__gPSSensorPosition);
    // m_GPSPlugin__internalGpsDetailedInfo has already been allocated above
    m_GPSPlugin__internalGpsDetailedInfo->setFeatureID(
            ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__INTERNALGPSDETAILEDINFO);
    m_GPSPluginEClass->getEStructuralFeatures().push_back(
            m_GPSPlugin__internalGpsDetailedInfo);

    // GPSPluginProvider
    {
        m_GPSPluginProviderEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_GPSPluginProviderEClass->setClassifierID(GPSPLUGINPROVIDER);
        m_GPSPluginProviderEClass->setEPackage(_this());
        getEClassifiers().push_back(m_GPSPluginProviderEClass);
    }
    // m_GPSPluginProvider__gPSPlugin has already been allocated above
    m_GPSPluginProvider__gPSPlugin->setFeatureID(
            ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGINPROVIDER__GPSPLUGIN);
    m_GPSPluginProviderEClass->getEStructuralFeatures().push_back(
            m_GPSPluginProvider__gPSPlugin);

    // Create enums

    // Create data types

    // Initialize package
    setName("gpsplugin");
    setNsPrefix("gpsplugin");
    setNsURI("com.bosch.nevonex.gpsplugin");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_GPSPluginEClass->getESuperTypes().push_back(
            dynamic_cast< ::nevonex::common::CommonPackage* >(::nevonex::common::CommonPackage::_instance().get())->getTopicObject());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // GPSPlugin
    m_GPSPluginEClass->setName("GPSPlugin");
    m_GPSPluginEClass->setAbstract(false);
    m_GPSPluginEClass->setInterface(false);
    m_GPSPlugin__gPSSensorPosition->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_GPSPlugin__gPSSensorPosition),
            "gPSSensorPosition", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_GPSPlugin__gPSSensorPosition->setID(false);
    m_GPSPlugin__internalGpsDetailedInfo->setEType(
            dynamic_cast< ::nevonex::fcal::FcalPackage* >(::nevonex::fcal::FcalPackage::_instance().get())->getINTERNAL_GPS_DETAILEDINFO_R());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_GPSPlugin__internalGpsDetailedInfo),
            "internalGpsDetailedInfo", false, false, false, "", false, false, true, true, 0,
            1, false, false);
    // GPSPluginProvider
    m_GPSPluginProviderEClass->setName("GPSPluginProvider");
    m_GPSPluginProviderEClass->setAbstract(false);
    m_GPSPluginProviderEClass->setInterface(false);
    m_GPSPluginProvider__gPSPlugin->setEType(
            dynamic_cast< ::nevonex::gpsplugin::GpspluginPackage* >(::nevonex::gpsplugin::GpspluginPackage::_instance().get())->getGPSPlugin());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_GPSPluginProvider__gPSPlugin),
            "gPSPlugin", false, false, false, "", false, true, true, true, 0,
            1, false, false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr GpspluginPackage::getGPSPlugin()
{
    return m_GPSPluginEClass;
}
::ecore::EClass_ptr GpspluginPackage::getGPSPluginProvider()
{
    return m_GPSPluginProviderEClass;
}

::ecore::EAttribute_ptr GpspluginPackage::getGPSPlugin__gPSSensorPosition()
{
    return m_GPSPlugin__gPSSensorPosition;
}
::ecore::EReference_ptr GpspluginPackage::getGPSPlugin__internalGpsDetailedInfo()
{
    return m_GPSPlugin__internalGpsDetailedInfo;
}
::ecore::EReference_ptr GpspluginPackage::getGPSPluginProvider__gPSPlugin()
{
    return m_GPSPluginProvider__gPSPlugin;
}
