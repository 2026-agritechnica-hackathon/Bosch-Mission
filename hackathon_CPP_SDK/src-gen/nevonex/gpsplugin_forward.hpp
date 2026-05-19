/*
 * nevonex/gpsplugin_forward.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_GPSPLUGIN_FORWARD_HPP
#define _NEVONEX_GPSPLUGIN_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(nevonex_gpsplugin_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace nevonex
{
    namespace gpsplugin
    {

// EDataType

// EClass

// GPSPlugin
        class GPSPlugin;
        using GPSPlugin_ptr = ::ecore::Ptr<GPSPlugin>;

// GPSPluginProvider
        class GPSPluginProvider;
        using GPSPluginProvider_ptr = ::ecore::Ptr<GPSPluginProvider>;

// EEnum

// Package & Factory
        class GpspluginFactory;
        using GpspluginFactory_ptr = ::ecore::Ptr<GpspluginFactory>;
        class GpspluginPackage;
        using GpspluginPackage_ptr = ::ecore::Ptr<GpspluginPackage>;

    } // gpsplugin
} // nevonex

#endif // _NEVONEX_GPSPLUGIN_FORWARD_HPP
