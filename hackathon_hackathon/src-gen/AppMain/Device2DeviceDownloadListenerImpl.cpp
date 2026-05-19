/*
 * AppMain/Device2DeviceDownloadListenerImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "Device2DeviceDownloadListener.hpp"
#include <stdexcept>

#include <AppMain/MainController.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(Device2DeviceDownloadListenerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::AppMain;
using namespace ::nevonex::log;

/*PROTECTED REGION ID(Device2DeviceDownloadListenerImpl_Methods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
void Device2DeviceDownloadListener::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(Device2DeviceDownloadListenerImpl__initialize) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

void Device2DeviceDownloadListener::handleMessage(const std::string &_content)
{
    NEVONEX_LOG(SeverityLevel::debug) << "Device Message : " << _content;
    /*PROTECTED REGION ID(Device2DeviceDownloadListener_handleMessage_body) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void Device2DeviceDownloadListener::handleFile(const ::nevonex::resource::FilePath &_filePath)
{
    NEVONEX_LOG(SeverityLevel::debug) << "Device File: " << _filePath.get().string();
    /*PROTECTED REGION ID(Device2DeviceDownloadListener_handleFile_body) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

/*PROTECTED REGION ID(Device2DeviceDownloadListenerImpl_MethodsEnd) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
