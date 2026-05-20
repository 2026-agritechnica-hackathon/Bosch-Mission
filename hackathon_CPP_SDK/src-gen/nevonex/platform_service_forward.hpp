/*
 * nevonex/platform_service_forward.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_PLATFORM_SERVICE_FORWARD_HPP
#define _NEVONEX_PLATFORM_SERVICE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(nevonex_platform_service_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace nevonex
{
    namespace platform_service
    {

// EDataType

// EClass

// Platform_Service
        class Platform_Service;
        using Platform_Service_ptr = ::ecore::Ptr<Platform_Service>;

// Platform_ServiceProvider
        class Platform_ServiceProvider;
        using Platform_ServiceProvider_ptr = ::ecore::Ptr<Platform_ServiceProvider>;

// EEnum

// Package & Factory
        class Platform_serviceFactory;
        using Platform_serviceFactory_ptr = ::ecore::Ptr<Platform_serviceFactory>;
        class Platform_servicePackage;
        using Platform_servicePackage_ptr = ::ecore::Ptr<Platform_servicePackage>;

    } // platform_service
} // nevonex

#endif // _NEVONEX_PLATFORM_SERVICE_FORWARD_HPP
