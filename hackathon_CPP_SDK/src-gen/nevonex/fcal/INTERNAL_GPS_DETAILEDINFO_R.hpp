/*
 * nevonex/fcal/INTERNAL_GPS_DETAILEDINFO_R.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_FCAL_INTERNAL_GPS_DETAILEDINFO_R_HPP
#define NEVONEX_FCAL_INTERNAL_GPS_DETAILEDINFO_R_HPP

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

    class EXPORT_NEVONEX_DLL INTERNAL_GPS_DETAILEDINFO_R : public virtual ::ecore::EObject
    {
        /*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_R_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        INTERNAL_GPS_DETAILEDINFO_R();

        virtual ~INTERNAL_GPS_DETAILEDINFO_R();

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
        virtual ::ecore::EString getTimeStamp () const;
        /**
         * \brief 
         */
    public:
        virtual void setTimeStamp (::ecore::EString _timeStamp);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getHorizontalAccuracy () const;
        /**
         * \brief 
         */
    public:
        virtual void setHorizontalAccuracy (::ecore::EFloat _horizontalAccuracy);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getVerticalAccuracy () const;
        /**
         * \brief 
         */
    public:
        virtual void setVerticalAccuracy (::ecore::EFloat _verticalAccuracy);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getHorizontalDil () const;
        /**
         * \brief 
         */
    public:
        virtual void setHorizontalDil (::ecore::EFloat _horizontalDil);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getPositionDil () const;
        /**
         * \brief 
         */
    public:
        virtual void setPositionDil (::ecore::EFloat _positionDil);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getVerticalDil () const;
        /**
         * \brief 
         */
    public:
        virtual void setVerticalDil (::ecore::EFloat _verticalDil);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getTimeDil () const;
        /**
         * \brief 
         */
    public:
        virtual void setTimeDil (::ecore::EFloat _timeDil);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getSpeed () const;
        /**
         * \brief 
         */
    public:
        virtual void setSpeed (::ecore::EFloat _speed);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EFloat getCourse () const;
        /**
         * \brief 
         */
    public:
        virtual void setCourse (::ecore::EFloat _course);

        /**
         * \brief 
         */
    public:
        virtual ::ecore::EInt getNumberOfSatellites () const;
        /**
         * \brief 
         */
    public:
        virtual void setNumberOfSatellites (::ecore::EInt _numberOfSatellites);

        // References
    public:

        /*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_R) START*/
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

        /*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_RImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        INTERNAL_GPS_DETAILEDINFO_R_ptr _this()
        {   return INTERNAL_GPS_DETAILEDINFO_R_ptr(this);}

    private:
        // Attributes

        ::ecore::EDouble m_latitude;

        ::ecore::EDouble m_longitude;

        ::ecore::EDouble m_altitude;

        ::ecore::EString m_timeStamp;

        ::ecore::EFloat m_horizontalAccuracy;

        ::ecore::EFloat m_verticalAccuracy;

        ::ecore::EFloat m_horizontalDil;

        ::ecore::EFloat m_positionDil;

        ::ecore::EFloat m_verticalDil;

        ::ecore::EFloat m_timeDil;

        ::ecore::EFloat m_speed;

        ::ecore::EFloat m_course;

        ::ecore::EInt m_numberOfSatellites;

        // References


        /*PROTECTED REGION ID(INTERNAL_GPS_DETAILEDINFO_R_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // fcal
}// nevonex

#endif // NEVONEX_FCAL_INTERNAL_GPS_DETAILEDINFO_R_HPP
