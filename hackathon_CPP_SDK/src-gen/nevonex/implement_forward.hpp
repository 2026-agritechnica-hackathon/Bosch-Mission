/*
 * nevonex/implement_forward.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_IMPLEMENT_FORWARD_HPP
#define _NEVONEX_IMPLEMENT_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(nevonex_implement_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace nevonex
{
    namespace implement
    {

// EDataType

// EClass

// Implement
        class Implement;
        using Implement_ptr = ::ecore::Ptr<Implement>;

// ImplementProvider
        class ImplementProvider;
        using ImplementProvider_ptr = ::ecore::Ptr<ImplementProvider>;

// EEnum

// Package & Factory
        class ImplementFactory;
        using ImplementFactory_ptr = ::ecore::Ptr<ImplementFactory>;
        class ImplementPackage;
        using ImplementPackage_ptr = ::ecore::Ptr<ImplementPackage>;

    } // implement
} // nevonex

#endif // _NEVONEX_IMPLEMENT_FORWARD_HPP
