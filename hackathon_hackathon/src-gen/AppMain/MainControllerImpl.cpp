/*
 * AppMain/MainControllerImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "MainController.hpp"
#include <stdexcept>

#include <AppMain/ApplicationInputData.hpp>
#include <AppMain/IController.hpp>
#include <nevonex/gps_tc/GPS_TCProvider.hpp>
#include <nevonex/implement/ImplementProvider.hpp>
#include <nevonex/isopgn/ISOPGNProvider.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(MainControllerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/exception/diagnostic_information.hpp>

#include <nevonex.hpp>

#include "web/WebSocketEndPoint.hpp"

/*PROTECTED REGION ID(MainControllerImpl_Headers) START*/
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

using namespace ::AppMain;
using namespace ::nevonex::log;

/*PROTECTED REGION ID(MainControllerImpl_Methods) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
void MainController::run()
{
    /*PROTECTED REGION ID(MainControllerImpl_runStart) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    try
    {
        // Write your application logic by enabling the protected regions.

        using namespace ::nevonex::gps_tc;

        GPS_TCProvider_ptr gPS_TCProvider =
                getGPS_TCProvider();
        if (gPS_TCProvider != nullptr)
        {
            /*PROTECTED REGION ID(MainControllerRun_GPS_TCProviderInnerMethod) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
        }

        using namespace ::nevonex::implement;

        ImplementProvider_ptr implementProvider =
                getImplementProvider();
        if (implementProvider != nullptr)
        {
            /*PROTECTED REGION ID(MainControllerRun_ImplementProviderInnerMethod) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
        }

        using namespace ::nevonex::isopgn;

        ISOPGNProvider_ptr iSOPGNProvider =
                getISOPGNProvider();
        if (iSOPGNProvider != nullptr)
        {
            /*PROTECTED REGION ID(MainControllerRun_ISOPGNProviderInnerMethod) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
        }

        /*PROTECTED REGION ID(MainControllerImpl_RunAdditionalSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    } catch (...)
    {
        NEVONEX_LOG(SeverityLevel::error) << "Exception in MainController::run:"
                << boost::current_exception_diagnostic_information();
    }
    /*PROTECTED REGION ID(MainControllerImpl_runEnd) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

void MainController::start(const int intervalInMilliSecond)
{
    NEVONEX_LOG(SeverityLevel::trace) << "Controller run method started";

    using namespace std::chrono;
    system_clock::time_point begin = system_clock::now();
    this->run();
    system_clock::time_point end = system_clock::now();
    int timeTaken = duration_cast < milliseconds > (end - begin).count();
    if (timeTaken > intervalInMilliSecond)
    {
        //Total time taken to execute the Run method should be less than the given interval. Else consider increasing the interval.
        NEVONEX_LOG(SeverityLevel::warning)
                << "Run method taking more time than interval. Time take is "
                << std::to_string(timeTaken) << "ms";
    }
}

void MainController::setWebSocketEndPoint(
        std::shared_ptr< web::WebSocketEndPoint > &webSocketEndPoint)
{
    this->webSocketEndPoint = webSocketEndPoint;
}

std::shared_ptr< ::AppMain::web::WebSocketEndPoint > MainController::getWebSocketEndPoint() const
{
    return this->webSocketEndPoint;
}

void MainController::_initialize()
{
    // Supertypes
    ::AppMain::ApplicationInputData::_initialize();
    ::AppMain::IController::_initialize();

    // References

    /*PROTECTED REGION ID(MainControllerImpl__initialize) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

/*PROTECTED REGION ID(MainControllerImpl_MethodsEnd) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
