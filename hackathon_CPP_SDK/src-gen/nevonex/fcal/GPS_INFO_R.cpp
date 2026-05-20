/*
 * nevonex/fcal/GPS_INFO_R.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPS_INFO_R.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/fcal/FcalPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <algorithm>
#include <nevonex/fcb/SubscriberEnum.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

#if BOOST_VERSION >= 106501
#define BOOST_STACKTRACE_HEADERS_FOUND
#include <boost/stacktrace.hpp>
#endif

/*PROTECTED REGION ID(GPS_INFO_R.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::fcal;
using namespace ::nevonex::log;

// Default constructor
GPS_INFO_R::GPS_INFO_R() : m_latitude(0.0), m_longitude(0.0), m_altitude(0.0), m_positionTime(0.0), m_hDOP(0.0f), m_pDOP(0.0f), m_numberOfSattelites(0)
{

    /*PROTECTED REGION ID(GPS_INFO_R__GPS_INFO_R) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

GPS_INFO_R::~GPS_INFO_R()
{

    /*PROTECTED REGION ID(GPS_INFO_R__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

// Attributes

::ecore::EDouble GPS_INFO_R::getLatitude() const
{
    return m_latitude;
}

void GPS_INFO_R::setLatitude(::ecore::EDouble _latitude)
{

    ::ecore::EDouble _old_latitude = m_latitude;
    m_latitude = _latitude;

}

::ecore::EDouble GPS_INFO_R::getLongitude() const
{
    return m_longitude;
}

void GPS_INFO_R::setLongitude(::ecore::EDouble _longitude)
{

    ::ecore::EDouble _old_longitude = m_longitude;
    m_longitude = _longitude;

}

::ecore::EDouble GPS_INFO_R::getAltitude() const
{
    return m_altitude;
}

void GPS_INFO_R::setAltitude(::ecore::EDouble _altitude)
{

    ::ecore::EDouble _old_altitude = m_altitude;
    m_altitude = _altitude;

}

::ecore::EDouble GPS_INFO_R::getPositionTime() const
{
    return m_positionTime;
}

void GPS_INFO_R::setPositionTime(::ecore::EDouble _positionTime)
{

    ::ecore::EDouble _old_positionTime = m_positionTime;
    m_positionTime = _positionTime;

}

::ecore::EFloat GPS_INFO_R::getHDOP() const
{
    return m_hDOP;
}

void GPS_INFO_R::setHDOP(::ecore::EFloat _hDOP)
{

    ::ecore::EFloat _old_hDOP = m_hDOP;
    m_hDOP = _hDOP;

}

::ecore::EFloat GPS_INFO_R::getPDOP() const
{
    return m_pDOP;
}

void GPS_INFO_R::setPDOP(::ecore::EFloat _pDOP)
{

    ::ecore::EFloat _old_pDOP = m_pDOP;
    m_pDOP = _pDOP;

}

::ecore::EInt GPS_INFO_R::getNumberOfSattelites() const
{
    return m_numberOfSattelites;
}

void GPS_INFO_R::setNumberOfSattelites(::ecore::EInt _numberOfSattelites)
{

    ::ecore::EInt _old_numberOfSattelites = m_numberOfSattelites;
    m_numberOfSattelites = _numberOfSattelites;

}

// References

