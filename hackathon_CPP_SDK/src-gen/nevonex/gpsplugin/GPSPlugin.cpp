/*
 * nevonex/gpsplugin/GPSPlugin.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPSPlugin.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/gpsplugin/GpspluginPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPSPlugin.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gpsplugin;
using namespace ::nevonex::log;

// Default constructor
GPSPlugin::GPSPlugin() : m_gPSSensorPosition(0), m_internalGpsDetailedInfo(0)
{
    // Machine does NOT call _initialize() — Provider manages initialization
    m_interfaceDetailMap = {
    };

    /*PROTECTED REGION ID(GPSPlugin__GPSPlugin) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

GPSPlugin::~GPSPlugin()
{
    /*PROTECTED REGION ID(GPSPlugin__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// References
::ecore::EString GPSPlugin::getGPSSensorPosition() const
{
    return m_gPSSensorPosition;
}

void GPSPlugin::setGPSSensorPosition(::ecore::EString _gPSSensorPosition)
{
    ::ecore::EString _old_gPSSensorPosition = m_gPSSensorPosition;
    m_gPSSensorPosition = _gPSSensorPosition;
    SDK_FCAL_LOG(SeverityLevel::debug) << "GPSPlugin property \"gPSSensorPosition\" has changed.";
    notifyPropertyChange("gPSSensorPosition", _old_gPSSensorPosition, m_gPSSensorPosition);
}

::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R_ptr GPSPlugin::getInternalGpsDetailedInfo() const
{
    return m_internalGpsDetailedInfo;
}

void GPSPlugin::setInternalGpsDetailedInfo(::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R_ptr _internalGpsDetailedInfo)
{
    ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R_ptr _old_internalGpsDetailedInfo = m_internalGpsDetailedInfo;
    m_internalGpsDetailedInfo = _internalGpsDetailedInfo;
    SDK_FCAL_LOG(SeverityLevel::debug) << "GPSPlugin property \"internalGpsDetailedInfo\" has changed.";
    notifyPropertyChange("internalGpsDetailedInfo", _old_internalGpsDetailedInfo, m_internalGpsDetailedInfo);
}

// FCAL timestamp/valid
::ecore::ELong GPSPlugin::getGPSSensorPosition_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean GPSPlugin::isGPSSensorPosition_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong GPSPlugin::getInternalGpsDetailedInfo_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean GPSPlugin::isInternalGpsDetailedInfo_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void GPSPlugin::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void GPSPlugin::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void GPSPlugin::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
