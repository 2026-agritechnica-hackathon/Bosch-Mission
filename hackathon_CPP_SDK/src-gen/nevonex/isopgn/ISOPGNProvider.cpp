/*
 * nevonex/isopgn/ISOPGNProvider.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "ISOPGNProvider.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/isopgn/IsopgnPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(ISOPGNProvider.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::isopgn;
using namespace ::nevonex::log;

ISOPGNProvider::ISOPGNProvider() : m_iSOPGN(0)
{
    _initialize();

    /*PROTECTED REGION ID(ISOPGNProvider__ISOPGNProvider) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

ISOPGNProvider::~ISOPGNProvider()
{
    m_iSOPGN.reset();
}

// References
::nevonex::isopgn::ISOPGN_ptr ISOPGNProvider::getISOPGN() const
{
    return m_iSOPGN;
}

void ISOPGNProvider::setISOPGN(::nevonex::isopgn::ISOPGN_ptr _iSOPGN)
{
    if (m_iSOPGN)
        m_iSOPGN->_setEContainer(ISOPGNProvider_ptr(),
                IsopgnPackage::_instance()->getISOPGNProvider__iSOPGN());
    if (_iSOPGN)
        _iSOPGN->_setEContainer(_this(),
                IsopgnPackage::_instance()->getISOPGNProvider__iSOPGN());
    m_iSOPGN = _iSOPGN;
}

// Operations
void ISOPGNProvider::createMachines(std::istream & _stream)
{
    /*PROTECTED REGION ID(ISOPGNProvider__createMachines) START*/
    /*PROTECTED REGION END*/
}

void ISOPGNProvider::constructChildTypes(::ecore::EJavaObject _parent, ::ecore::EObject_ptr _parentObj, ::ecore::EString const& _path)
{
    /*PROTECTED REGION ID(ISOPGNProvider__constructChildTypes) START*/
    /*PROTECTED REGION END*/
}

void ISOPGNProvider::initMachineProvider()
{
    ::nevonex::types::IMachineProvider::initMachineProvider();
    /*PROTECTED REGION ID(ISOPGNProvider__initMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void ISOPGNProvider::stopMachineProvider()
{
    /*PROTECTED REGION ID(ISOPGNProvider__stopMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void ISOPGNProvider::start()
{
    ::nevonex::types::IMachineProvider::start();
    /*PROTECTED REGION ID(ISOPGNProvider__start) START*/
    /*PROTECTED REGION END*/
}

void ISOPGNProvider::stop()
{
    ::nevonex::types::IMachineProvider::stop();
    /*PROTECTED REGION ID(ISOPGNProvider__stop) START*/
    /*PROTECTED REGION END*/
}

void ISOPGNProvider::restart()
{
    ::nevonex::types::IMachineProvider::restart();
    /*PROTECTED REGION ID(ISOPGNProvider__restart) START*/
    /*PROTECTED REGION END*/
}

void ISOPGNProvider::onConnectionStatusChange(const std::string & index, ::nevonex::machine::MachineConnectionInfo_ptr)
{
    /*PROTECTED REGION ID(ISOPGNProvider__onConnectionStatusChange) START*/
    /*PROTECTED REGION END*/
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void ISOPGNProvider::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void ISOPGNProvider::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void ISOPGNProvider::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
