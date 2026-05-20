/*
 * nevonex/platform_service/Platform_servicePackageImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/platform_service/Platform_servicePackage.hpp>
#include <nevonex/platform_service/Platform_serviceFactory.hpp>
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

using namespace ::nevonex::platform_service;

Platform_servicePackage::Platform_servicePackage()
{

    // Feature definitions of Platform_Service
    m_Platform_Service__download = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Platform_Service__uploadData = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Platform_Service__uploadFile = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Platform_Service__receive = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Platform_Service__sendCommand = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Platform_Service__sendFile = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Platform_ServiceProvider
    m_Platform_ServiceProvider__platform_Service = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void Platform_servicePackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = Platform_serviceFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // Platform_Service
    {
        m_Platform_ServiceEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_Platform_ServiceEClass->setClassifierID(PLATFORM_SERVICE);
        m_Platform_ServiceEClass->setEPackage(_this());
        getEClassifiers().push_back(m_Platform_ServiceEClass);
    }
    // m_Platform_Service__download has already been allocated above
    m_Platform_Service__download->setFeatureID(
            ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__DOWNLOAD);
    m_Platform_ServiceEClass->getEStructuralFeatures().push_back(
            m_Platform_Service__download);
    // m_Platform_Service__uploadData has already been allocated above
    m_Platform_Service__uploadData->setFeatureID(
            ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADDATA);
    m_Platform_ServiceEClass->getEStructuralFeatures().push_back(
            m_Platform_Service__uploadData);
    // m_Platform_Service__uploadFile has already been allocated above
    m_Platform_Service__uploadFile->setFeatureID(
            ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__UPLOADFILE);
    m_Platform_ServiceEClass->getEStructuralFeatures().push_back(
            m_Platform_Service__uploadFile);
    // m_Platform_Service__receive has already been allocated above
    m_Platform_Service__receive->setFeatureID(
            ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__RECEIVE);
    m_Platform_ServiceEClass->getEStructuralFeatures().push_back(
            m_Platform_Service__receive);
    // m_Platform_Service__sendCommand has already been allocated above
    m_Platform_Service__sendCommand->setFeatureID(
            ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDCOMMAND);
    m_Platform_ServiceEClass->getEStructuralFeatures().push_back(
            m_Platform_Service__sendCommand);
    // m_Platform_Service__sendFile has already been allocated above
    m_Platform_Service__sendFile->setFeatureID(
            ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICE__SENDFILE);
    m_Platform_ServiceEClass->getEStructuralFeatures().push_back(
            m_Platform_Service__sendFile);

    // Platform_ServiceProvider
    {
        m_Platform_ServiceProviderEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_Platform_ServiceProviderEClass->setClassifierID(PLATFORM_SERVICEPROVIDER);
        m_Platform_ServiceProviderEClass->setEPackage(_this());
        getEClassifiers().push_back(m_Platform_ServiceProviderEClass);
    }
    // m_Platform_ServiceProvider__platform_Service has already been allocated above
    m_Platform_ServiceProvider__platform_Service->setFeatureID(
            ::nevonex::platform_service::Platform_servicePackage::PLATFORM_SERVICEPROVIDER__PLATFORM_SERVICE);
    m_Platform_ServiceProviderEClass->getEStructuralFeatures().push_back(
            m_Platform_ServiceProvider__platform_Service);

    // Create enums

    // Create data types

    // Initialize package
    setName("platform_service");
    setNsPrefix("platform_service");
    setNsURI("com.bosch.nevonex.platform_service");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_Platform_ServiceEClass->getESuperTypes().push_back(
            dynamic_cast< ::nevonex::common::CommonPackage* >(::nevonex::common::CommonPackage::_instance().get())->getTopicObject());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Platform_Service
    m_Platform_ServiceEClass->setName("Platform_Service");
    m_Platform_ServiceEClass->setAbstract(false);
    m_Platform_ServiceEClass->setInterface(false);
    m_Platform_Service__download->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_Platform_Service__download),
            "download", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_Platform_Service__download->setID(false);
    m_Platform_Service__uploadData->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_Platform_Service__uploadData),
            "uploadData", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_Platform_Service__uploadData->setID(false);
    m_Platform_Service__uploadFile->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_Platform_Service__uploadFile),
            "uploadFile", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_Platform_Service__uploadFile->setID(false);
    m_Platform_Service__receive->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_Platform_Service__receive),
            "receive", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_Platform_Service__receive->setID(false);
    m_Platform_Service__sendCommand->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_Platform_Service__sendCommand),
            "sendCommand", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_Platform_Service__sendCommand->setID(false);
    m_Platform_Service__sendFile->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_Platform_Service__sendFile),
            "sendFile", true, false, false, """", false, false, true, true, 0,
            1, false, false);
    m_Platform_Service__sendFile->setID(false);
    // Platform_ServiceProvider
    m_Platform_ServiceProviderEClass->setName("Platform_ServiceProvider");
    m_Platform_ServiceProviderEClass->setAbstract(false);
    m_Platform_ServiceProviderEClass->setInterface(false);
    m_Platform_ServiceProvider__platform_Service->setEType(
            dynamic_cast< ::nevonex::platform_service::Platform_servicePackage* >(::nevonex::platform_service::Platform_servicePackage::_instance().get())->getPlatform_Service());
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_Platform_ServiceProvider__platform_Service),
            "platform_Service", false, false, false, "", false, true, true, true, 0,
            1, false, false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr Platform_servicePackage::getPlatform_Service()
{
    return m_Platform_ServiceEClass;
}
::ecore::EClass_ptr Platform_servicePackage::getPlatform_ServiceProvider()
{
    return m_Platform_ServiceProviderEClass;
}

::ecore::EAttribute_ptr Platform_servicePackage::getPlatform_Service__download()
{
    return m_Platform_Service__download;
}
::ecore::EAttribute_ptr Platform_servicePackage::getPlatform_Service__uploadData()
{
    return m_Platform_Service__uploadData;
}
::ecore::EAttribute_ptr Platform_servicePackage::getPlatform_Service__uploadFile()
{
    return m_Platform_Service__uploadFile;
}
::ecore::EAttribute_ptr Platform_servicePackage::getPlatform_Service__receive()
{
    return m_Platform_Service__receive;
}
::ecore::EAttribute_ptr Platform_servicePackage::getPlatform_Service__sendCommand()
{
    return m_Platform_Service__sendCommand;
}
::ecore::EAttribute_ptr Platform_servicePackage::getPlatform_Service__sendFile()
{
    return m_Platform_Service__sendFile;
}
::ecore::EReference_ptr Platform_servicePackage::getPlatform_ServiceProvider__platform_Service()
{
    return m_Platform_ServiceProvider__platform_Service;
}
