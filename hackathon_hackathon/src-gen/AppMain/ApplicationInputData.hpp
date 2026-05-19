/*
 * AppMain/ApplicationInputData.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef APPMAIN_APPLICATIONINPUTDATA_HPP
#define APPMAIN_APPLICATIONINPUTDATA_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <AppMain_forward.hpp>

#include <nevonex/gpsplugin_forward.hpp>
#include <nevonex/implement_forward.hpp>
#include <nevonex/isopgn_forward.hpp>

namespace AppMain
{

    class ApplicationInputData: public virtual ::ecore::EObject
    {
        /*PROTECTED REGION ID(ApplicationInputData_commonSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    public:
        ApplicationInputData();

        virtual ~ApplicationInputData();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations

        // Attributes

        // References
        /**
         * \brief 
         */
    public:
        virtual ::nevonex::gpsplugin::GPSPluginProvider_ptr getGPSPluginProvider() const;
        /**
         * \brief 
         */
    public:
        virtual void setGPSPluginProvider(
                ::nevonex::gpsplugin::GPSPluginProvider_ptr _gPSPluginProvider);

        /**
         * \brief 
         */
    public:
        virtual ::nevonex::implement::ImplementProvider_ptr getImplementProvider() const;
        /**
         * \brief 
         */
    public:
        virtual void setImplementProvider(
                ::nevonex::implement::ImplementProvider_ptr _implementProvider);

        /**
         * \brief 
         */
    public:
        virtual ::nevonex::isopgn::ISOPGNProvider_ptr getISOPGNProvider() const;
        /**
         * \brief 
         */
    public:
        virtual void setISOPGNProvider(
                ::nevonex::isopgn::ISOPGNProvider_ptr _iSOPGNProvider);

    public:

        /*PROTECTED REGION ID(ApplicationInputData) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

        /*PROTECTED REGION ID(ApplicationInputDataImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    protected:
        ApplicationInputData_ptr _this()
        {
            return ApplicationInputData_ptr(this);
        }

    private:
        // Attributes

        // References

        ::nevonex::gpsplugin::GPSPluginProvider_ptr m_gPSPluginProvider;

        ::nevonex::implement::ImplementProvider_ptr m_implementProvider;

        ::nevonex::isopgn::ISOPGNProvider_ptr m_iSOPGNProvider;

        /*PROTECTED REGION ID(ApplicationInputData_privateSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    };

} // AppMain

#endif // APPMAIN_APPLICATIONINPUTDATA_HPP
