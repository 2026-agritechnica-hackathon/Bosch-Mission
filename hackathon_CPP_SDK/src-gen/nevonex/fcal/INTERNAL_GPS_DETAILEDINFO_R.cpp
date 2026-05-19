/*
 * nevonex/fcal/INTERNAL_GPS_DETAILEDINFO_R.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "INTERNAL_GPS_DETAILEDINFO_R.hpp"
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

/*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_R.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::fcal;
using namespace ::nevonex::log;

// Default constructor
INTERNAL_GPS_DETAILEDINFO_R::INTERNAL_GPS_DETAILEDINFO_R() : m_latitude(0.0), m_longitude(0.0), m_altitude(0.0), m_timeStamp(""), m_horizontalAccuracy(0.0f), m_verticalAccuracy(0.0f), m_horizontalDil(0.0f), m_positionDil(0.0f), m_verticalDil(0.0f), m_timeDil(0.0f), m_speed(0.0f), m_course(0.0f), m_numberOfSatellites(0)
{

    /*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_R__INTERNAL_GPS_DETAILEDINFO_R) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

INTERNAL_GPS_DETAILEDINFO_R::~INTERNAL_GPS_DETAILEDINFO_R()
{

    /*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_R__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

// Attributes

::ecore::EDouble INTERNAL_GPS_DETAILEDINFO_R::getLatitude() const
{
    return m_latitude;
}

void INTERNAL_GPS_DETAILEDINFO_R::setLatitude(::ecore::EDouble _latitude)
{

    ::ecore::EDouble _old_latitude = m_latitude;
    m_latitude = _latitude;

}

::ecore::EDouble INTERNAL_GPS_DETAILEDINFO_R::getLongitude() const
{
    return m_longitude;
}

void INTERNAL_GPS_DETAILEDINFO_R::setLongitude(::ecore::EDouble _longitude)
{

    ::ecore::EDouble _old_longitude = m_longitude;
    m_longitude = _longitude;

}

::ecore::EDouble INTERNAL_GPS_DETAILEDINFO_R::getAltitude() const
{
    return m_altitude;
}

void INTERNAL_GPS_DETAILEDINFO_R::setAltitude(::ecore::EDouble _altitude)
{

    ::ecore::EDouble _old_altitude = m_altitude;
    m_altitude = _altitude;

}

::ecore::EString INTERNAL_GPS_DETAILEDINFO_R::getTimeStamp() const
{
    return m_timeStamp;
}

void INTERNAL_GPS_DETAILEDINFO_R::setTimeStamp(::ecore::EString _timeStamp)
{

    ::ecore::EString _old_timeStamp = m_timeStamp;
    m_timeStamp = _timeStamp;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getHorizontalAccuracy() const
{
    return m_horizontalAccuracy;
}

void INTERNAL_GPS_DETAILEDINFO_R::setHorizontalAccuracy(::ecore::EFloat _horizontalAccuracy)
{

    ::ecore::EFloat _old_horizontalAccuracy = m_horizontalAccuracy;
    m_horizontalAccuracy = _horizontalAccuracy;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getVerticalAccuracy() const
{
    return m_verticalAccuracy;
}

void INTERNAL_GPS_DETAILEDINFO_R::setVerticalAccuracy(::ecore::EFloat _verticalAccuracy)
{

    ::ecore::EFloat _old_verticalAccuracy = m_verticalAccuracy;
    m_verticalAccuracy = _verticalAccuracy;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getHorizontalDil() const
{
    return m_horizontalDil;
}

void INTERNAL_GPS_DETAILEDINFO_R::setHorizontalDil(::ecore::EFloat _horizontalDil)
{

    ::ecore::EFloat _old_horizontalDil = m_horizontalDil;
    m_horizontalDil = _horizontalDil;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getPositionDil() const
{
    return m_positionDil;
}

void INTERNAL_GPS_DETAILEDINFO_R::setPositionDil(::ecore::EFloat _positionDil)
{

    ::ecore::EFloat _old_positionDil = m_positionDil;
    m_positionDil = _positionDil;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getVerticalDil() const
{
    return m_verticalDil;
}

void INTERNAL_GPS_DETAILEDINFO_R::setVerticalDil(::ecore::EFloat _verticalDil)
{

    ::ecore::EFloat _old_verticalDil = m_verticalDil;
    m_verticalDil = _verticalDil;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getTimeDil() const
{
    return m_timeDil;
}

void INTERNAL_GPS_DETAILEDINFO_R::setTimeDil(::ecore::EFloat _timeDil)
{

    ::ecore::EFloat _old_timeDil = m_timeDil;
    m_timeDil = _timeDil;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getSpeed() const
{
    return m_speed;
}

void INTERNAL_GPS_DETAILEDINFO_R::setSpeed(::ecore::EFloat _speed)
{

    ::ecore::EFloat _old_speed = m_speed;
    m_speed = _speed;

}

::ecore::EFloat INTERNAL_GPS_DETAILEDINFO_R::getCourse() const
{
    return m_course;
}

void INTERNAL_GPS_DETAILEDINFO_R::setCourse(::ecore::EFloat _course)
{

    ::ecore::EFloat _old_course = m_course;
    m_course = _course;

}

::ecore::EInt INTERNAL_GPS_DETAILEDINFO_R::getNumberOfSatellites() const
{
    return m_numberOfSatellites;
}

void INTERNAL_GPS_DETAILEDINFO_R::setNumberOfSatellites(::ecore::EInt _numberOfSatellites)
{

    ::ecore::EInt _old_numberOfSatellites = m_numberOfSatellites;
    m_numberOfSatellites = _numberOfSatellites;

}

// References

