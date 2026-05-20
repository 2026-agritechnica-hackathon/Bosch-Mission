/*
 * nevonex/gps_tc/GPS_TC.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_GPS_TC_GPS_TC_HPP
#define NEVONEX_GPS_TC_GPS_TC_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <nevonex/dllNevonex.hpp>
#include <nevonex/gps_tc_forward.hpp>

#include <ecore_forward.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <nevonex/types/PropertyChange.hpp>
#include <nevonex/types/IMachine.hpp>
#include <nevonex/fcal/GPS_INFO_R.hpp>

#include "Gps_tcPackage.hpp"

namespace nevonex
{
    namespace gps_tc
    {

    class EXPORT_NEVONEX_DLL GPS_TC : public virtual ::nevonex::common::TopicObject,
        public virtual ::nevonex::types::PropertyChange,
        public virtual ::nevonex::types::IMachine
    {
        /*PROTECTED REGION ID(GPS_TC_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        GPS_TC();

        virtual ~GPS_TC();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations
        virtual void addPropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void removePropertyChangeListener(::nevonex::types::PropertyChangeListener _listener);
        virtual void notifyPropertyChange(::ecore::EString const& _name, ::ecore::EJavaObject const& _oldValue, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::ELong getActive_TC_GPS_source_Timestamp();
        virtual ::ecore::EBoolean isActive_TC_GPS_source_Valid();
        virtual ::ecore::ELong getPositionofGpsSensor_Timestamp();
        virtual ::ecore::EBoolean isPositionofGpsSensor_Valid();
        virtual ::ecore::ELong getTcGpsInfo_Timestamp();
        virtual ::ecore::EBoolean isTcGpsInfo_Valid();

        // Attributes
        // References
        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getActive_TC_GPS_source () const;
        /**
         * \brief 
         */
    public:
        virtual void setActive_TC_GPS_source (::ecore::EString _active_TC_GPS_source);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EString getPositionofGpsSensor () const;
        /**
         * \brief 
         */
    public:
        virtual void setPositionofGpsSensor (::ecore::EString _positionofGpsSensor);

        /**
         * \brief 
         */
    public:
        virtual ::nevonex::fcal::GPS_INFO_R_ptr getTcGpsInfo () const;
        /**
         * \brief 
         */
    public:
        virtual void setTcGpsInfo (::nevonex::fcal::GPS_INFO_R_ptr _tcGpsInfo);


        /*PROTECTED REGION ID(GPS_TC) START*/
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

        /*PROTECTED REGION ID(GPS_TCImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        GPS_TC_ptr _this()
        {   return GPS_TC_ptr(this);}

        friend GPS_TCProvider;

    private:
        // Attributes

        // References
        ::ecore::EString m_active_TC_GPS_source;
        ::ecore::EString m_positionofGpsSensor;
        ::nevonex::fcal::GPS_INFO_R_ptr m_tcGpsInfo;

        std::map<int, ::nevonex::types::InterfaceDetails> m_interfaceDetailMap;

        /*PROTECTED REGION ID(GPS_TC_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // gps_tc
}// nevonex

#endif // NEVONEX_GPS_TC_GPS_TC_HPP
