/*
 * nevonex/implement/ImplementImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "Implement.hpp"
#include <stdexcept>

#include <nevonex/implement/ImplementPackage.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(ImplementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::implement;
using namespace ::nevonex::log;

void Implement::_initialize()
{
    // Supertypes
    ::nevonex::common::TopicObject::_initialize();

    // References

    /*PROTECTED REGION ID(ImplementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject Implement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::implement::ImplementPackage::IMPLEMENT__LIFETIMEWORKINGHOURS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_lifetimeWorkingHours);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void Implement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::implement::ImplementPackage::IMPLEMENT__LIFETIMEWORKINGHOURS:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::nevonex::implement::Implement::setLifetimeWorkingHours(_t0);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean Implement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::implement::ImplementPackage::IMPLEMENT__LIFETIMEWORKINGHOURS:
    {
        return m_lifetimeWorkingHours != 0.0;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void Implement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::implement::ImplementPackage::IMPLEMENT__LIFETIMEWORKINGHOURS:
    {
        // 0.0
        setLifetimeWorkingHours(0.0);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr Implement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::implement::ImplementPackage* >(::nevonex::implement::ImplementPackage::_instance().get())->getImplement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Implement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Implement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
