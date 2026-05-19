/*
 * nevonex/fcb/PublishConnectionFactory.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "PublishConnectionFactory.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nevonex/fcb/FcbPackage.hpp"
#include <ecorecpp/mapping.hpp>
#include <algorithm>
#include <nevonex/fcb/SubscriberEnum.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>
#include <nevonex-fcal-platform/config/GlobalConfig.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>
#include <functional>
#include <memory>
#include <string>
#include <vector>
#include <nevonex-fcal-platform/communicator/ICommunicator.hpp>
#include <nevonex-fcal-platform/communicator/CommunicatorProperties.hpp>
#include <rapidjson/document.h>
#include <nevonex-fcal-platform/common/CommonUtils.hpp>
#include <unordered_map>
#include <map>
#include <nevonex/fcb/SubscriberEnum.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EClassifier.hpp>
#include <ecorecpp/mapping/any.hpp>
#include <chrono>

#if BOOST_VERSION >= 106501
#define BOOST_STACKTRACE_HEADERS_FOUND
#include <boost/stacktrace.hpp>
#endif

/*PROTECTED REGION ID(PublishConnectionFactory.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::fcb;
using namespace ::nevonex::log;

// Default constructor
PublishConnectionFactory::PublishConnectionFactory()
{

    /*PROTECTED REGION ID(PublishConnectionFactory__PublishConnectionFactory) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

PublishConnectionFactory::~PublishConnectionFactory()
{

    /*PROTECTED REGION ID(PublishConnectionFactory__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

// Attributes

// References

// PublishConnectionFactory framework operations (MQTT publish connection lifecycle)

::ecore::Ptr< ::nevonex::fcb::PublishConnectionFactory > PublishConnectionFactory::s_instance;

::nevonex::fcb::PublishConnectionFactory_ptr PublishConnectionFactory::getInstance()
{
    if (!s_instance.get())
    {
        s_instance = ::ecore::Ptr< PublishConnectionFactory >(new PublishConnectionFactory());
    }
    return s_instance;
}

void PublishConnectionFactory::initConnectionFactory()
{
    if (m_initialized) return;
    auto& _cfg = ::nevonex::config::GlobalConfig::getInstance();
    const std::string& _featureId = _cfg.getFeatureId();
    const std::string& _host = _cfg.getMqttHost();
    int _port = static_cast<int>(_cfg.getMqttPort());

    m_client = ::nevonex::communicator::ICommunicator::getAsyncClient(
        _featureId, std::string("FCAL2FIL_Publish"), _host, _port);

    ::nevonex::communicator::CommunicatorProperties _props;
    _props.callerId = std::string("FCAL2FIL_Publish");
    _props.host = _host;
    _props.port = _port;
    _props.userName = _cfg.getMqttUserName();
    _props.password = _cfg.getMqttPassword();
    _props.sslHost = _cfg.getMqttSSLHost();
    _props.sslPort = static_cast<int>(_cfg.getMqttSSLPort());
    _props.trustStorePath = _cfg.getMqttTrustStorePath();
    _props.keyStorePath = _cfg.getMqttKeyStorePath();
    _props.privateKeyPath = _cfg.getMqttPrivateKeyPath();
    _props.communicationAuthType = _cfg.getCommunicatorAuthType();

    m_client->setConnectionTimeout(_cfg.getMqttConnectionTimeout());
    m_client->connect(_props);
    m_initialized = true;
}

void PublishConnectionFactory::stopPublishClient()
{
    if (m_client && m_client->isClientConnected())
    {
        m_client->disconnect();
    }
    m_initialized = false;
}

void PublishConnectionFactory::terminateConnectionFactory()
{
    stopPublishClient();
    m_topicMap.clear();
    m_payloadMap.clear();
    m_prefixMap.clear();
    m_machinePathMap.clear();
    m_enabledDisabledTopicMap.clear();
}

void PublishConnectionFactory::publish(const ::ecore::EString& _interfaceKey,
    const ::ecore::EString& _interfaceName,
    const std::vector< ::ecore::EObject_ptr >& _payload,
    ::nevonex::fcb::SubscriberEnum _subscriber)
{
    if (_interfaceKey.empty() || _payload.empty()) return;
    if (!isWriteEnabled(_interfaceKey)) return;
    auto _it = m_topicMap.find(_interfaceKey);
    if (_it == m_topicMap.end()) return;
    rapidjson::Document _doc;
    _doc.SetObject();
    auto& _alloc = _doc.GetAllocator();
    int64_t _ts = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    _doc.AddMember("TS", _ts, _alloc);
    rapidjson::Value _arr(rapidjson::kArrayType);
    for (auto& _obj : _payload)
    {
        rapidjson::Value _v(rapidjson::kObjectType);
        if (!_obj) { _arr.PushBack(_v, _alloc); continue; }
        auto _cls = _obj->eClass();
        auto& _features = _cls->getEAllStructuralFeatures();
        for (size_t _i = 0; _i < _features.size(); ++_i)
        {
            try {
            auto _feat = _features[_i];
            if (!_feat) continue;
            auto _fVal = _obj->eGet(_feat);
            auto _eType = _feat->getEType();
            if (!_eType) continue;
            const auto& _typeName = _eType->getName();
            const auto& _fName = _feat->getName();
            rapidjson::Value _key(_fName.c_str(), _alloc);
            if (_typeName == "EString")
            {
                auto& _s = ::ecorecpp::mapping::any::any_cast< ::ecore::EString >(_fVal);
                rapidjson::Value _sv(_s.c_str(), _alloc);
                _v.AddMember(_key, _sv, _alloc);
            }
            else if (_typeName == "EInt")
            {
                auto& _n = ::ecorecpp::mapping::any::any_cast< ::ecore::EInt >(_fVal);
                _v.AddMember(_key, _n, _alloc);
            }
            else if (_typeName == "EDouble")
            {
                auto& _d = ::ecorecpp::mapping::any::any_cast< ::ecore::EDouble >(_fVal);
                _v.AddMember(_key, _d, _alloc);
            }
            else if (_typeName == "EBoolean")
            {
                auto& _b = ::ecorecpp::mapping::any::any_cast< ::ecore::EBoolean >(_fVal);
                _v.AddMember(_key, _b, _alloc);
            }
            else if (_typeName == "ELong")
            {
                auto& _l = ::ecorecpp::mapping::any::any_cast< ::ecore::ELong >(_fVal);
                _v.AddMember(_key, _l, _alloc);
            }
            else if (_typeName == "EFloat")
            {
                auto& _f = ::ecorecpp::mapping::any::any_cast< ::ecore::EFloat >(_fVal);
                _v.AddMember(_key, static_cast<double>(_f), _alloc);
            }
            } catch (...) {}
        }
        _arr.PushBack(_v, _alloc);
    }
    _doc.AddMember("PL", _arr, _alloc);
    publishFinal(_subscriber, _it->second, _doc);
}

void PublishConnectionFactory::publish(const ::ecore::EString& _interfaceName,
    ::ecore::EObject_ptr /*_obj*/,
    rapidjson::Value& /*_val*/,
    rapidjson::Document& _doc,
    ::nevonex::fcb::SubscriberEnum _subscriber)
{
    auto _it = m_topicMap.find(_interfaceName);
    if (_it == m_topicMap.end()) return;
    publishFinal(_subscriber, _it->second, _doc);
}

