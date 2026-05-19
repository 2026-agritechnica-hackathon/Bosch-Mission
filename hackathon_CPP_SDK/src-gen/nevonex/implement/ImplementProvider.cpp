/*
 * nevonex/implement/ImplementProvider.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "ImplementProvider.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/implement/ImplementPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(ImplementProvider.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::implement;
using namespace ::nevonex::log;

ImplementProvider::ImplementProvider() : m_implement(0)
{
    _initialize();

    /*PROTECTED REGION ID(ImplementProvider__ImplementProvider) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ImplementProvider::~ImplementProvider()
{
    m_implement.reset();
}

// References
::nevonex::implement::Implement_ptr ImplementProvider::getImplement() const
{
    return m_implement;
}

void ImplementProvider::setImplement(::nevonex::implement::Implement_ptr _implement)
{
    if (m_implement)
        m_implement->_setEContainer(ImplementProvider_ptr(),
                ImplementPackage::_instance()->getImplementProvider__implement());
    if (_implement)
        _implement->_setEContainer(_this(),
                ImplementPackage::_instance()->getImplementProvider__implement());
    m_implement = _implement;
}

// Operations
void ImplementProvider::createMachines(std::istream & _stream)
{
    /*PROTECTED REGION ID(ImplementProvider__createMachines) START*/
    /*PROTECTED REGION END*/
}

void ImplementProvider::constructChildTypes(::ecore::EJavaObject _parent, ::ecore::EObject_ptr _parentObj, ::ecore::EString const& _path)
{
    /*PROTECTED REGION ID(ImplementProvider__constructChildTypes) START*/
    /*PROTECTED REGION END*/
}

void ImplementProvider::initMachineProvider()
{
    ::nevonex::types::IMachineProvider::initMachineProvider();
    /*PROTECTED REGION ID(ImplementProvider__initMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void ImplementProvider::stopMachineProvider()
{
    /*PROTECTED REGION ID(ImplementProvider__stopMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void ImplementProvider::start()
{
    ::nevonex::types::IMachineProvider::start();
    /*PROTECTED REGION ID(ImplementProvider__start) START*/
    /*PROTECTED REGION END*/
}

void ImplementProvider::stop()
{
    ::nevonex::types::IMachineProvider::stop();
    /*PROTECTED REGION ID(ImplementProvider__stop) START*/
    /*PROTECTED REGION END*/
}

void ImplementProvider::restart()
{
    ::nevonex::types::IMachineProvider::restart();
    /*PROTECTED REGION ID(ImplementProvider__restart) START*/
    /*PROTECTED REGION END*/
}

void ImplementProvider::onConnectionStatusChange(const std::string & index, ::nevonex::machine::MachineConnectionInfo_ptr)
{
    /*PROTECTED REGION ID(ImplementProvider__onConnectionStatusChange) START*/
    /*PROTECTED REGION END*/
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void ImplementProvider::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void ImplementProvider::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void ImplementProvider::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
