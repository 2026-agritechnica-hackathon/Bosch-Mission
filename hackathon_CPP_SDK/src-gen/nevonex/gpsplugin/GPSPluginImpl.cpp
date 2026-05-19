/*
 * nevonex/gpsplugin/GPSPluginImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPSPlugin.hpp"
#include <stdexcept>

#include <nevonex/gpsplugin/GpspluginPackage.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <nevonex/fcal/INTERNAL_GPS_DETAILEDINFO_R.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPSPluginImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gpsplugin;
using namespace ::nevonex::log;

void GPSPlugin::_initialize()
{
    // Supertypes
    ::nevonex::common::TopicObject::_initialize();

    // References

    /*PROTECTED REGION ID(GPSPluginImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject GPSPlugin::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__GPSSENSORPOSITION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_gPSSensorPosition);
        return _any;
    }
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__INTERNALGPSDETAILEDINFO:
    {
        if (m_internalGpsDetailedInfo)
            _any = ::ecore::as < ::ecore::EObject > (m_internalGpsDetailedInfo);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void GPSPlugin::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__GPSSENSORPOSITION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::gpsplugin::GPSPlugin::setGPSSensorPosition(_t0);
        return;
    }
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__INTERNALGPSDETAILEDINFO:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R_ptr _t1 =
                dynamic_cast< ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R* >(_t0.get());
        ::nevonex::gpsplugin::GPSPlugin::setInternalGpsDetailedInfo(_t1);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean GPSPlugin::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__GPSSENSORPOSITION:
    {
        return m_gPSSensorPosition != "";
    }
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__INTERNALGPSDETAILEDINFO:
    {
        return (bool) m_internalGpsDetailedInfo;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void GPSPlugin::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__GPSSENSORPOSITION:
    {
        // ""
        setGPSSensorPosition("");
        return;
    }
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__INTERNALGPSDETAILEDINFO:
    {
        // nullptr
        setInternalGpsDetailedInfo(nullptr);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr GPSPlugin::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::gpsplugin::GpspluginPackage* >(::nevonex::gpsplugin::GpspluginPackage::_instance().get())->getGPSPlugin();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GPSPlugin::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__INTERNALGPSDETAILEDINFO:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void GPSPlugin::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGIN__INTERNALGPSDETAILEDINFO:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
