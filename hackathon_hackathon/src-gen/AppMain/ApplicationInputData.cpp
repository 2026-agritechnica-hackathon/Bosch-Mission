/*
 * AppMain/ApplicationInputData.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "ApplicationInputData.hpp"
#include <nevonex/gpsplugin/GPSPluginProvider.hpp>
#include <nevonex/implement/ImplementProvider.hpp>
#include <nevonex/isopgn/ISOPGNProvider.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecorecpp/mapping.hpp>
#include <algorithm>
#include <nevonex/fcb/SubscriberEnum.hpp>
#include <nevonex-fcal-platform/log/Logger.hpp>

#if BOOST_VERSION >= 106501
#define BOOST_STACKTRACE_HEADERS_FOUND
#include <boost/stacktrace.hpp>
#endif

/*PROTECTED REGION ID(ApplicationInputData.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::AppMain;
using namespace ::nevonex::log;

// Default constructor
ApplicationInputData::ApplicationInputData()
    : m_gPSPluginProvider(0), m_implementProvider(0), m_iSOPGNProvider(0)
{

    /*PROTECTED REGION ID(ApplicationInputData__ApplicationInputData) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

}

ApplicationInputData::~ApplicationInputData()
{

    /*PROTECTED REGION ID(ApplicationInputData__Destructor) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

}

// Attributes

// References

::nevonex::gpsplugin::GPSPluginProvider_ptr ApplicationInputData::getGPSPluginProvider() const
{
    return m_gPSPluginProvider;
}

void ApplicationInputData::setGPSPluginProvider(
        ::nevonex::gpsplugin::GPSPluginProvider_ptr _gPSPluginProvider)
{

    m_gPSPluginProvider = _gPSPluginProvider;

}

::nevonex::implement::ImplementProvider_ptr ApplicationInputData::getImplementProvider() const
{
    return m_implementProvider;
}

void ApplicationInputData::setImplementProvider(
        ::nevonex::implement::ImplementProvider_ptr _implementProvider)
{

    m_implementProvider = _implementProvider;

}

::nevonex::isopgn::ISOPGNProvider_ptr ApplicationInputData::getISOPGNProvider() const
{
    return m_iSOPGNProvider;
}

void ApplicationInputData::setISOPGNProvider(
        ::nevonex::isopgn::ISOPGNProvider_ptr _iSOPGNProvider)
{

    m_iSOPGNProvider = _iSOPGNProvider;

}

