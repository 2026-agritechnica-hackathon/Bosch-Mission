/*
 * nevonex/gpsplugin/GPSPluginProviderImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPSPluginProvider.hpp"
#include <stdexcept>

#include <nevonex/gpsplugin/GpspluginPackage.hpp>
#include <nevonex/gpsplugin/GPSPlugin.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPSPluginProviderImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gpsplugin;
using namespace ::nevonex::log;

void GPSPluginProvider::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(GPSPluginProviderImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject GPSPluginProvider::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGINPROVIDER__GPSPLUGIN:
    {
        if (m_gPSPlugin)
            _any = ::ecore::as < ::ecore::EObject > (m_gPSPlugin);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void GPSPluginProvider::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGINPROVIDER__GPSPLUGIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::nevonex::gpsplugin::GPSPlugin_ptr _t1 =
                dynamic_cast< ::nevonex::gpsplugin::GPSPlugin* >(_t0.get());
        ::nevonex::gpsplugin::GPSPluginProvider::setGPSPlugin(_t1);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean GPSPluginProvider::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGINPROVIDER__GPSPLUGIN:
    {
        return (bool) m_gPSPlugin;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void GPSPluginProvider::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGINPROVIDER__GPSPLUGIN:
    {
        // nullptr
        setGPSPlugin(nullptr);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr GPSPluginProvider::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::gpsplugin::GpspluginPackage* >(::nevonex::gpsplugin::GpspluginPackage::_instance().get())->getGPSPluginProvider();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GPSPluginProvider::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGINPROVIDER__GPSPLUGIN:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void GPSPluginProvider::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::nevonex::gpsplugin::GpspluginPackage::GPSPLUGINPROVIDER__GPSPLUGIN:
    {
    }
        return;

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
