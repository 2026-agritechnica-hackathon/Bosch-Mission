/*
 * nevonex/gps_tc/Gps_tcFactoryImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gps_tc/Gps_tcFactory.hpp>
#include <nevonex/gps_tc/Gps_tcPackage.hpp>
#include <nevonex/gps_tc/GPS_TC.hpp>
#include <nevonex/gps_tc/GPS_TCProvider.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::nevonex::gps_tc;

Gps_tcFactory::Gps_tcFactory()
{
}

::ecore::EObject_ptr Gps_tcFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case Gps_tcPackage::GPS_TC:
        return createGPS_TC();
    case Gps_tcPackage::GPS_TCPROVIDER:
        return createGPS_TCProvider();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject Gps_tcFactory::createFromString(
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

::ecore::EString Gps_tcFactory::convertToString(
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

GPS_TC_ptr Gps_tcFactory::createGPS_TC()
{
    return ::ecore::Ptr < GPS_TC > (new GPS_TC);
}
GPS_TCProvider_ptr Gps_tcFactory::createGPS_TCProvider()
{
    return ::ecore::Ptr < GPS_TCProvider > (new GPS_TCProvider);
}
