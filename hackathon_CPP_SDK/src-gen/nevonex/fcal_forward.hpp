/*
 * nevonex/fcal_forward.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_FCAL_FORWARD_HPP
#define _NEVONEX_FCAL_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(nevonex_fcal_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace nevonex
{
    namespace fcal
    {

// EDataType

// EClass

// BulkProcessor
        class BulkProcessor;
        using BulkProcessor_ptr = ::ecore::Ptr<BulkProcessor>;

// GPS_INFO_R
        class GPS_INFO_R;
        using GPS_INFO_R_ptr = ::ecore::Ptr<GPS_INFO_R>;

// EEnum

// Package & Factory
        class FcalFactory;
        using FcalFactory_ptr = ::ecore::Ptr<FcalFactory>;
        class FcalPackage;
        using FcalPackage_ptr = ::ecore::Ptr<FcalPackage>;

    } // fcal
} // nevonex

#endif // _NEVONEX_FCAL_FORWARD_HPP
