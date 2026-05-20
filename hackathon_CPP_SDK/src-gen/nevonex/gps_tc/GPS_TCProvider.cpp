/*
 * nevonex/gps_tc/GPS_TCProvider.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPS_TCProvider.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/gps_tc/Gps_tcPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPS_TCProvider.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gps_tc;
using namespace ::nevonex::log;

GPS_TCProvider::GPS_TCProvider() : m_gPS_TC(0)
{
    _initialize();

    /*PROTECTED REGION ID(GPS_TCProvider__GPS_TCProvider) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

GPS_TCProvider::~GPS_TCProvider()
{
    m_gPS_TC.reset();
}

// References
::nevonex::gps_tc::GPS_TC_ptr GPS_TCProvider::getGPS_TC() const
{
    return m_gPS_TC;
}

void GPS_TCProvider::setGPS_TC(::nevonex::gps_tc::GPS_TC_ptr _gPS_TC)
{
    if (m_gPS_TC)
        m_gPS_TC->_setEContainer(GPS_TCProvider_ptr(),
                Gps_tcPackage::_instance()->getGPS_TCProvider__gPS_TC());
    if (_gPS_TC)
        _gPS_TC->_setEContainer(_this(),
                Gps_tcPackage::_instance()->getGPS_TCProvider__gPS_TC());
    m_gPS_TC = _gPS_TC;
}

// Operations
void GPS_TCProvider::createMachines(std::istream & _stream)
{
    /*PROTECTED REGION ID(GPS_TCProvider__createMachines) START*/
    /*PROTECTED REGION END*/
}

void GPS_TCProvider::constructChildTypes(::ecore::EJavaObject _parent, ::ecore::EObject_ptr _parentObj, ::ecore::EString const& _path)
{
    /*PROTECTED REGION ID(GPS_TCProvider__constructChildTypes) START*/
    /*PROTECTED REGION END*/
}

void GPS_TCProvider::initMachineProvider()
{
    ::nevonex::types::IMachineProvider::initMachineProvider();
    /*PROTECTED REGION ID(GPS_TCProvider__initMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void GPS_TCProvider::stopMachineProvider()
{
    /*PROTECTED REGION ID(GPS_TCProvider__stopMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void GPS_TCProvider::start()
{
    ::nevonex::types::IMachineProvider::start();
    /*PROTECTED REGION ID(GPS_TCProvider__start) START*/
    /*PROTECTED REGION END*/
}

void GPS_TCProvider::stop()
{
    ::nevonex::types::IMachineProvider::stop();
    /*PROTECTED REGION ID(GPS_TCProvider__stop) START*/
    /*PROTECTED REGION END*/
}

void GPS_TCProvider::restart()
{
    ::nevonex::types::IMachineProvider::restart();
    /*PROTECTED REGION ID(GPS_TCProvider__restart) START*/
    /*PROTECTED REGION END*/
}

void GPS_TCProvider::onConnectionStatusChange(const std::string & index, ::nevonex::machine::MachineConnectionInfo_ptr)
{
    /*PROTECTED REGION ID(GPS_TCProvider__onConnectionStatusChange) START*/
    /*PROTECTED REGION END*/
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void GPS_TCProvider::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void GPS_TCProvider::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void GPS_TCProvider::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
