/*
 * nevonex/isopgn/ISOPGN.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "ISOPGN.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/isopgn/IsopgnPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(ISOPGN.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::isopgn;
using namespace ::nevonex::log;

// Default constructor
ISOPGN::ISOPGN() : m_accpedPos1(0), m_ambAirt(0), m_brkPedPos(0), m_engFuRatePerTime(0), m_engSpd(0), m_engTotOperHrs(0), m_fuLvlPer(0), m_fuLvlPer2(0), m_gndBasdMacSpd(0), m_tachoVehSpd(0), m_totalVehDist(0), m_totVehHrs(0), m_whlBasdMacSpd(0)
{
    // Machine does NOT call _initialize() — Provider manages initialization
    m_interfaceDetailMap = {
    };

    /*PROTECTED REGION ID(ISOPGN__ISOPGN) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ISOPGN::~ISOPGN()
{
    /*PROTECTED REGION ID(ISOPGN__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// References
::ecore::EFloat ISOPGN::getAccpedPos1() const
{
    return m_accpedPos1;
}

void ISOPGN::setAccpedPos1(::ecore::EFloat _accpedPos1)
{
    ::ecore::EFloat _old_accpedPos1 = m_accpedPos1;
    m_accpedPos1 = _accpedPos1;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"accpedPos1\" has changed.";
    notifyPropertyChange("accpedPos1", _old_accpedPos1, m_accpedPos1);
}

::ecore::EFloat ISOPGN::getAmbAirt() const
{
    return m_ambAirt;
}

void ISOPGN::setAmbAirt(::ecore::EFloat _ambAirt)
{
    ::ecore::EFloat _old_ambAirt = m_ambAirt;
    m_ambAirt = _ambAirt;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"ambAirt\" has changed.";
    notifyPropertyChange("ambAirt", _old_ambAirt, m_ambAirt);
}

::ecore::EFloat ISOPGN::getBrkPedPos() const
{
    return m_brkPedPos;
}

void ISOPGN::setBrkPedPos(::ecore::EFloat _brkPedPos)
{
    ::ecore::EFloat _old_brkPedPos = m_brkPedPos;
    m_brkPedPos = _brkPedPos;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"brkPedPos\" has changed.";
    notifyPropertyChange("brkPedPos", _old_brkPedPos, m_brkPedPos);
}

::ecore::EFloat ISOPGN::getEngFuRatePerTime() const
{
    return m_engFuRatePerTime;
}

void ISOPGN::setEngFuRatePerTime(::ecore::EFloat _engFuRatePerTime)
{
    ::ecore::EFloat _old_engFuRatePerTime = m_engFuRatePerTime;
    m_engFuRatePerTime = _engFuRatePerTime;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"engFuRatePerTime\" has changed.";
    notifyPropertyChange("engFuRatePerTime", _old_engFuRatePerTime, m_engFuRatePerTime);
}

::ecore::EFloat ISOPGN::getEngSpd() const
{
    return m_engSpd;
}

void ISOPGN::setEngSpd(::ecore::EFloat _engSpd)
{
    ::ecore::EFloat _old_engSpd = m_engSpd;
    m_engSpd = _engSpd;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"engSpd\" has changed.";
    notifyPropertyChange("engSpd", _old_engSpd, m_engSpd);
}

::ecore::EFloat ISOPGN::getEngTotOperHrs() const
{
    return m_engTotOperHrs;
}

void ISOPGN::setEngTotOperHrs(::ecore::EFloat _engTotOperHrs)
{
    ::ecore::EFloat _old_engTotOperHrs = m_engTotOperHrs;
    m_engTotOperHrs = _engTotOperHrs;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"engTotOperHrs\" has changed.";
    notifyPropertyChange("engTotOperHrs", _old_engTotOperHrs, m_engTotOperHrs);
}

::ecore::EFloat ISOPGN::getFuLvlPer() const
{
    return m_fuLvlPer;
}

void ISOPGN::setFuLvlPer(::ecore::EFloat _fuLvlPer)
{
    ::ecore::EFloat _old_fuLvlPer = m_fuLvlPer;
    m_fuLvlPer = _fuLvlPer;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"fuLvlPer\" has changed.";
    notifyPropertyChange("fuLvlPer", _old_fuLvlPer, m_fuLvlPer);
}

::ecore::EFloat ISOPGN::getFuLvlPer2() const
{
    return m_fuLvlPer2;
}

void ISOPGN::setFuLvlPer2(::ecore::EFloat _fuLvlPer2)
{
    ::ecore::EFloat _old_fuLvlPer2 = m_fuLvlPer2;
    m_fuLvlPer2 = _fuLvlPer2;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"fuLvlPer2\" has changed.";
    notifyPropertyChange("fuLvlPer2", _old_fuLvlPer2, m_fuLvlPer2);
}

::ecore::EFloat ISOPGN::getGndBasdMacSpd() const
{
    return m_gndBasdMacSpd;
}

void ISOPGN::setGndBasdMacSpd(::ecore::EFloat _gndBasdMacSpd)
{
    ::ecore::EFloat _old_gndBasdMacSpd = m_gndBasdMacSpd;
    m_gndBasdMacSpd = _gndBasdMacSpd;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"gndBasdMacSpd\" has changed.";
    notifyPropertyChange("gndBasdMacSpd", _old_gndBasdMacSpd, m_gndBasdMacSpd);
}

::ecore::EFloat ISOPGN::getTachoVehSpd() const
{
    return m_tachoVehSpd;
}

void ISOPGN::setTachoVehSpd(::ecore::EFloat _tachoVehSpd)
{
    ::ecore::EFloat _old_tachoVehSpd = m_tachoVehSpd;
    m_tachoVehSpd = _tachoVehSpd;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"tachoVehSpd\" has changed.";
    notifyPropertyChange("tachoVehSpd", _old_tachoVehSpd, m_tachoVehSpd);
}

::ecore::EString ISOPGN::getTotalVehDist() const
{
    return m_totalVehDist;
}

void ISOPGN::setTotalVehDist(::ecore::EString _totalVehDist)
{
    ::ecore::EString _old_totalVehDist = m_totalVehDist;
    m_totalVehDist = _totalVehDist;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"totalVehDist\" has changed.";
    notifyPropertyChange("totalVehDist", _old_totalVehDist, m_totalVehDist);
}

::ecore::EFloat ISOPGN::getTotVehHrs() const
{
    return m_totVehHrs;
}

void ISOPGN::setTotVehHrs(::ecore::EFloat _totVehHrs)
{
    ::ecore::EFloat _old_totVehHrs = m_totVehHrs;
    m_totVehHrs = _totVehHrs;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"totVehHrs\" has changed.";
    notifyPropertyChange("totVehHrs", _old_totVehHrs, m_totVehHrs);
}

::ecore::EFloat ISOPGN::getWhlBasdMacSpd() const
{
    return m_whlBasdMacSpd;
}

void ISOPGN::setWhlBasdMacSpd(::ecore::EFloat _whlBasdMacSpd)
{
    ::ecore::EFloat _old_whlBasdMacSpd = m_whlBasdMacSpd;
    m_whlBasdMacSpd = _whlBasdMacSpd;
    SDK_FCAL_LOG(SeverityLevel::debug) << "ISOPGN property \"whlBasdMacSpd\" has changed.";
    notifyPropertyChange("whlBasdMacSpd", _old_whlBasdMacSpd, m_whlBasdMacSpd);
}

// FCAL timestamp/valid
::ecore::ELong ISOPGN::getAccpedPos1_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isAccpedPos1_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getAmbAirt_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isAmbAirt_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getBrkPedPos_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isBrkPedPos_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getEngFuRatePerTime_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isEngFuRatePerTime_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getEngSpd_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isEngSpd_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getEngTotOperHrs_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isEngTotOperHrs_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getFuLvlPer_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isFuLvlPer_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getFuLvlPer2_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isFuLvlPer2_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getGndBasdMacSpd_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isGndBasdMacSpd_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getTachoVehSpd_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isTachoVehSpd_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getTotalVehDist_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isTotalVehDist_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getTotVehHrs_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isTotVehHrs_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong ISOPGN::getWhlBasdMacSpd_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean ISOPGN::isWhlBasdMacSpd_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void ISOPGN::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void ISOPGN::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void ISOPGN::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