void PublishConnectionFactory::publishFinal(::nevonex::fcb::SubscriberEnum _subscriber,
    const ::ecore::EString& _topic, rapidjson::Document& _doc)
{
    (void)_subscriber;
    std::string _payload = ::nevonex::common::utils::CommonUtils::convertJsonToString(_doc);
    if (m_client && m_client->isClientConnected())
    {
        m_client->publish(_topic, _payload);
    }
}

void PublishConnectionFactory::setTopicMap(const std::unordered_map<std::string, std::string>& _map)
{ m_topicMap = _map; }
void PublishConnectionFactory::setPayloadMap(const std::unordered_map<std::string, std::string>& _map)
{ m_payloadMap = _map; }
void PublishConnectionFactory::setPrefixMap(const std::unordered_map<std::string, std::string>& _map)
{ m_prefixMap = _map; }
void PublishConnectionFactory::setMachinePathMap(const std::unordered_map<std::string, std::string>& _map)
{ m_machinePathMap = _map; }
void PublishConnectionFactory::setEnabledDisabledTopicMap(const std::map<int, bool>& _map)
{ m_enabledDisabledTopicMap = _map; }

bool PublishConnectionFactory::isWriteEnabled(const ::ecore::EString& _interfaceKey) const
{
    auto _it = m_topicMap.find(_interfaceKey);
    if (_it == m_topicMap.end()) return false;
    for (auto& _e : m_enabledDisabledTopicMap)
    {
        if (!_e.second) return false;
    }
    return true;
}

std::vector< ::ecore::EObject_ptr > PublishConnectionFactory::getProviders() const
{ return m_providers; }

void PublishConnectionFactory::addProvider(::ecore::EObject_ptr _prov)
{ m_providers.push_back(_prov); }

void PublishConnectionFactory::connection_lost(const ::ecore::EString& /*_cause*/)
{
    m_initialized = false;
    initConnectionFactory();
}

