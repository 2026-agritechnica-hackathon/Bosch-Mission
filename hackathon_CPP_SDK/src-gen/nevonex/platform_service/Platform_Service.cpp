/*
 * nevonex/platform_service/Platform_Service.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "Platform_Service.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/platform_service/Platform_servicePackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(Platform_Service.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::platform_service;
using namespace ::nevonex::log;

// Default constructor
Platform_Service::Platform_Service() : m_download(0), m_uploadData(0), m_uploadFile(0), m_receive(0), m_sendCommand(0), m_sendFile(0)
{
    // Machine does NOT call _initialize() — Provider manages initialization
    m_interfaceDetailMap = {
    };

    /*PROTECTED REGION ID(Platform_Service__Platform_Service) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Platform_Service::~Platform_Service()
{
    /*PROTECTED REGION ID(Platform_Service__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// References
::ecore::EString Platform_Service::getDownload() const
{
    return m_download;
}

void Platform_Service::setDownload(::ecore::EString _download)
{
    ::ecore::EString _old_download = m_download;
    m_download = _download;
    SDK_FCAL_LOG(SeverityLevel::debug) << "Platform_Service property \"download\" has changed.";
    notifyPropertyChange("download", _old_download, m_download);
}

::ecore::EString Platform_Service::getUploadData() const
{
    return m_uploadData;
}

void Platform_Service::setUploadData(::ecore::EString _uploadData)
{
    ::ecore::EString _old_uploadData = m_uploadData;
    m_uploadData = _uploadData;
    SDK_FCAL_LOG(SeverityLevel::debug) << "Platform_Service property \"uploadData\" has changed.";
    notifyPropertyChange("uploadData", _old_uploadData, m_uploadData);
}

::ecore::EString Platform_Service::getUploadFile() const
{
    return m_uploadFile;
}

void Platform_Service::setUploadFile(::ecore::EString _uploadFile)
{
    ::ecore::EString _old_uploadFile = m_uploadFile;
    m_uploadFile = _uploadFile;
    SDK_FCAL_LOG(SeverityLevel::debug) << "Platform_Service property \"uploadFile\" has changed.";
    notifyPropertyChange("uploadFile", _old_uploadFile, m_uploadFile);
}

::ecore::EString Platform_Service::getReceive() const
{
    return m_receive;
}

void Platform_Service::setReceive(::ecore::EString _receive)
{
    ::ecore::EString _old_receive = m_receive;
    m_receive = _receive;
    SDK_FCAL_LOG(SeverityLevel::debug) << "Platform_Service property \"receive\" has changed.";
    notifyPropertyChange("receive", _old_receive, m_receive);
}

::ecore::EString Platform_Service::getSendCommand() const
{
    return m_sendCommand;
}

void Platform_Service::setSendCommand(::ecore::EString _sendCommand)
{
    ::ecore::EString _old_sendCommand = m_sendCommand;
    m_sendCommand = _sendCommand;
    SDK_FCAL_LOG(SeverityLevel::debug) << "Platform_Service property \"sendCommand\" has changed.";
    notifyPropertyChange("sendCommand", _old_sendCommand, m_sendCommand);
}

::ecore::EString Platform_Service::getSendFile() const
{
    return m_sendFile;
}

void Platform_Service::setSendFile(::ecore::EString _sendFile)
{
    ::ecore::EString _old_sendFile = m_sendFile;
    m_sendFile = _sendFile;
    SDK_FCAL_LOG(SeverityLevel::debug) << "Platform_Service property \"sendFile\" has changed.";
    notifyPropertyChange("sendFile", _old_sendFile, m_sendFile);
}

// FCAL timestamp/valid
::ecore::ELong Platform_Service::getDownload_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean Platform_Service::isDownload_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong Platform_Service::getUploadData_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean Platform_Service::isUploadData_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong Platform_Service::getUploadFile_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean Platform_Service::isUploadFile_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong Platform_Service::getReceive_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean Platform_Service::isReceive_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong Platform_Service::getSendCommand_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean Platform_Service::isSendCommand_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

::ecore::ELong Platform_Service::getSendFile_Timestamp()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).getTimestamp();
    return 0;
}

::ecore::EBoolean Platform_Service::isSendFile_Valid()
{
    if (m_interfaceDetailMap.count(0))
        return m_interfaceDetailMap.at(0).isValid();
    return false;
}

// PropertyChange delegation (diamond inheritance requires explicit override)
void Platform_Service::addPropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::addPropertyChangeListener(_listener);
}

void Platform_Service::removePropertyChangeListener(
        ::nevonex::types::PropertyChangeListener _listener)
{
    using namespace ::nevonex::types;
    PropertyChange::removePropertyChangeListener(_listener);
}

void Platform_Service::notifyPropertyChange(::ecore::EString const &_name,
        ::ecore::EJavaObject const &_oldValue,
        ::ecore::EJavaObject const &_newValue)
{
    using namespace ::nevonex::types;
    PropertyChange::notifyPropertyChange(_name, _oldValue, _newValue);
}
