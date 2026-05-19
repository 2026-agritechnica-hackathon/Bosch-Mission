/*
 * nevonex/fcal/FcalFactoryImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/fcal/FcalFactory.hpp>
#include <nevonex/fcal/FcalPackage.hpp>
#include <nevonex/fcal/BulkProcessor.hpp>
#include <nevonex/fcal/INTERNAL_GPS_DETAILEDINFO_R.hpp>

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
    case FcalPackage::INTERNAL_GPS_DETAILEDINFO_R:
        return createINTERNAL_GPS_DETAILEDINFO_R();
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
INTERNAL_GPS_DETAILEDINFO_R_ptr FcalFactory::createINTERNAL_GPS_DETAILEDINFO_R()
{
    return ::ecore::Ptr < INTERNAL_GPS_DETAILEDINFO_R > (new INTERNAL_GPS_DETAILEDINFO_R);
}
