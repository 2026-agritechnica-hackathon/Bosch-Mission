/*
 * AppMain/MainController.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef APPMAIN_MAINCONTROLLER_HPP
#define APPMAIN_MAINCONTROLLER_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <AppMain_forward.hpp>

#include <nevonex/gpsplugin_forward.hpp>
#include <nevonex/implement_forward.hpp>
#include <nevonex/isopgn_forward.hpp>
#include <AppMain/ApplicationInputData.hpp>
#include <AppMain/IController.hpp>

#include <nevonex.hpp>

using namespace ::ecore;
using namespace ::ecorecpp::mapping;

using namespace ::nevonex;
using namespace ::nevonex::fcal;
using namespace ::nevonex::common;
using namespace ::nevonex::types;

using namespace ::nevonex::gpsplugin;

using namespace ::nevonex::implement;

using namespace ::nevonex::isopgn;

/*PROTECTED REGION ID(MainController_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace AppMain
{

    class MainController: public virtual ::AppMain::ApplicationInputData,
            public virtual ::AppMain::IController
    {
        /*PROTECTED REGION ID(MainController_commonSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    public:
        MainController();

        virtual ~MainController();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations

        // Attributes

        // References
    public:

        /*PROTECTED REGION ID(MainController) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    protected:
        virtual void start(const int intervalInMilliSecond) override;
        void run();
    public:
        void setWebSocketEndPoint(
                std::shared_ptr< web::WebSocketEndPoint > &webSocketEndPoint);
        std::shared_ptr< web::WebSocketEndPoint > getWebSocketEndPoint() const;
    private:
        std::shared_ptr< web::WebSocketEndPoint > webSocketEndPoint;

    protected:
        MainController_ptr _this()
        {
            return MainController_ptr(this);
        }

    private:
        // Attributes

        // References

        /*PROTECTED REGION ID(MainController_privateSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    };

} // AppMain

#endif // APPMAIN_MAINCONTROLLER_HPP
