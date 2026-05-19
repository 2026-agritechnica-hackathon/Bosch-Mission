/*
 * nevonex/isopgn/ISOPGNImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include "ISOPGN.hpp"
#include <stdexcept>

#include <nevonex/isopgn/IsopgnPackage.hpp>
#include <nevonex/common/TopicObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

/*PROTECTED REGION ID(ISOPGNImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nevonex::isopgn;
using namespace ::nevonex::log;

void ISOPGN::_initialize()
{
    // Supertypes
    ::nevonex::common::TopicObject::_initialize();

    // References

    /*PROTECTED REGION ID(ISOPGNImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject ISOPGN::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ACCPEDPOS1:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_accpedPos1);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__AMBAIRT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_ambAirt);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__BRKPEDPOS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_brkPedPos);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGFURATEPERTIME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_engFuRatePerTime);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGSPD:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_engSpd);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGTOTOPERHRS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_engTotOperHrs);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_fuLvlPer);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER2:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_fuLvlPer2);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__GNDBASDMACSPD:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_gndBasdMacSpd);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TACHOVEHSPD:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_tachoVehSpd);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTALVEHDIST:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_totalVehDist);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTVEHHRS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_totVehHrs);
        return _any;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__WHLBASDMACSPD:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::toAny(_any, m_whlBasdMacSpd);
        return _any;
    }
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void ISOPGN::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ACCPEDPOS1:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setAccpedPos1(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__AMBAIRT:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setAmbAirt(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__BRKPEDPOS:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setBrkPedPos(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGFURATEPERTIME:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setEngFuRatePerTime(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGSPD:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setEngSpd(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGTOTOPERHRS:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setEngTotOperHrs(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setFuLvlPer(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER2:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setFuLvlPer2(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__GNDBASDMACSPD:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setGndBasdMacSpd(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TACHOVEHSPD:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setTachoVehSpd(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTALVEHDIST:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setTotalVehDist(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTVEHHRS:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setTotVehHrs(_t0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__WHLBASDMACSPD:
    {
        ::ecore::EFloat _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFloat
                > ::fromAny(_newValue, _t0);
        ::nevonex::isopgn::ISOPGN::setWhlBasdMacSpd(_t0);
        return;
    }
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean ISOPGN::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ACCPEDPOS1:
    {
        return m_accpedPos1 != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__AMBAIRT:
    {
        return m_ambAirt != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__BRKPEDPOS:
    {
        return m_brkPedPos != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGFURATEPERTIME:
    {
        return m_engFuRatePerTime != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGSPD:
    {
        return m_engSpd != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGTOTOPERHRS:
    {
        return m_engTotOperHrs != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER:
    {
        return m_fuLvlPer != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER2:
    {
        return m_fuLvlPer2 != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__GNDBASDMACSPD:
    {
        return m_gndBasdMacSpd != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TACHOVEHSPD:
    {
        return m_tachoVehSpd != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTALVEHDIST:
    {
        return m_totalVehDist != "";
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTVEHHRS:
    {
        return m_totVehHrs != 0.0;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__WHLBASDMACSPD:
    {
        return m_whlBasdMacSpd != 0.0;
    }
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void ISOPGN::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ACCPEDPOS1:
    {
        // 0.0
        setAccpedPos1(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__AMBAIRT:
    {
        // 0.0
        setAmbAirt(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__BRKPEDPOS:
    {
        // 0.0
        setBrkPedPos(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGFURATEPERTIME:
    {
        // 0.0
        setEngFuRatePerTime(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGSPD:
    {
        // 0.0
        setEngSpd(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__ENGTOTOPERHRS:
    {
        // 0.0
        setEngTotOperHrs(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER:
    {
        // 0.0
        setFuLvlPer(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__FULVLPER2:
    {
        // 0.0
        setFuLvlPer2(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__GNDBASDMACSPD:
    {
        // 0.0
        setGndBasdMacSpd(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TACHOVEHSPD:
    {
        // 0.0
        setTachoVehSpd(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTALVEHDIST:
    {
        // ""
        setTotalVehDist("");
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__TOTVEHHRS:
    {
        // 0.0
        setTotVehHrs(0.0);
        return;
    }
    case ::nevonex::isopgn::IsopgnPackage::ISOPGN__WHLBASDMACSPD:
    {
        // 0.0
        setWhlBasdMacSpd(0.0);
        return;
    }
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr ISOPGN::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::isopgn::IsopgnPackage* >(::nevonex::isopgn::IsopgnPackage::_instance().get())->getISOPGN();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ISOPGN::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ISOPGN::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///
