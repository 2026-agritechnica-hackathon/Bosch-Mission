/*
 * nevonex/fcb/SubscribeConnectionFactory.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "SubscribeConnectionFactory.hpp"
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
#include <mqtt/async_client.h>
#include <mqtt/callback.h>
#include <mqtt/connect_options.h>
#include <mqtt/ssl_options.h>
#include <mqtt/message.h>
#include <nevonex-fcal-platform/notify/NotificationManager.hpp>
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <unistd.h>

#if BOOST_VERSION >= 106501
#define BOOST_STACKTRACE_HEADERS_FOUND
#include <boost/stacktrace.hpp>
#endif

/*PROTECTED REGION ID(SubscribeConnectionFactory.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::fcb;
using namespace ::nevonex::log;

// Default constructor
SubscribeConnectionFactory::SubscribeConnectionFactory()
{

    /*PROTECTED REGION ID(SubscribeConnectionFactory__SubscribeConnectionFactory) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

SubscribeConnectionFactory::~SubscribeConnectionFactory()
{

    /*PROTECTED REGION ID(SubscribeConnectionFactory__Destructor) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

}

// Attributes

// References

// SubscribeConnectionFactory framework operations (MQTT subscribe connection lifecycle)

::ecore::Ptr< ::nevonex::fcb::SubscribeConnectionFactory > SubscribeConnectionFactory::s_instance;

::nevonex::fcb::SubscribeConnectionFactory_ptr SubscribeConnectionFactory::getInstance()
{
    if (!s_instance.get())
    {
        s_instance = ::ecore::Ptr< SubscribeConnectionFactory >(new SubscribeConnectionFactory());
    }
    return s_instance;
}

void SubscribeConnectionFactory::initConnectionFactory()
{
    if (m_initialized) return;
    auto& _cfg = ::nevonex::config::GlobalConfig::getInstance();

    // FD fd.so 0xdb2a4-0xdb360: raw getMqttSSLHost() already carries the scheme
    // prefix (e.g. "tcp://192.168.40.100"), so do NOT prepend "ssl://" again —
    // that caused paho to receive "ssl://tcp://host:port" and block in futex.
    std::string _serverURI = _cfg.getMqttSSLHost() + ":" + std::to_string(static_cast<unsigned>(_cfg.getMqttSSLPort()));
    std::string _clientId = std::string("FCAL2FIL_Subscribe_") + std::to_string(::getpid());

    m_client.reset(new ::mqtt::async_client(_serverURI, _clientId));
    m_client->set_callback(*this);

    m_sslOpts = ::mqtt::ssl_options();
    m_sslOpts.set_trust_store(_cfg.getMqttTrustStorePath());
    m_sslOpts.set_key_store(_cfg.getMqttKeyStorePath());
    m_sslOpts.set_private_key(_cfg.getMqttPrivateKeyPath());

    m_connOpts = ::mqtt::connect_options();
    m_connOpts.set_ssl(m_sslOpts);
    // FD fd.so 0xddee4-0xddf54: credentials path sets user_name + password
    m_connOpts.set_user_name(_cfg.getMqttUserName());
    m_connOpts.set_password(_cfg.getMqttPassword());

    try {
        // FD uses async connect + handler-driven wait, NOT token->wait()
        m_client->connect(m_connOpts);
        std::unique_lock<std::mutex> _lk(m_connectMutex);
        unsigned _timeoutSec = static_cast<unsigned>(_cfg.getMqttConnectionTimeout());
        if (!m_connectCv.wait_for(_lk, std::chrono::seconds(_timeoutSec > 0 ? _timeoutSec : 10),
                                  [this]{ return m_connected.load(); })) {
            // Timeout — leave uninitialized so a later retry can try again.
            return;
        }
    } catch (...) {
        // Swallow — FD wraps exceptions into CommunicationException; for now
        // just log path (log is not wired in this scaffolding), leave
        // m_initialized=false so the lifecycle can recover.
        return;
    }

    m_initialized = true;
}

void SubscribeConnectionFactory::stopSubscribeClient()
{
    if (m_client && m_client->is_connected())
    {
        m_client->disconnect()->wait();
    }
    m_connected.store(false);
    m_initialized = false;
}

void SubscribeConnectionFactory::setOnMessage(SubscribeConnectionFactory::MessageCallback _cb)
{
    m_onMessage = std::move(_cb);
}

void SubscribeConnectionFactory::connected(const std::string& /*_cause*/)
{
    try {
        // FD fd.so 0xd6bd8-0xd6e4c: subscribe issued inside connected() callback, QoS 1
        m_client->subscribe(std::string("fek/#"), 1);
    } catch (...) {
        // ignore subscribe failures; reconnect will retry
    }
    {
        std::lock_guard<std::mutex> _lk(m_connectMutex);
        m_connected.store(true);
    }
    m_connectCv.notify_all();

    // FD fd.so SubscribeConnectionFactory::connected() → pushNotification(FEATURE_CLIENT_STARTED)
    // NotificationManager requires FEATURE_CLIENT_STARTED to advance the ordered
    // notification sequence: INIT → CLIENT_STARTED → BEFORE_READY → READY.
    // Without this, FIF progress stalls at 70% waiting for the full sequence.
    ::nevonex::notify::NotificationManager::getInstance().pushNotification(
        ::nevonex::notify::NOTIFICATION_MESSAGE::FEATURE_CLIENT_STARTED);
}
void SubscribeConnectionFactory::connection_lost(const std::string& /*_cause*/) {}
void SubscribeConnectionFactory::message_arrived(::mqtt::const_message_ptr _msg)
{
    const std::string _topic = _msg->get_topic();
    const std::string _message = _msg->to_string();
    if (m_onMessage) { m_onMessage(_topic, _message); }
}
void SubscribeConnectionFactory::delivery_complete(::mqtt::delivery_token_ptr /*_tok*/) {}

