/*
 * nevonex/fcal/INTERNAL_GPS_DETAILEDINFO_RImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "INTERNAL_GPS_DETAILEDINFO_R.hpp"
#include <stdexcept>

#include <nevonex/fcal/FcalPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_RImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::fcal;
using namespace ::nevonex::log;

void INTERNAL_GPS_DETAILEDINFO_R::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_RImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject INTERNAL_GPS_DETAILEDINFO_R::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_latitude);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_longitude);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_altitude);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMESTAMP:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_timeStamp);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALACCURACY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_horizontalAccuracy);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALACCURACY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_verticalAccuracy);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALDIL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_horizontalDil);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__POSITIONDIL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_positionDil);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALDIL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_verticalDil);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMEDIL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_timeDil);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__SPEED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_speed);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__COURSE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_course);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__NUMBEROFSATELLITES:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_numberOfSatellites);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void INTERNAL_GPS_DETAILEDINFO_R::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setLatitude(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setLongitude(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setAltitude(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMESTAMP:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setTimeStamp(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALACCURACY:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setHorizontalAccuracy(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALACCURACY:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setVerticalAccuracy(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALDIL:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setHorizontalDil(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__POSITIONDIL:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setPositionDil(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALDIL:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setVerticalDil(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMEDIL:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setTimeDil(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__SPEED:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setSpeed(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__COURSE:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setCourse(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__NUMBEROFSATELLITES:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R::setNumberOfSatellites(_t0);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean INTERNAL_GPS_DETAILEDINFO_R::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
    {
        return m_latitude != 0.0;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
    {
        return m_longitude != 0.0;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
    {
        return m_altitude != 0.0;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMESTAMP:
    {
        return m_timeStamp != "";
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALACCURACY:
    {
        return m_horizontalAccuracy != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALACCURACY:
    {
        return m_verticalAccuracy != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALDIL:
    {
        return m_horizontalDil != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__POSITIONDIL:
    {
        return m_positionDil != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALDIL:
    {
        return m_verticalDil != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMEDIL:
    {
        return m_timeDil != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__SPEED:
    {
        return m_speed != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__COURSE:
    {
        return m_course != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__NUMBEROFSATELLITES:
    {
        return m_numberOfSatellites != 0;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void INTERNAL_GPS_DETAILEDINFO_R::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LATITUDE:
    {
        // 0.0
        setLatitude(0.0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__LONGITUDE:
    {
        // 0.0
        setLongitude(0.0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__ALTITUDE:
    {
        // 0.0
        setAltitude(0.0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMESTAMP:
    {
        // ""
        setTimeStamp("");
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALACCURACY:
    {
        // 0.0f
        setHorizontalAccuracy(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALACCURACY:
    {
        // 0.0f
        setVerticalAccuracy(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__HORIZONTALDIL:
    {
        // 0.0f
        setHorizontalDil(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__POSITIONDIL:
    {
        // 0.0f
        setPositionDil(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__VERTICALDIL:
    {
        // 0.0f
        setVerticalDil(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__TIMEDIL:
    {
        // 0.0f
        setTimeDil(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__SPEED:
    {
        // 0.0f
        setSpeed(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__COURSE:
    {
        // 0.0f
        setCourse(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::INTERNAL_GPS_DETAILEDINFO_R__NUMBEROFSATELLITES:
    {
        // 0
        setNumberOfSatellites(0);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr INTERNAL_GPS_DETAILEDINFO_R::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::fcal::FcalPackage* >(::nevonex::fcal::FcalPackage::_instance().get())->getINTERNAL_GPS_DETAILEDINFO_R();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void INTERNAL_GPS_DETAILEDINFO_R::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void INTERNAL_GPS_DETAILEDINFO_R::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
