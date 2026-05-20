/*
 * nevonex/gps_tc/GPS_TCProviderImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPS_TCProvider.hpp"
#include <stdexcept>

#include <nevonex/gps_tc/Gps_tcPackage.hpp>
#include <nevonex/gps_tc/GPS_TC.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPS_TCProviderImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gps_tc;
using namespace ::nevonex::log;

void GPS_TCProvider::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(GPS_TCProviderImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject GPS_TCProvider::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TCPROVIDER__GPS_TC:
    {
        if (m_gPS_TC)
            _any = ::ecore::as < ::ecore::EObject > (m_gPS_TC);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void GPS_TCProvider::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TCPROVIDER__GPS_TC:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::nevonex::gps_tc::GPS_TC_ptr _t1 =
                dynamic_cast< ::nevonex::gps_tc::GPS_TC* >(_t0.get());
        ::nevonex::gps_tc::GPS_TCProvider::setGPS_TC(_t1);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean GPS_TCProvider::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TCPROVIDER__GPS_TC:
    {
        return (bool) m_gPS_TC;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void GPS_TCProvider::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TCPROVIDER__GPS_TC:
    {
        // nullptr
        setGPS_TC(nullptr);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr GPS_TCProvider::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::gps_tc::Gps_tcPackage* >(::nevonex::gps_tc::Gps_tcPackage::_instance().get())->getGPS_TCProvider();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GPS_TCProvider::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TCPROVIDER__GPS_TC:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void GPS_TCProvider::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::nevonex::gps_tc::Gps_tcPackage::GPS_TCPROVIDER__GPS_TC:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
