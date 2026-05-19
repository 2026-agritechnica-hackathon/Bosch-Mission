/*
 * AppMain/CloudDownloadListenerImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "CloudDownloadListener.hpp"
#include <stdexcept>

#include <AppMain/MainController.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>
#include <json/json.h>
#include <memory>
#include "web/WebSocketEndPoint.hpp"

/*PROTECTED REGION ID(CloudDownloadListenerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::AppMain;
using namespace ::nevonex::log;

/*PROTECTED REGION ID(CloudDownloadListenerImpl_Methods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
void CloudDownloadListener::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(CloudDownloadListenerImpl__initialize) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

void CloudDownloadListener::handleMessage(const std::string &_content)
{
    /*PROTECTED REGION ID(CloudDownloadListener_handleMessage_preParse) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    // Default: wrap proxy-response JSON in an envelope and broadcast to UI via WebSocket.
    // Backend contract (incoming): { "data": {...}, "correlation-id": "..." }
    // Broadcast envelope (outgoing): { "type": "external_api_response", "correlation-id": "...", "data": {...} }
    Json::CharReaderBuilder rb;
    std::string errs;
    std::unique_ptr<Json::CharReader> reader(rb.newCharReader());
    Json::Value root;
    if (reader->parse(_content.data(), _content.data() + _content.size(), &root, &errs))
    {
        Json::Value envelope;
        envelope["type"] = "external_api_response";
        envelope["correlation-id"] = root.get("correlation-id", "");
        envelope["data"] = root.get("data", Json::Value());
        Json::StreamWriterBuilder wb;
        wb["indentation"] = "";
        const std::string broadcast = Json::writeString(wb, envelope);
        auto ws = ::AppMain::web::WebSocketEndPoint::getInstance();
        if (ws)
        {
            ws->publishMessage(broadcast);
        }
        NEVONEX_LOG(SeverityLevel::info) << "[CloudDownload] correlation-id="
                                          << envelope["correlation-id"].asString()
                                          << " forwarded to WS";
    }
    else
    {
        NEVONEX_LOG(SeverityLevel::warning) << "[CloudDownload] JSON parse failed: " << errs;
    }

    /*PROTECTED REGION ID(CloudDownloadListener_handleMessage_afterBroadcast) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void CloudDownloadListener::handleFile(const ::nevonex::resource::FilePath &_filePath)
{
    NEVONEX_LOG(SeverityLevel::debug) << "Cloud File: " << _filePath.get().string();
    /*PROTECTED REGION ID(CloudDownloadListener_handleFile_body) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

/*PROTECTED REGION ID(CloudDownloadListenerImpl_MethodsEnd) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
