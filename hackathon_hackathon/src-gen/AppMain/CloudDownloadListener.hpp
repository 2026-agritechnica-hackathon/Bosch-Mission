/*
 * AppMain/CloudDownloadListener.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef APPMAIN_CLOUDDOWNLOADLISTENER_HPP
#define APPMAIN_CLOUDDOWNLOADLISTENER_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <AppMain_forward.hpp>

#include <nevonex/application/cloud/AbstractCloudDownloadListener.hpp>

/*PROTECTED REGION ID(CloudDownloadListener_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace AppMain
{

    class CloudDownloadListener: public virtual ::ecore::EObject,
            public ::nevonex::app::cloud::AbstractCloudDownloadListener
    {
        /*PROTECTED REGION ID(CloudDownloadListener_commonSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    public:
        CloudDownloadListener();

        virtual ~CloudDownloadListener();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations

        // Attributes

        // References
        /**
         * \brief 
         */
    public:
        virtual ::AppMain::MainController_ptr getMainController() const;
        /**
         * \brief 
         */
    public:
        virtual void setMainController(
                ::AppMain::MainController_ptr _mainController);

    public:

        /*PROTECTED REGION ID(CloudDownloadListener) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    protected:
        virtual void handleMessage(const std::string &_content) override;
        virtual void handleFile(const ::nevonex::resource::FilePath &_filePath) override;
        CloudDownloadListener_ptr _this()
        {
            return CloudDownloadListener_ptr(this);
        }

    private:
        // Attributes

        // References

        ::AppMain::MainController_ptr m_mainController;

        /*PROTECTED REGION ID(CloudDownloadListener_privateSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    };

} // AppMain

#endif // APPMAIN_CLOUDDOWNLOADLISTENER_HPP
