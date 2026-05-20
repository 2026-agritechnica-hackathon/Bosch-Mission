/*
 * nevonex_forward.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_FORWARD_HPP
#define _NEVONEX_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(nevonex_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage
#include <nevonex/common_forward.hpp>
#include <nevonex/exception_forward.hpp>
#include <nevonex/fcb_forward.hpp>
#include <nevonex/fcal_forward.hpp>
#include <nevonex/types_forward.hpp>
#include <nevonex/customui_forward.hpp>
#include <nevonex/cloud_forward.hpp>
#include <nevonex/device2device_forward.hpp>
#include <nevonex/gps_tc_forward.hpp>
#include <nevonex/implement_forward.hpp>
#include <nevonex/isopgn_forward.hpp>
#include <nevonex/platform_service_forward.hpp>
#include <nevonex/cloud_forward.hpp>
#include <nevonex/device2device_forward.hpp>

#include <ecore_forward.hpp> // for EDataTypes

namespace nevonex
{

// EDataType

// EClass

// EEnum

// Package & Factory
    class NevonexFactory;
    using NevonexFactory_ptr = ::ecore::Ptr<NevonexFactory>;
    class NevonexPackage;
    using NevonexPackage_ptr = ::ecore::Ptr<NevonexPackage>;

} // nevonex

#endif // _NEVONEX_FORWARD_HPP
