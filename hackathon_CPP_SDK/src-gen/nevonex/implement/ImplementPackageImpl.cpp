/*
 * nevonex/implement/ImplementPackageImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/implement/ImplementPackage.hpp>
#include <nevonex/implement/ImplementFactory.hpp>
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

using namespace ::nevonex::implement;

ImplementPackage::ImplementPackage()
{

    // Feature definitions of Implement
    m_Implement__lifetimeWorkingHours = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of ImplementProvider
    m_ImplementProvider__implement = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void ImplementPackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = ImplementFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // Implement
    {
        m_ImplementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ImplementEClass->setClassifierID(IMPLEMENT);
        m_ImplementEClass->setEPackage(_this());
        getEClassifiers().push_back(m_ImplementEClass);
    }
    // m_Implement__lifetimeWorkingHours has already been allocated above
    m_Implement__lifetimeWorkingHours->setFeatureID(
            ::nevonex::implement::ImplementPackage::IMPLEMENT__LIFETIMEWORKINGHOURS);
    m_ImplementEClass->getEStructuralFeatures().push_back(
            m_Implement__lifetimeWorkingHours);

    // ImplementProvider
    {
        m_ImplementProviderEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ImplementProviderEClass->setClassifierID(IMPLEMENTPROVIDER);
        m_ImplementProviderEClass->setEPackage(_this());
        getEClassifiers().push_back(m_ImplementProviderEClass);
    }
    // m_ImplementProvider__implement has already been allocated above
    m_ImplementProvider__implement->setFeatureID(
            ::nevonex::implement::ImplementPackage::IMPLEMENTPROVIDER__IMPLEMENT);
    m_ImplementProviderEClass->getEStructuralFeatures().push_back(
            m_ImplementProvider__implement);

    // Create enums

    // Create data types

    // Initialize package
    setName("implement");
    setNsPrefix("implement");
    setNsURI("com.bosch.nevonex.implement");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ImplementEClass->getESuperTypes().push_back(
            dynamic_cast< ::nevonex::common::CommonPackage* >(::nevonex::common::CommonPackage::_instance().get())->getTopicObject());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Implement
    m_ImplementEClass->setName("Implement");
    m_ImplementEClass->setAbstract(false);
    m_ImplementEClass->setInterface(false);
    m_Implement__lifetimeWorkingHours->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_Implement__lifetimeWorkingHours),
            "lifetimeWorkingHours", true, false, false, "0.0", false, false, true, true, 0,
            1, false, false);
    m_Implement__lifetimeWorkingHours->setID(false);
    // ImplementProvider
    m_ImplementProviderEClass->setName("ImplementProvider");
    m_ImplementProviderEClass->setAbstract(false);
    m_ImplementProviderEClass->setInterface(false);
    m_ImplementProvider__implement->setEType(
            dynamic_cast< ::nevonex::implement::ImplementPackage* >(::nevonex::implement::ImplementPackage::_instance().get())->getImplement());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_ImplementProvider__implement),
            "implement", false, false, false, "", false, true, true, true, 0,
            1, false, false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ImplementPackage::getImplement()
{
    return m_ImplementEClass;
}
::ecore::EClass_ptr ImplementPackage::getImplementProvider()
{
    return m_ImplementProviderEClass;
}

::ecore::EAttribute_ptr ImplementPackage::getImplement__lifetimeWorkingHours()
{
    return m_Implement__lifetimeWorkingHours;
}
::ecore::EReference_ptr ImplementPackage::getImplementProvider__implement()
{
    return m_ImplementProvider__implement;
}
