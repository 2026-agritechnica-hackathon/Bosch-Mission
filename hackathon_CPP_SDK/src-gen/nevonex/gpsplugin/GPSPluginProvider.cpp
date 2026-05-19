/*
 * nevonex/gpsplugin/GPSPluginProvider.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "GPSPluginProvider.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/gpsplugin/GpspluginPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(GPSPluginProvider.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::gpsplugin;
using namespace ::nevonex::log;

GPSPluginProvider::GPSPluginProvider() : m_gPSPlugin(0)
{
    _initialize();

    /*PROTECTED REGION ID(GPSPluginProvider__GPSPluginProvider) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

GPSPluginProvider::~GPSPluginProvider()
{
    m_gPSPlugin.reset();
}

// References
::nevonex::gpsplugin::GPSPlugin_ptr GPSPluginProvider::getGPSPlugin() const
{
    return m_gPSPlugin;
}

void GPSPluginProvider::setGPSPlugin(::nevonex::gpsplugin::GPSPlugin_ptr _gPSPlugin)
{
    if (m_gPSPlugin)
        m_gPSPlugin->_setEContainer(GPSPluginProvider_ptr(),
                GpspluginPackage::_instance()->getGPSPluginProvider__gPSPlugin());
    if (_gPSPlugin)
        _gPSPlugin->_setEContainer(_this(),
                GpspluginPackage::_instance()->getGPSPluginProvider__gPSPlugin());
    m_gPSPlugin = _gPSPlugin;
}

// Operations
void GPSPluginProvider::createMachines(std::istream & _stream)
{
    /*PROTECTED REGION ID(GPSPluginProvider__createMachines) START*/
    /*PROTECTED REGION END*/
}

void GPSPluginProvider::constructChildTypes(::ecore::EJavaObject _parent, ::ecore::EObject_ptr _parentObj, ::ecore::EString const& _path)
{
    /*PROTECTED REGION ID(GPSPluginProvider__constructChildTypes) START*/
    /*PROTECTED REGION END*/
}

void GPSPluginProvider::initMachineProvider()
{
    ::nevonex::types::IMachineProvider::initMachineProvider();
    /*PROTECTED REGION ID(GPSPluginProvider__initMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void GPSPluginProvider::stopMachineProvider()
{
    /*PROTECTED REGION ID(GPSPluginProvider__stopMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void GPSPluginProvider::start()
{
    ::nevonex::types::IMachineProvider::start();
    /*PROTECTED REGION ID(GPSPluginProvider__start) START*/
    /*PROTECTED REGION END*/
}

void GPSPluginProvider::stop()
{
    ::nevonex::types::IMachineProvider::stop();
    /*PROTECTED REGION ID(GPSPluginProvider__stop) START*/
    /*PROTECTED REGION END*/
}

void GPSPluginProvider::restart()
{
    ::nevonex::types::IMachineProvider::restart();
    /*PROTECTED REGION ID(GPSPluginProvider__restart) START*/
    /*PROTECTED REGION END*/
}

void GPSPluginProvider::onConnectionStatusChange(const std::string & index, ::nevonex::machine::MachineConnectionInfo_ptr)
{
    /*PROTECTED REGION ID(GPSPluginProvider__onConnectionStatusChange) START*/
    /*PROTECTED REGION END*/
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void GPSPluginProvider::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void GPSPluginProvider::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void GPSPluginProvider::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
