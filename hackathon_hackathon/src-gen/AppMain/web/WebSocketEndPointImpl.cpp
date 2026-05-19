/*
 * AppMain/web/WebSocketEndPointImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "WebSocketEndPoint.hpp"
#include <stdexcept>

#include <AppMain/MainController.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>
#include <functional>

#include <nevonex-fcal-platform/log/Logger.hpp>

#include <json/json.h>
#include <nevonex/cloud/Cloud.hpp>
#include <chrono>
#include <memory>
#include <string>
#include <sstream>

/*PROTECTED REGION ID(WebSocketEndPointImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::AppMain::web;
using namespace ::nevonex::log;

namespace {

// Build proxy-request JSON for backend external URL forwarding.
// Contract: { correlation-id, externalUrl, method, header, msg }
std::string buildExternalApiRequestJson(const Json::Value& ui)
{
    const auto now = std::chrono::system_clock::now();
    const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            now.time_since_epoch()).count();
    std::ostringstream corr;
    corr << "WS" << ms;

    const std::string uiCid = ui.get("correlation-id", "").asString();
    Json::Value req;
    req["correlation-id"] = uiCid.empty() ? corr.str() : uiCid;
    req["externalUrl"] = ui.get("endPoint", "").asString();
    req["method"] = ui.get("methodSelect", "GET").asString();
    req["header"] = ui.get("reqHeader", Json::Value());
    req["msg"] = ui.get("reqBody", Json::Value());

    Json::StreamWriterBuilder wb;
    wb["indentation"] = "";
    return Json::writeString(wb, req);
}

// Dispatch UI-originated external API request through Cloud proxy channel.
void dispatchExternalApiRequest(const Json::Value& ui)
{
    const std::string payload = buildExternalApiRequestJson(ui);
    ::nevonex::cloud::Cloud::getInstance()->uploadData(payload, 1);
}

} // anonymous namespace

/*PROTECTED REGION ID(WebSocketEndPointImpl_Methods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
void WebSocketEndPoint::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(WebSocketEndPointImpl__initialize) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// Singleton
std::shared_ptr< WebSocketEndPoint > WebSocketEndPoint::s_holder;

std::shared_ptr< WebSocketEndPoint > WebSocketEndPoint::getInstance()
{
    if (!s_holder)
    {
        s_holder = std::shared_ptr< WebSocketEndPoint >(new WebSocketEndPoint());
    }
    return s_holder;
}

void WebSocketEndPoint::onWebSocketMessage(const std::string &message)
{
    NEVONEX_LOG(SeverityLevel::debug) << "Received message from web socket client: " << message;

    // Default: detect UI-originated external API request payload and dispatch
    // through Cloud proxy. UI contract: { endPoint, methodSelect, reqHeader, reqBody }.
    try
    {
        Json::Value root;
        Json::CharReaderBuilder rb;
        std::string errs;
        std::unique_ptr<Json::CharReader> reader(rb.newCharReader());
        if (reader->parse(message.data(),
                          message.data() + message.size(),
                          &root, &errs))
        {
            if (root.isMember("endPoint"))
            {
                dispatchExternalApiRequest(root);
                return;
            }
        }
    }
    catch (...)
    {
    }

    /*PROTECTED REGION ID(WebSocketEndPoint__onWebSocketMessage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void WebSocketEndPoint::publishMessage(const std::string &message)
{
    if (websocket != nullptr)
    {
        websocket->publishMessage(message);
    }
}

void WebSocketEndPoint::disconnect()
{
    NEVONEX_LOG(SeverityLevel::info)
            << "The feature is going to be stopped, so web socket client is getting disconnected.";
    if (websocket != nullptr)
    {
        websocket->close();
        websocket = nullptr;
    }
}

::nevonex::web::server::WebSocketRoute* WebSocketEndPoint::createWebsocketRoute(
        const Poco::Net::HTTPServerRequest &request)
{
    if (websocket != nullptr)
    {
        websocket->close();
    }
    websocket = new ::nevonex::web::server::MessageQueueWebsocket();
    websocket->set_message_handler(
            std::bind(&WebSocketEndPoint::onWebSocketMessage, this, std::placeholders::_1));
    websocket->set_disconnected_handler(
            std::bind(&WebSocketEndPoint::onDisconnect, this, std::placeholders::_1));
    return websocket;
}

void WebSocketEndPoint::onDisconnect(const std::string &message)
{
    NEVONEX_LOG(SeverityLevel::info) << "Web socket client disconnected: " << message;
    websocket = nullptr;
}

#ifdef ENABLE_RAPID_JSON_API
void WebSocketEndPoint::onWebSocketJsonMessage(rapidjson::Document &outputJsonObject)
{
    /*PROTECTED REGION ID(WebSocketEndPoint__onWebSocketJsonMessage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void WebSocketEndPoint::publishMessage(const rapidjson::Document &jsonMessage)
{
    /*PROTECTED REGION ID(WebSocketEndPoint__publishJsonMessage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}
#else // ENABLE_RAPID_JSON_API
void WebSocketEndPoint::onWebSocketJsonMessage(Json::Value &jsonMessage)
{
    /*PROTECTED REGION ID(WebSocketEndPoint__onWebSocketJsonMessage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void WebSocketEndPoint::publishMessage(const Json::Value &jsonMessage)
{
    /*PROTECTED REGION ID(WebSocketEndPoint__publishJsonMessage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}
#endif // ENABLE_RAPID_JSON_API

/*PROTECTED REGION ID(WebSocketEndPointImpl_MethodsEnd) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
