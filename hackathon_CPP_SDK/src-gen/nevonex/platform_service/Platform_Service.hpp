/*
 * nevonex/platform_service/Platform_Service.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_PLATFORM_SERVICE_PLATFORM_SERVICE_HPP
#define NEVONEX_PLATFORM_SERVICE_PLATFORM_SERVICE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <nevonex/dllNevonex.hpp>
#include <nevonex/platform_service_forward.hpp>

#include <ecore_forward.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <nevonex/types/PropertyChange.hpp>
#include <nevonex/types/IMachine.hpp>

#include "Platform_servicePackage.hpp"

namespace nevonex
{
    namespace platform_service
    {

    class EXPORT_NEVONEX_DLL Platform_Service : public virtual ::nevonex::common::TopicObject,
        public virtual ::nevonex::types::PropertyChange,
        public virtual ::nevonex::types::IMachine
    {
        /*PROTECTED REGION ID(Platform_Service_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        Platform_Service();

        virtual ~Platform_Service();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations
        virtual void addPropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void removePropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void notifyPropertyChange(::ecore::EString const& _name, ::ecore::EJavaObject const& _oldValue, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::ELong getDownload_Timestamp();
        virtual ::ecore::EBoolean isDownload_Valid();
        virtual ::ecore::ELong getUploadData_Timestamp();
        virtual ::ecore::EBoolean isUploadData_Valid();
        virtual ::ecore::ELong getUploadFile_Timestamp();
        virtual ::ecore::EBoolean isUploadFile_Valid();
        virtual ::ecore::ELong getReceive_Timestamp();
        virtual ::ecore::EBoolean isReceive_Valid();
        virtual ::ecore::ELong getSendCommand_Timestamp();
        virtual ::ecore::EBoolean isSendCommand_Valid();
        virtual ::ecore::ELong getSendFile_Timestamp();
        virtual ::ecore::EBoolean isSendFile_Valid();

        // Attributes
        // References
        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getDownload () const;
        /**
         * \brief 
         */
    public:
        virtual void setDownload (::ecore::EString _download);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getUploadData () const;
        /**
         * \brief 
         */
    public:
        virtual void setUploadData (::ecore::EString _uploadData);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getUploadFile () const;
        /**
         * \brief 
         */
    public:
        virtual void setUploadFile (::ecore::EString _uploadFile);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getReceive () const;
        /**
         * \brief 
         */
    public:
        virtual void setReceive (::ecore::EString _receive);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getSendCommand () const;
        /**
         * \brief 
         */
    public:
        virtual void setSendCommand (::ecore::EString _sendCommand);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getSendFile () const;
        /**
         * \brief 
         */
    public:
        virtual void setSendFile (::ecore::EString _sendFile);


        /*PROTECTED REGION ID(Platform_Service) START*/
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

        /*PROTECTED REGION ID(Platform_ServiceImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Platform_Service_ptr _this()
        {   return Platform_Service_ptr(this);}

        friend Platform_ServiceProvider;

    private:
        // Attributes

        // References
        ::ecore::EString m_download;
        ::ecore::EString m_uploadData;
        ::ecore::EString m_uploadFile;
        ::ecore::EString m_receive;
        ::ecore::EString m_sendCommand;
        ::ecore::EString m_sendFile;

        std::map<int, ::nevonex::types::InterfaceDetails> m_interfaceDetailMap;

        /*PROTECTED REGION ID(Platform_Service_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // platform_service
}// nevonex

#endif // NEVONEX_PLATFORM_SERVICE_PLATFORM_SERVICE_HPP
