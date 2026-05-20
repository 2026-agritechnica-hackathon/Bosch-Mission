/*
 * nevonex/platform_service/Platform_ServiceProvider.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "Platform_ServiceProvider.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/platform_service/Platform_servicePackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(Platform_ServiceProvider.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::platform_service;
using namespace ::nevonex::log;

Platform_ServiceProvider::Platform_ServiceProvider() : m_platform_Service(0)
{
    _initialize();

    /*PROTECTED REGION ID(Platform_ServiceProvider__Platform_ServiceProvider) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Platform_ServiceProvider::~Platform_ServiceProvider()
{
    m_platform_Service.reset();
}

// References
::nevonex::platform_service::Platform_Service_ptr Platform_ServiceProvider::getPlatform_Service() const
{
    return m_platform_Service;
}

void Platform_ServiceProvider::setPlatform_Service(::nevonex::platform_service::Platform_Service_ptr _platform_Service)
{
    if (m_platform_Service)
        m_platform_Service->_setEContainer(Platform_ServiceProvider_ptr(),
                Platform_servicePackage::_instance()->getPlatform_ServiceProvider__platform_Service());
    if (_platform_Service)
        _platform_Service->_setEContainer(_this(),
                Platform_servicePackage::_instance()->getPlatform_ServiceProvider__platform_Service());
    m_platform_Service = _platform_Service;
}

// Operations
void Platform_ServiceProvider::createMachines(std::istream & _stream)
{
    /*PROTECTED REGION ID(Platform_ServiceProvider__createMachines) START*/
    /*PROTECTED REGION END*/
}

void Platform_ServiceProvider::constructChildTypes(::ecore::EJavaObject _parent, ::ecore::EObject_ptr _parentObj, ::ecore::EString const& _path)
{
    /*PROTECTED REGION ID(Platform_ServiceProvider__constructChildTypes) START*/
    /*PROTECTED REGION END*/
}

void Platform_ServiceProvider::initMachineProvider()
{
    ::nevonex::types::IMachineProvider::initMachineProvider();
    /*PROTECTED REGION ID(Platform_ServiceProvider__initMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void Platform_ServiceProvider::stopMachineProvider()
{
    /*PROTECTED REGION ID(Platform_ServiceProvider__stopMachineProvider) START*/
    /*PROTECTED REGION END*/
}

void Platform_ServiceProvider::start()
{
    ::nevonex::types::IMachineProvider::start();
    /*PROTECTED REGION ID(Platform_ServiceProvider__start) START*/
    /*PROTECTED REGION END*/
}

void Platform_ServiceProvider::stop()
{
    ::nevonex::types::IMachineProvider::stop();
    /*PROTECTED REGION ID(Platform_ServiceProvider__stop) START*/
    /*PROTECTED REGION END*/
}

void Platform_ServiceProvider::restart()
{
    ::nevonex::types::IMachineProvider::restart();
    /*PROTECTED REGION ID(Platform_ServiceProvider__restart) START*/
    /*PROTECTED REGION END*/
}

void Platform_ServiceProvider::onConnectionStatusChange(const std::string & index, ::nevonex::machine::MachineConnectionInfo_ptr)
{
    /*PROTECTED REGION ID(Platform_ServiceProvider__onConnectionStatusChange) START*/
    /*PROTECTED REGION END*/
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void Platform_ServiceProvider::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void Platform_ServiceProvider::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void Platform_ServiceProvider::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
