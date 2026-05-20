/*
 * nevonex/fcal/FcalFactoryImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/fcal/FcalFactory.hpp>
#include <nevonex/fcal/FcalPackage.hpp>
#include <nevonex/fcal/BulkProcessor.hpp>
#include <nevonex/fcal/GPS_INFO_R.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::nevonex::fcal;

FcalFactory::FcalFactory()
{
}

::ecore::EObject_ptr FcalFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case FcalPackage::BULKPROCESSOR:
        return createBulkProcessor();
    case FcalPackage::GPS_INFO_R:
        return createGPS_INFO_R();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject FcalFactory::createFromString(
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

::ecore::EString FcalFactory::convertToString(
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

BulkProcessor_ptr FcalFactory::createBulkProcessor()
{
    return ::ecore::Ptr < BulkProcessor > (new BulkProcessor);
}
GPS_INFO_R_ptr FcalFactory::createGPS_INFO_R()
{
    return ::ecore::Ptr < GPS_INFO_R > (new GPS_INFO_R);
}
