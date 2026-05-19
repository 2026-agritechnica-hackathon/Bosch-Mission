/*
 * AppMain/Device2DeviceDownloadListener.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef APPMAIN_DEVICE2DEVICEDOWNLOADLISTENER_HPP
#define APPMAIN_DEVICE2DEVICEDOWNLOADLISTENER_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <AppMain_forward.hpp>

#include <nevonex/application/device/AbstractDeviceDownloadListener.hpp>

/*PROTECTED REGION ID(Device2DeviceDownloadListener_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace AppMain
{

    class Device2DeviceDownloadListener: public virtual ::ecore::EObject,
            public ::nevonex::app::device::AbstractDeviceDownloadListener
    {
        /*PROTECTED REGION ID(Device2DeviceDownloadListener_commonSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    public:
        Device2DeviceDownloadListener();

        virtual ~Device2DeviceDownloadListener();

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

        /*PROTECTED REGION ID(Device2DeviceDownloadListener) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

    protected:
        virtual void handleMessage(const std::string &_content) override;
        virtual void handleFile(const ::nevonex::resource::FilePath &_filePath) override;
        Device2DeviceDownloadListener_ptr _this()
        {
            return Device2DeviceDownloadListener_ptr(this);
        }

    private:
        // Attributes

        // References

        ::AppMain::MainController_ptr m_mainController;

        /*PROTECTED REGION ID(Device2DeviceDownloadListener_privateSection) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/
    };

} // AppMain

#endif // APPMAIN_DEVICE2DEVICEDOWNLOADLISTENER_HPP
