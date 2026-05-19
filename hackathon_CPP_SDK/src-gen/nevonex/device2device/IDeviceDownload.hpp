/*
 * nevonex/device2device/IDeviceDownload.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#ifndef NEVONEX_DEVICE2DEVICE_IDEVICEDOWNLOAD_HPP
#define NEVONEX_DEVICE2DEVICE_IDEVICEDOWNLOAD_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <nevonex/dllNevonex.hpp>
#include <nevonex/device2device_forward.hpp>

#include "Device2devicePackage.hpp"

#include <nevonex/feature/AbstractDeviceDownload.hpp>
#include <nevonex-fcal-platform/web/device/IDeviceDownload.hpp>

namespace nevonex
{
    namespace device2device
    {

    class EXPORT_NEVONEX_DLL IDeviceDownload : public virtual ::ecore::EObject , public virtual ::nevonex::feature::AbstractDeviceDownload, public virtual ::nevonex::web::device::IDeviceDownload
    {
        /*PROTECTED REGION ID(IDeviceDownload_commonSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    public:
        IDeviceDownload();

        virtual ~IDeviceDownload();

        virtual void _initialize() override;

        // Operations from Parent(s)

        // Operations

        // Attributes

        // References
    public:

        /*PROTECTED REGION ID(IDeviceDownload) START*/
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

    protected:
        virtual void start () override;

    protected:
        IDeviceDownload_ptr _this()
        {   return IDeviceDownload_ptr(this);}

    private:
        // Attributes

        // References

        /*PROTECTED REGION ID(IDeviceDownload_privateSection) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/
    };

}
 // device2device
}// nevonex

#endif // NEVONEX_DEVICE2DEVICE_IDEVICEDOWNLOAD_HPP

