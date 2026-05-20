/*
 * nevonex/gps_tc_forward.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_GPS_TC_FORWARD_HPP
#define _NEVONEX_GPS_TC_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(nevonex_gps_tc_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace nevonex
{
    namespace gps_tc
    {

// EDataType

// EClass

// GPS_TC
        class GPS_TC;
        using GPS_TC_ptr = ::ecore::Ptr<GPS_TC>;

// GPS_TCProvider
        class GPS_TCProvider;
        using GPS_TCProvider_ptr = ::ecore::Ptr<GPS_TCProvider>;

// EEnum

// Package & Factory
        class Gps_tcFactory;
        using Gps_tcFactory_ptr = ::ecore::Ptr<Gps_tcFactory>;
        class Gps_tcPackage;
        using Gps_tcPackage_ptr = ::ecore::Ptr<Gps_tcPackage>;

    } // gps_tc
} // nevonex

#endif // _NEVONEX_GPS_TC_FORWARD_HPP
