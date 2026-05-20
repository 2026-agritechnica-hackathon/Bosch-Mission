/*
 * nevonex/fcal/GPS_INFO_R.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_FCAL_GPS_INFO_R_HPP
#define NEVONEX_FCAL_GPS_INFO_R_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <nevonex/dllNevonex.hpp>
#include <nevonex/fcal_forward.hpp>

#include <ecore/EObject.hpp>
#include <ecore_forward.hpp>

#include "FcalPackage.hpp"

namespace nevonex
{
    namespace fcal
    {

    class EXPORT_NEVONEX_DLL GPS_INFO_R : public virtual ::ecore::EObject
    {
        /*PROTECTED REGION ID(GPS_INFO_R_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        GPS_INFO_R();

        virtual ~GPS_INFO_R();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations

        // Attributes
        /**
         * \brief 
         */
    public:
        virtual ::ecore::EDouble getLatitude () const;
        /**
         * \brief 
         */
    public:
        virtual void setLatitude (::ecore::EDouble _latitude);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EDouble getLongitude () const;
        /**
         * \brief 
         */
    public:
        virtual void setLongitude (::ecore::EDouble _longitude);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EDouble getAltitude () const;
        /**
         * \brief 
         */
    public:
        virtual void setAltitude (::ecore::EDouble _altitude);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EDouble getPositionTime () const;
        /**
         * \brief 
         */
    public:
        virtual void setPositionTime (::ecore::EDouble _positionTime);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getHDOP () const;
        /**
         * \brief 
         */
    public:
        virtual void setHDOP (::ecore::EFloat _hDOP);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getPDOP () const;
        /**
         * \brief 
         */
    public:
        virtual void setPDOP (::ecore::EFloat _pDOP);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EInt getNumberOfSattelites () const;
        /**
         * \brief 
         */
    public:
        virtual void setNumberOfSattelites (::ecore::EInt _numberOfSattelites);

        // References
    public:

        /*PROTECTED REGION ID(GPS_INFO_R) START*/
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

        /*PROTECTED REGION ID(GPS_INFO_RImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        GPS_INFO_R_ptr _this()
        {   return GPS_INFO_R_ptr(this);}

    private:
        // Attributes

        ::ecore::EDouble m_latitude;

        ::ecore::EDouble m_longitude;

        ::ecore::EDouble m_altitude;

        ::ecore::EDouble m_positionTime;

        ::ecore::EFloat m_hDOP;

        ::ecore::EFloat m_pDOP;

        ::ecore::EInt m_numberOfSattelites;

        // References


        /*PROTECTED REGION ID(GPS_INFO_R_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // fcal
}// nevonex

#endif // NEVONEX_FCAL_GPS_INFO_R_HPP
