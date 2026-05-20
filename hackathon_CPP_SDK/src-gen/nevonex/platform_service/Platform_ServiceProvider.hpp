/*
 * nevonex/platform_service/Platform_ServiceProvider.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_PLATFORM_SERVICE_PLATFORM_SERVICEPROVIDER_HPP
#define NEVONEX_PLATFORM_SERVICE_PLATFORM_SERVICEPROVIDER_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <nevonex/dllNevonex.hpp>
#include <nevonex/platform_service_forward.hpp>

#include <ecore_forward.hpp>
#include <nevonex/types/PropertyChange.hpp>
#include <nevonex/types/IMachineProvider.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <nevonex/platform_service/Platform_Service.hpp>

#include "Platform_servicePackage.hpp"

namespace nevonex
{
    namespace platform_service
    {

    class EXPORT_NEVONEX_DLL Platform_ServiceProvider : public virtual ::nevonex::types::PropertyChange,
        public virtual ::nevonex::types::IMachineProvider
    {
        /*PROTECTED REGION ID(Platform_ServiceProvider_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        Platform_ServiceProvider();

        virtual ~Platform_ServiceProvider();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations
        virtual void addPropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void removePropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void notifyPropertyChange(::ecore::EString const& _name, ::ecore::EJavaObject const& _oldValue, ::ecore::EJavaObject const& _newValue);

        virtual void createMachines(std::istream & _stream) override;
        virtual void constructChildTypes(::ecore::EJavaObject _parent, ::ecore::EObject_ptr _parentObj, ::ecore::EString const& _path) override;
        virtual void initMachineProvider() override;
        virtual void stopMachineProvider() override;

        virtual void start() override;
        virtual void stop() override;
        virtual void restart() override;
        virtual void onConnectionStatusChange(const std::string & index, ::nevonex::machine::MachineConnectionInfo_ptr) override;
        virtual void processMessage(std::int32_t, const ::ecore::EJavaObject &, std::int64_t) override {}

        inline const std::string& getProviderName() override
        {
            static const std::string name("Platform_ServiceProvider");
            return name;
        }

        inline bool acceptDom(const ::ecore::EString & root) override
        {
            return boost::iequals("platform_service", root);
        }

        // Attributes
        // References
        /**
         * \brief 
         */
    public:
        virtual ::nevonex::platform_service::Platform_Service_ptr getPlatform_Service () const;
        /**
         * \brief 
         */
    public:
        virtual void setPlatform_Service (::nevonex::platform_service::Platform_Service_ptr _platform_Service);


        /*PROTECTED REGION ID(Platform_ServiceProvider) START*/
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
#endif

    protected:
        Platform_ServiceProvider_ptr _this()
        {   return Platform_ServiceProvider_ptr(this);}

    private:
        ::nevonex::platform_service::Platform_Service_ptr m_platform_Service;

        std::unordered_map< ::ecore::EString, ::ecore::EClassifier_ptr > m_classifierMap;
        std::unordered_map< ::ecore::EString, ::ecore::EStructuralFeature_ptr > m_featuresMap;

        /*PROTECTED REGION ID(Platform_ServiceProvider_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // platform_service
}// nevonex

#endif // NEVONEX_PLATFORM_SERVICE_PLATFORM_SERVICEPROVIDER_HPP
