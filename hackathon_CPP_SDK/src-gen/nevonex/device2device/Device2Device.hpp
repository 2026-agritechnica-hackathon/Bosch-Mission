/*
 * nevonex/device2device/Device2Device.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#ifndef NEVONEX_DEVICE2DEVICE_DEVICE2DEVICE_HPP
#define NEVONEX_DEVICE2DEVICE_DEVICE2DEVICE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <nevonex/dllNevonex.hpp>
#include <nevonex/device2device_forward.hpp>

#include <nevonex/types_forward.hpp>
#include <ecore_forward.hpp>
#include <nevonex/device2device/IDeviceDownload.hpp>
#include <nevonex/types/PropertyChange.hpp>

#include "Device2devicePackage.hpp"

#include <nevonex-fcal-platform/web/device/IDevice.hpp>

namespace nevonex
{
    namespace device2device
    {

    class EXPORT_NEVONEX_DLL Device2Device : public virtual ::nevonex::device2device::IDeviceDownload, public virtual ::nevonex::types::PropertyChange , public ::nevonex::device::IDevice
    {
        /*PROTECTED REGION ID(Device2Device_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        Device2Device();

        virtual ~Device2Device();

        virtual void _initialize() override;

        // Operations from Parent(s)

        virtual void addPropertyChangeListener ( ::nevonex::types::PropertyChangeListener _listener) override;

        virtual void removePropertyChangeListener ( ::nevonex::types::PropertyChangeListener _listener) override;

        virtual void notifyPropertyChange ( ::ecore::EString const& _name, ::ecore::EJavaObject const& _oldValue, ::ecore::EJavaObject const& _newValue) override;

        // Operations

        /**
         * \brief It processes the message/file received from Connected Device.
         *
         * \param _message 
         * \return void 
         */
        virtual void processDownloadMessage ( ::ecore::EString const& _message);

        /**
         * \brief 
         *
         * \return void 
         */
        virtual void stopPlatformService ();

        /**
         * \brief Sends given command to the connected device
         *
         * \param _command Command which has to be sent to the connected device
         * \return ::ecore::EString 
         */
        virtual ::ecore::EString sendCommand ( ::ecore::EString const& _command);

        /**
         * \brief Checks whether device is connected to the Nevonex CCU. 
         Returns true if connected, false otherwise.
         *
         * \return ::ecore::EBoolean 
         */
        virtual ::ecore::EBoolean isDeviceConnected ();

        /**
         * \brief Sends file present at the given path to the connected device.
         *
         * \param _file File which has to be sent
         * \return ::ecore::EString 
         */
        virtual ::ecore::EString sendFile ( ::nevonex::types::File const& _file);

        /**
         * \brief Sends the give file to connected device.
         *
         * \param _filePath Absolute path of the file.
         * \return ::ecore::EString 
         */
        virtual ::ecore::EString sendFile ( ::ecore::EString const& _filePath);

        // Attributes

        // References
    public:

        /*PROTECTED REGION ID(Device2Device) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

#ifndef DOXYGEN_SHOULD_SKIP_THIS
    protected:
        virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
        virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
        virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
        virtual void eUnset ( ::ecore::EInt _featureID) override;
        virtual ::ecore::EClass_ptr _eClass () override;
        virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
        virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;
        // _setEContainer();
        using ::ecore::EObject::eIsProxy;
        using ::ecore::EObject::eResource;
        using ::ecore::EObject::eContainer;
        using ::ecore::EObject::eContainingFeature;
        using ::ecore::EObject::eContainmentFeature;
        using ::ecore::EObject::eContents;
        using ::ecore::EObject::eAllContents;
        using ::ecore::EObject::eCrossReferences;
        using ::ecore::EObject::eInvoke;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

    public:
        static Device2Device_ptr getInstance();
    protected:
        static Device2Device_ptr s_holder;

    public:
        /**
         *
         * \deprecated since 6.0 and has no effect and FIF will handle internally removal of downloaded files.
         */
        void clearDownloadFiles() __attribute__((__deprecated__));
        /**
         * Use ::nevonex::resource::FileProvider::getInstance().retrieveAllDonwloadedFiles(::nevonex::resource::ResourceType::D2D);
         * \deprecated since 6.0 and has no effect.
         */
        std::vector<::ecore::StringPair> const & getAvailableFiles() const __attribute__((__deprecated__));
    private:
        std::vector< ::ecore::StringPair > m_availableFilesPair;

    protected:
        Device2Device_ptr _this()
        {   return Device2Device_ptr(this);}

    private:
        // Attributes

        // References

        /*PROTECTED REGION ID(Device2Device_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // device2device
}// nevonex

#endif // NEVONEX_DEVICE2DEVICE_DEVICE2DEVICE_HPP

