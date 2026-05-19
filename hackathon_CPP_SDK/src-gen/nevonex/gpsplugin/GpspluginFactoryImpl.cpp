/*
 * nevonex/gpsplugin/GpspluginFactoryImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gpsplugin/GpspluginFactory.hpp>
#include <nevonex/gpsplugin/GpspluginPackage.hpp>
#include <nevonex/gpsplugin/GPSPlugin.hpp>
#include <nevonex/gpsplugin/GPSPluginProvider.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::nevonex::gpsplugin;

GpspluginFactory::GpspluginFactory()
{
}

::ecore::EObject_ptr GpspluginFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case GpspluginPackage::GPSPLUGIN:
        return createGPSPlugin();
    case GpspluginPackage::GPSPLUGINPROVIDER:
        return createGPSPluginProvider();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject GpspluginFactory::createFromString(
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

::ecore::EString GpspluginFactory::convertToString(
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

GPSPlugin_ptr GpspluginFactory::createGPSPlugin()
{
    return ::ecore::Ptr < GPSPlugin > (new GPSPlugin);
}
GPSPluginProvider_ptr GpspluginFactory::createGPSPluginProvider()
{
    return ::ecore::Ptr < GPSPluginProvider > (new GPSPluginProvider);
}
