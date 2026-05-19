/*
 * nevonex/types/IMachineProvider.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "IMachineProvider.hpp"
#include <nevonex/fcb/FCALController.hpp>
#include <nevonex/fcb/PublishConnectionFactory.hpp>
#include <nevonex/fcb/SubscribeConnectionFactory.hpp>
#include <unordered_map>
#include <map>
#include <string>

using namespace ::nevonex::types;

// Default constructor
IMachineProvider::IMachineProvider()
 : m_controller(0)
{
}

IMachineProvider::~IMachineProvider()
{
}

// References

::nevonex::fcb::FCALController_ptr IMachineProvider::getController() const
{
    return m_controller;
}

void IMachineProvider::setController(
        ::nevonex::fcb::FCALController_ptr _controller)
{

    m_controller = _controller;

}

// IMachineProvider framework operations

void IMachineProvider::createMachines(std::istream & _stream)
{
}

void IMachineProvider::constructChildTypes(::ecore::EJavaObject _parent, ::ecore::EObject_ptr _parentObj, ::ecore::EString const& _path)
{
}

void IMachineProvider::initMachineProvider()
{
}

::nevonex::common::TopicObject_ptr IMachineProvider::getTopicElement(::ecore::EString const& _index)
{
    return nullptr;
}

void IMachineProvider::stopMachineProvider()
{
}

void IMachineProvider::start()
{
    ::nevonex::fcb::SubscribeConnectionFactory::getInstance()->initConnectionFactory();
    ::nevonex::fcb::PublishConnectionFactory::getInstance()->initConnectionFactory();
}

void IMachineProvider::stop()
{
    ::nevonex::fcb::SubscribeConnectionFactory::getInstance()->stopSubscribeClient();
    ::nevonex::fcb::PublishConnectionFactory::getInstance()->stopPublishClient();
}

void IMachineProvider::restart()
{
    stop();
    start();
}

void IMachineProvider::onConnectionStatusChange(const std::string & index, ::nevonex::machine::MachineConnectionInfo_ptr)
{
}

::nevonex::common::TopicObject_ptr IMachineProvider::getTopicObject(const ::ecore::EString & path) const
{
    auto it = m_topicObjectMap.find(path);
    if (it != m_topicObjectMap.end())
        return it->second;
    return nullptr;
}
