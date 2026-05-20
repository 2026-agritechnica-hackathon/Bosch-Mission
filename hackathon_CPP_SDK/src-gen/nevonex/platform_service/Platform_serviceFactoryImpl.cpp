/*
 * nevonex/platform_service/Platform_serviceFactoryImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/platform_service/Platform_serviceFactory.hpp>
#include <nevonex/platform_service/Platform_servicePackage.hpp>
#include <nevonex/platform_service/Platform_Service.hpp>
#include <nevonex/platform_service/Platform_ServiceProvider.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::nevonex::platform_service;

Platform_serviceFactory::Platform_serviceFactory()
{
}

::ecore::EObject_ptr Platform_serviceFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case Platform_servicePackage::PLATFORM_SERVICE:
        return createPlatform_Service();
    case Platform_servicePackage::PLATFORM_SERVICEPROVIDER:
        return createPlatform_ServiceProvider();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject Platform_serviceFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    (void)_literalValue;
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString Platform_serviceFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    (void)_instanceValue;
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Platform_Service_ptr Platform_serviceFactory::createPlatform_Service()
{
    return ::ecore::Ptr < Platform_Service > (new Platform_Service);
}
Platform_ServiceProvider_ptr Platform_serviceFactory::createPlatform_ServiceProvider()
{
    return ::ecore::Ptr < Platform_ServiceProvider > (new Platform_ServiceProvider);
}
