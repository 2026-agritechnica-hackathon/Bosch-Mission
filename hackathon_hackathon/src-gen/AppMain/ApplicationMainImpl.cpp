/*
 * AppMain/ApplicationMainImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "ApplicationMain.hpp"
#include <stdexcept>

#include <AppMain/MainController.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(ApplicationMainImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/exception/diagnostic_information.hpp>
#include <boost/lexical_cast.hpp>

#include <ecore/EAttribute.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex.hpp>
#include <nevonex/common/ProviderEnum.hpp>
#include <nevonex/exception/CommunicationException.hpp>
#include <nevonex/exception/NotInitializedException.hpp>

#include <AppMain/MachineConnectListener.hpp>    

#include "web/SampleRouteFactory.hpp"
#include "web/WebSocketEndPoint.hpp"
#include <nevonex/customui/UIWebServiceProvider.hpp>
#include <nevonex/fcb/SubscribeConnectionFactory.hpp>

#ifdef SEAMOS_DEV_LOCAL_SIM
#include <mqtt/async_client.h>
#include <memory>
#include <string>
#endif

#include "CloudDownloadListener.hpp"
#include <nevonex/cloud/Cloud.hpp>

#include "Device2DeviceDownloadListener.hpp"
#include <nevonex/device2device/Device2Device.hpp>

/*PROTECTED REGION ID(ApplicationMainImpl_Headers) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;
using namespace ::ecorecpp::mapping;

using namespace ::nevonex;
using namespace ::nevonex::fcal;
using namespace ::nevonex::common;
using namespace ::nevonex::types;
using namespace ::nevonex::gps_tc;
using namespace ::nevonex::implement;
using namespace ::nevonex::isopgn;

/*PROTECTED REGION ID(ApplicationMainImpl_AddnlMethods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

#ifdef SEAMOS_DEV_LOCAL_SIM
namespace {
class TestSimMqttBridge : public virtual mqtt::callback
{
public:
    TestSimMqttBridge(const std::string &serverUri, const std::string &clientId) :
            m_client(serverUri, clientId)
    {
        m_client.set_callback(*this);
    }

    bool start()
    {
        try
        {
            mqtt::connect_options opts;
            opts.set_clean_session(true);
            opts.set_automatic_reconnect(true);
            m_client.connect(opts)->wait();
            m_client.subscribe("fek/#", 0)->wait();
            NEVONEX_LOG(::nevonex::log::SeverityLevel::info)
                    << "[MQTT bridge] connected + subscribed fek/#";
            return true;
        } catch (const std::exception &e)
        {
            NEVONEX_LOG(::nevonex::log::SeverityLevel::warning)
                    << "[MQTT bridge] start failed: " << e.what();
            return false;
        }
    }

    void connection_lost(const std::string &cause) override
    {
        NEVONEX_LOG(::nevonex::log::SeverityLevel::warning)
                << "[MQTT bridge] connection lost: " << cause;
    }

    void message_arrived(mqtt::const_message_ptr msg) override
    {
        const std::string topic = msg->get_topic();
        const std::string payload = msg->to_string();

        std::string framed;
        framed.reserve(topic.size() + payload.size() + 32);
        framed.append("{\"topic\":\"").append(topic).append("\",\"payload\":")
                .append(payload).append("}");

        auto ws = ::AppMain::web::WebSocketEndPoint::getInstance();
        if (ws)
        {
            ws->publishMessage(framed);
        }
    }

    void delivery_complete(mqtt::delivery_token_ptr /*token*/) override {}

private:
    mqtt::async_client m_client;
};

std::unique_ptr< TestSimMqttBridge > g_testSimBridge;
} // anonymous namespace
#endif

using namespace ::AppMain;
using namespace ::nevonex::log;

