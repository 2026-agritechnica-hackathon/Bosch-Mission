/*
 * nevonex/device2device/Device2deviceFactory.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#ifndef _NEVONEX_DEVICE2DEVICEFACTORY_HPP
#define _NEVONEX_DEVICE2DEVICEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <nevonex/device2device.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace device2device
    {

        class EXPORT_NEVONEX_DLL Device2deviceFactory : public virtual ::ecore::EFactory
        {
        public:

            static Device2deviceFactory_ptr _instance();

            virtual Device2Device_ptr createDevice2Device();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< Device2deviceFactory > s_holder;

            Device2deviceFactory();

        };

        /** An object creation helper
         *
         * Usage (add namespaces as required):
         *   auto p = create<MyClass>();
         *
         */
        template< class T > inline ::ecore::Ptr< T > create()
        {
            return ::ecore::Ptr< T >();
        }

        template< > inline Device2Device_ptr create< Device2Device >()
        {
            auto eFactory =
                    Device2devicePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< Device2deviceFactory* >(eFactory.get());
            return packageFactory->createDevice2Device();
        }

    } // device2device
} // nevonex

#endif // _NEVONEX_DEVICE2DEVICEFACTORY_HPP

