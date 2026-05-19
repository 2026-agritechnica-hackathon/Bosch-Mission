/*
 * AppMain/MachineConnectListenerImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "MachineConnectListener.hpp"
#include <stdexcept>

#include <AppMain/MainController.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(MachineConnectListenerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

#include <nevonex.hpp>

#include "web/WebSocketEndPoint.hpp"


using namespace ::AppMain;
using namespace ::nevonex::log;

/*PROTECTED REGION ID(MachineConnectListenerImpl_Methods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
void MachineConnectListener::machineConnected(
        ::nevonex::feature::AbstractMachine_ptr machine)
{

    /*PROTECTED REGION ID(MachineConnectListener_machineConnected) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

}

void MachineConnectListener::machineDisconnected(
        ::nevonex::feature::AbstractMachine_ptr machine,
        ::nevonex::machine::MachineConnectionInfo_ptr machineConnectionInfo)
{

    /*PROTECTED REGION ID(MachineConnectListener_machineDisconnected) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void MachineConnectListener::propertyChange(
        ::nevonex::propertychange::PropertyChangeEvent<
                const ::ecore::EJavaObject &,
                const ::ecore::EJavaObject & > changeEvent)
{
    /*PROTECTED REGION ID(MachineConnectListener_propertyChange) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    // Forward plugin property-change events to the CustomUI WebSocket.
    // Frame shape matches the local-sim TestSimMqttBridge output so the
    // browser UI (ui/index.html) can handle both sources uniformly.
    if (!m_mainController) return;
    auto ws = m_mainController->getWebSocketEndPoint();
    if (!ws) return;
    std::string framed;
    const std::string &name = changeEvent.getPropertyName();
    framed.reserve(name.size() + 48);
    framed.append("{\"topic\":\"fek/machine/").append(name)
            .append("\",\"payload\":{}}");
    ws->publishMessage(framed);
}

void MachineConnectListener::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(MachineConnectListenerImpl__initialize) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

/*PROTECTED REGION ID(MachineConnectListenerImpl_MethodsEnd) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