/*PROTECTED REGION ID(ApplicationMainImpl_Methods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
int main()
{
    /*PROTECTED REGION ID(ApplicationMain_Main) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    try
    {
        ApplicationMain *sa = new ApplicationMain();
        // Calling runtime to start the application
        std::vector < std::string > vec;

        vec.push_back(
                common::getLiteral(ProviderEnum::GPS_TCProvider));

        vec.push_back(
                common::getLiteral(ProviderEnum::ImplementProvider));

        vec.push_back(
                common::getLiteral(ProviderEnum::ISOPGNProvider));

        /*PROTECTED REGION ID(ApplicationMain_MainBeforeInitialize) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

        sa->initialize(vec);

        sa->addCustomUIListener();

        sa->addCloudDownloadListener();

        sa->addDevice2DeviceDownloadListener();

        /*PROTECTED REGION ID(ApplicationMain_MainBeforeRuntime) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

#ifdef SEAMOS_DEV_LOCAL_SIM
        sa->addProcessTimer();
        ::nevonex::customui::UIWebServiceProvider::getInstance()->start();
        g_testSimBridge.reset(new TestSimMqttBridge(
                "tcp://127.0.0.1:1883", "seamos_local_sim_bridge"));
        g_testSimBridge->start();
#else
        ::nevonex::fcb::SubscribeConnectionFactory::getInstance()->setOnMessage(
            [](const std::string& _topic, const std::string& _payload) {
                auto ws = ::AppMain::web::WebSocketEndPoint::getInstance();
                if (!ws) return;
                std::string framed;
                framed.reserve(_topic.size() + _payload.size() + 32);
                framed.append("{\"topic\":\"").append(_topic)
                        .append("\",\"payload\":").append(_payload).append("}");
                ws->publishMessage(framed);
            });
#endif

        /*PROTECTED REGION ID(ApplicationMain_MainAfterRuntime) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

        sa->start();
    } catch (const std::exception &ex)
    {
        NEVONEX_LOG(SeverityLevel::fatal) << boost::diagnostic_information(ex);
    }
}

void ApplicationMain::onStart(::nevonex::feature::AbstractMachine_ptr machine)
{
    /*PROTECTED REGION ID(Machine_onStart_First) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    if (GPS_TC_ptr gPS_TC =
            ::ecore::as < GPS_TC > (machine))
    {
        MachineConnectListener *machineListener = new MachineConnectListener();
        machineListener->setMainController(getMainController());
        gPS_TC->addListeners(machineListener);

        // Machine has started. Check for Type and Index.
        /*PROTECTED REGION ID(GPS_TCProviderGPS_TC_onStart) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    }

    else if (Implement_ptr implement =
            ::ecore::as < Implement > (machine))
    {
        MachineConnectListener *machineListener = new MachineConnectListener();
        machineListener->setMainController(getMainController());
        implement->addListeners(machineListener);

        // Machine has started. Check for Type and Index.
        /*PROTECTED REGION ID(ImplementProviderImplement_onStart) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    }

    else if (ISOPGN_ptr iSOPGN =
            ::ecore::as < ISOPGN > (machine))
    {
        MachineConnectListener *machineListener = new MachineConnectListener();
        machineListener->setMainController(getMainController());
        iSOPGN->addListeners(machineListener);

        // Machine has started. Check for Type and Index.
        /*PROTECTED REGION ID(ISOPGNProviderISOPGN_onStart) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    }

    /*PROTECTED REGION ID(Machine_onStart_AdditionalMethods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

bool ApplicationMain::onStart(
        ::nevonex::feature::AbstractMachineProvider_ptr provider)
{
    /*PROTECTED REGION ID(Provider_onStart_First) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    if (GPS_TCProvider_ptr gPS_TCProvider =
            ::ecore::as < GPS_TCProvider > (provider))
    {
        m_mainController->setGPS_TCProvider(
                gPS_TCProvider);
        /*PROTECTED REGION ID(GPS_TCProvider_onStart) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    }

    else if (ImplementProvider_ptr implementProvider =
            ::ecore::as < ImplementProvider > (provider))
    {
        m_mainController->setImplementProvider(
                implementProvider);
        /*PROTECTED REGION ID(ImplementProvider_onStart) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    }

    else if (ISOPGNProvider_ptr iSOPGNProvider =
            ::ecore::as < ISOPGNProvider > (provider))
    {
        m_mainController->setISOPGNProvider(
                iSOPGNProvider);
        /*PROTECTED REGION ID(ISOPGNProvider_onStart) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    }

    /*PROTECTED REGION ID(Provider_onStart_AdditionalMethods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    return true;
}

void ApplicationMain::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ApplicationMainImpl__initialize) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

void ApplicationMain::addProcessTimer()
{

    static bool atleastOneMachineCreated = false;
    if (!atleastOneMachineCreated)
    {
        ProcessTimer(m_mainController, 1000);
        atleastOneMachineCreated = true;
    }
    else
    {
        NEVONEX_LOG(SeverityLevel::warning) << "Timer already created.";
    }

}

void ApplicationMain::addCustomUIListener()
{

    using namespace ::AppMain::web;

    /*PROTECTED REGION ID(AppMainImpl_addCustomUIListener) START*/
    std::shared_ptr< SampleRouteFactory > sampleRouteFactorySharedPtr =
            std::make_shared< SampleRouteFactory >();
    sampleRouteFactorySharedPtr->setMainController(getMainController());
    ::nevonex::customui::UIWebServiceProvider::getInstance()->registerRoute(
            "/helloworld", sampleRouteFactorySharedPtr);

    std::shared_ptr< WebSocketEndPoint > webSocketEndPointsSharedPtr =
            WebSocketEndPoint::getInstance();
    getMainController()->setWebSocketEndPoint(webSocketEndPointsSharedPtr);
    webSocketEndPointsSharedPtr->setMainController(getMainController());
    ::nevonex::customui::UIWebServiceProvider::getInstance()->registerWebsocketRoute(
            "/socket", webSocketEndPointsSharedPtr);

    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

void ApplicationMain::addCloudDownloadListener()
{
    using namespace ::nevonex::cloud;
    CloudDownloadListener *cloudDownloadListener = new CloudDownloadListener();
    cloudDownloadListener->setMainController(getMainController());
    Cloud::getInstance()->addPropertyChangeListener(cloudDownloadListener);
    /*PROTECTED REGION ID(AppMainImpl_addCloudDownloadListener) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void ApplicationMain::addDevice2DeviceDownloadListener()
{
    using namespace ::nevonex::device2device;
    Device2DeviceDownloadListener *device2DeviceDownloadListener =
            new Device2DeviceDownloadListener();
    device2DeviceDownloadListener->setMainController(getMainController());
    Device2Device::getInstance()->addPropertyChangeListener(
            device2DeviceDownloadListener);
    /*PROTECTED REGION ID(AppMainImpl_addDevice2DeviceDownloadListener) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

/*PROTECTED REGION ID(ApplicationMainImpl_MethodsEnd) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
