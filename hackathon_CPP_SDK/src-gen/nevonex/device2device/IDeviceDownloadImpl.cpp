/*
 * nevonex/device2device/IDeviceDownloadImpl.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#include "IDeviceDownload.hpp"
#include <stdexcept>

#include <nevonex/device2device/Device2devicePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecorecpp/mapping.hpp>

#include <nevonex-fcal-platform/log/Logger.hpp>

#include <nevonex/fcb.hpp>

using namespace ::nevonex::device2device;
using namespace ::nevonex::log;

void IDeviceDownload::start()
{
    using namespace ::nevonex::fcb;
    FcbFactory_ptr fcbFactory = FcbFactory::_instance();
    SubscribeConnectionFactory_ptr subConnectionFactory =
            fcbFactory->createSubscribeConnectionFactory();
    subConnectionFactory->initConnectionFactory();
}

void IDeviceDownload::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IDeviceDownloadImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations from Parent(s)

// Operations

// EObject
::ecore::EJavaObject IDeviceDownload::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    }
    return ::ecore::EObject::eGet(_featureID, _resolve);
}

void IDeviceDownload::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    }
    ::ecore::EObject::eSet(_featureID, _newValue);
}

::ecore::EBoolean IDeviceDownload::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    }
    return ::ecore::EObject::eIsSet(_featureID);
}

void IDeviceDownload::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    // FIXME: && e.unsettable also should be checked.
    }
    ::ecore::EObject::eUnset(_featureID);
}

::ecore::EClass_ptr IDeviceDownload::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::nevonex::device2device::Device2devicePackage* >(::nevonex::device2device::Device2devicePackage::_instance().get())->getIDeviceDownload();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IDeviceDownload::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseAdd(_featureID, _newValue);
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IDeviceDownload::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    ::ecore::EObject::_inverseRemove(_featureID, _oldValue);
}

///

