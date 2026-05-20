/*
 * nevonex/gps_tc/GPS_TC.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPS_TC.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/gps_tc/Gps_tcPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPS_TC.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gps_tc;
using namespace ::nevonex::log;

// Default constructor
GPS_TC::GPS_TC() : m_active_TC_GPS_source(0), m_positionofGpsSensor(0), m_tcGpsInfo(0)
{
    // Machine does NOT call _initialize() — Provider manages initialization
    m_interfaceDetailMap = {
    };

    /*PROTECTED REGION ID(GPS_TC__GPS_TC) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

GPS_TC::~GPS_TC()
{
    /*PROTECTED REGION ID(GPS_TC__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// References
::ecore::EString GPS_TC::getActive_TC_GPS_source() const
{
    return m_active_TC_GPS_source;
}

void GPS_TC::setActive_TC_GPS_source(::ecore::EString _active_TC_GPS_source)
{
    ::ecore::EString _old_active_TC_GPS_source = m_active_TC_GPS_source;
    m_active_TC_GPS_source = _active_TC_GPS_source;
    SDK_FCAL_LOG(SeverityLevel::debug) << "GPS_TC property \"active_TC_GPS_source\" has changed.";
    notifyPropertyChange("active_TC_GPS_source", _old_active_TC_GPS_source, m_active_TC_GPS_source);
}

::ecore::EString GPS_TC::getPositionofGpsSensor() const
{
    return m_positionofGpsSensor;
}

void GPS_TC::setPositionofGpsSensor(::ecore::EString _positionofGpsSensor)
{
    ::ecore::EString _old_positionofGpsSensor = m_positionofGpsSensor;
    m_positionofGpsSensor = _positionofGpsSensor;
    SDK_FCAL_LOG(SeverityLevel::debug) << "GPS_TC property \"positionofGpsSensor\" has changed.";
    notifyPropertyChange("positionofGpsSensor", _old_positionofGpsSensor, m_positionofGpsSensor);
}

::nevonex::fcal::GPS_INFO_R_ptr GPS_TC::getTcGpsInfo() const
{
    return m_tcGpsInfo;
}

void GPS_TC::setTcGpsInfo(::nevonex::fcal::GPS_INFO_R_ptr _tcGpsInfo)
{
    ::nevonex::fcal::GPS_INFO_R_ptr _old_tcGpsInfo = m_tcGpsInfo;
    m_tcGpsInfo = _tcGpsInfo;
    SDK_FCAL_LOG(SeverityLevel::debug) << "GPS_TC property \"tcGpsInfo\" has changed.";
    notifyPropertyChange("tcGpsInfo", _old_tcGpsInfo, m_tcGpsInfo);
}

// FCAL timestamp/valid
::ecore::ELong GPS_TC::getActive_TC_GPS_source_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean GPS_TC::isActive_TC_GPS_source_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong GPS_TC::getPositionofGpsSensor_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean GPS_TC::isPositionofGpsSensor_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong GPS_TC::getTcGpsInfo_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean GPS_TC::isTcGpsInfo_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void GPS_TC::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void GPS_TC::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void GPS_TC::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
