/*
 * nevonex/implement/ImplementFactoryImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/implement/ImplementFactory.hpp>
#include <nevonex/implement/ImplementPackage.hpp>
#include <nevonex/implement/Implement.hpp>
#include <nevonex/implement/ImplementProvider.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::nevonex::implement;

ImplementFactory::ImplementFactory()
{
}

::ecore::EObject_ptr ImplementFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ImplementPackage::IMPLEMENT:
        return createImplement();
    case ImplementPackage::IMPLEMENTPROVIDER:
        return createImplementProvider();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ImplementFactory::createFromString(
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

::ecore::EString ImplementFactory::convertToString(
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

Implement_ptr ImplementFactory::createImplement()
{
    return ::ecore::Ptr < Implement > (new Implement);
}
ImplementProvider_ptr ImplementFactory::createImplementProvider()
{
    return ::ecore::Ptr < ImplementProvider > (new ImplementProvider);
}
