/*
 * nevonex/fcal/GPS_INFO_RImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPS_INFO_R.hpp"
#include <stdexcept>

#include <nevonex/fcal/FcalPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPS_INFO_RImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::fcal;
using namespace ::nevonex::log;

void GPS_INFO_R::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(GPS_INFO_RImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject GPS_INFO_R::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LATITUDE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_latitude);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LONGITUDE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_longitude);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__ALTITUDE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_altitude);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__POSITIONTIME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_positionTime);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__HDOP:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_hDOP);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__PDOP:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_pDOP);
        return _any;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__NUMBEROFSATTELITES:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_numberOfSattelites);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void GPS_INFO_R::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LATITUDE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::GPS_INFO_R::setLatitude(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LONGITUDE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::GPS_INFO_R::setLongitude(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__ALTITUDE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::GPS_INFO_R::setAltitude(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__POSITIONTIME:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::GPS_INFO_R::setPositionTime(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__HDOP:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::GPS_INFO_R::setHDOP(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__PDOP:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::GPS_INFO_R::setPDOP(_t0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__NUMBEROFSATTELITES:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::nevonex::fcal::GPS_INFO_R::setNumberOfSattelites(_t0);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean GPS_INFO_R::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LATITUDE:
    {
        return m_latitude != 0.0;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LONGITUDE:
    {
        return m_longitude != 0.0;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__ALTITUDE:
    {
        return m_altitude != 0.0;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__POSITIONTIME:
    {
        return m_positionTime != 0.0;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__HDOP:
    {
        return m_hDOP != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__PDOP:
    {
        return m_pDOP != 0.0f;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__NUMBEROFSATTELITES:
    {
        return m_numberOfSattelites != 0;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void GPS_INFO_R::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LATITUDE:
    {
        // 0.0
        setLatitude(0.0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__LONGITUDE:
    {
        // 0.0
        setLongitude(0.0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__ALTITUDE:
    {
        // 0.0
        setAltitude(0.0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__POSITIONTIME:
    {
        // 0.0
        setPositionTime(0.0);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__HDOP:
    {
        // 0.0f
        setHDOP(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__PDOP:
    {
        // 0.0f
        setPDOP(0.0f);
        return;
    }
    case ::nevonex::fcal::FcalPackage::GPS_INFO_R__NUMBEROFSATTELITES:
    {
        // 0
        setNumberOfSattelites(0);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr GPS_INFO_R::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::fcal::FcalPackage* >(::nevonex::fcal::FcalPackage::_instance().get())->getGPS_INFO_R();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GPS_INFO_R::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void GPS_INFO_R::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
