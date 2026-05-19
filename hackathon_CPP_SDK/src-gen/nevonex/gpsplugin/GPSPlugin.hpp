/*
 * nevonex/gpsplugin/GPSPlugin.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_GPSPLUGIN_GPSPLUGIN_HPP
#define NEVONEX_GPSPLUGIN_GPSPLUGIN_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <nevonex/dllNevonex.hpp>
#include <nevonex/gpsplugin_forward.hpp>

#include <ecore_forward.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <nevonex/types/PropertyChange.hpp>
#include <nevonex/types/IMachine.hpp>
#include <nevonex/fcal/INTERNAL_GPS_DETAILEDINFO_R.hpp>

#include "GpspluginPackage.hpp"

namespace nevonex
{
    namespace gpsplugin
    {

    class EXPORT_NEVONEX_DLL GPSPlugin : public virtual ::nevonex::common::TopicObject,
        public virtual ::nevonex::types::PropertyChange,
        public virtual ::nevonex::types::IMachine
    {
        /*PROTECTED REGION ID(GPSPlugin_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        GPSPlugin();

        virtual ~GPSPlugin();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations
        virtual void addPropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void removePropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void notifyPropertyChange(::ecore::EString const& _name, ::ecore::EJavaObject const& _oldValue, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::ELong getGPSSensorPosition_Timestamp();
        virtual ::ecore::EBoolean isGPSSensorPosition_Valid();
        virtual ::ecore::ELong getInternalGpsDetailedInfo_Timestamp();
        virtual ::ecore::EBoolean isInternalGpsDetailedInfo_Valid();

        // Attributes
        // References
        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getGPSSensorPosition () const;
        /**
         * \brief 
         */
    public:
        virtual void setGPSSensorPosition (::ecore::EString _gPSSensorPosition);

        /**
         * \brief 
         */
    public:
        virtual ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R_ptr getInternalGpsDetailedInfo () const;
        /**
         * \brief 
         */
    public:
        virtual void setInternalGpsDetailedInfo (::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R_ptr _internalGpsDetailedInfo);


        /*PROTECTED REGION ID(GPSPlugin) START*/
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

        /*PROTECTED REGION ID(GPSPluginImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        GPSPlugin_ptr _this()
        {   return GPSPlugin_ptr(this);}

        friend GPSPluginProvider;

    private:
        // Attributes

        // References
        ::ecore::EString m_gPSSensorPosition;
        ::nevonex::fcal::INTERNAL_GPS_DETAILEDINFO_R_ptr m_internalGpsDetailedInfo;

        std::map<int, ::nevonex::types::InterfaceDetails> m_interfaceDetailMap;

        /*PROTECTED REGION ID(GPSPlugin_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // gpsplugin
}// nevonex

#endif // NEVONEX_GPSPLUGIN_GPSPLUGIN_HPP
