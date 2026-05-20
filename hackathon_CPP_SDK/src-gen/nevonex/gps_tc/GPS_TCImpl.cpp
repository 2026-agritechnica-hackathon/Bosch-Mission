/*
 * nevonex/gps_tc/GPS_TCImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPS_TC.hpp"
#include <stdexcept>

#include <nevonex/gps_tc/Gps_tcPackage.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <nevonex/fcal/GPS_INFO_R.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPS_TCImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gps_tc;
using namespace ::nevonex::log;

void GPS_TC::_initialize()
{
    // Supertypes
    ::nevonex::common::TopicObject::_initialize();

    // References

    /*PROTECTED REGION ID(GPS_TCImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject GPS_TC::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__ACTIVE_TC_GPS_SOURCE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_active_TC_GPS_source);
        return _any;
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__POSITIONOFGPSSENSOR:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_positionofGpsSensor);
        return _any;
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__TCGPSINFO:
    {
        if (m_tcGpsInfo)
            _any = ::ecore::as < ::ecore::EObject > (m_tcGpsInfo);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void GPS_TC::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__ACTIVE_TC_GPS_SOURCE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::gps_tc::GPS_TC::setActive_TC_GPS_source(_t0);
        return;
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__POSITIONOFGPSSENSOR:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::gps_tc::GPS_TC::setPositionofGpsSensor(_t0);
        return;
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__TCGPSINFO:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::nevonex::fcal::GPS_INFO_R_ptr _t1 =
                dynamic_cast< ::nevonex::fcal::GPS_INFO_R* >(_t0.get());
        ::nevonex::gps_tc::GPS_TC::setTcGpsInfo(_t1);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean GPS_TC::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__ACTIVE_TC_GPS_SOURCE:
    {
        return m_active_TC_GPS_source != "";
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__POSITIONOFGPSSENSOR:
    {
        return m_positionofGpsSensor != "";
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__TCGPSINFO:
    {
        return (bool) m_tcGpsInfo;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void GPS_TC::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__ACTIVE_TC_GPS_SOURCE:
    {
        // ""
        setActive_TC_GPS_source("");
        return;
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__POSITIONOFGPSSENSOR:
    {
        // ""
        setPositionofGpsSensor("");
        return;
    }
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__TCGPSINFO:
    {
        // nullptr
        setTcGpsInfo(nullptr);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr GPS_TC::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::gps_tc::Gps_tcPackage* >(::nevonex::gps_tc::Gps_tcPackage::_instance().get())->getGPS_TC();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GPS_TC::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__TCGPSINFO:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void GPS_TC::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TC__TCGPSINFO:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
