/*
 * nevonex/implement/Implement.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "Implement.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/implement/ImplementPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(Implement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::implement;
using namespace ::nevonex::log;

// Default constructor
Implement::Implement() : m_lifetimeWorkingHours(0)
{
    // Machine does NOT call _initialize() — Provider manages initialization
    m_interfaceDetailMap = {
    };

    /*PROTECTED REGION ID(Implement__Implement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Implement::~Implement()
{
    /*PROTECTED REGION ID(Implement__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// References
::ecore::EDouble Implement::getLifetimeWorkingHours() const
{
    return m_lifetimeWorkingHours;
}

void Implement::setLifetimeWorkingHours(::ecore::EDouble _lifetimeWorkingHours)
{
    ::ecore::EDouble _old_lifetimeWorkingHours = m_lifetimeWorkingHours;
    m_lifetimeWorkingHours = _lifetimeWorkingHours;
    SDK_FCAL_LOG(SeverityLevel::debug) << "Implement property \"lifetimeWorkingHours\" has changed.";
    notifyPropertyChange("lifetimeWorkingHours", _old_lifetimeWorkingHours, m_lifetimeWorkingHours);
}

// FCAL timestamp/valid
::ecore::ELong Implement::getLifetimeWorkingHours_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean Implement::isLifetimeWorkingHours_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void Implement::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void Implement::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void Implement::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
