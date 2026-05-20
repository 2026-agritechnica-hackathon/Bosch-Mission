/*
 * nevonex/platform_service/Platform_serviceFactory.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_PLATFORM_SERVICEFACTORY_HPP
#define _NEVONEX_PLATFORM_SERVICEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <nevonex/platform_service.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace platform_service
    {

        class EXPORT_NEVONEX_DLL Platform_serviceFactory : public virtual ::ecore::EFactory
        {
        public:

            static Platform_serviceFactory_ptr _instance();

            virtual Platform_Service_ptr createPlatform_Service();
            virtual Platform_ServiceProvider_ptr createPlatform_ServiceProvider();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< Platform_serviceFactory > s_holder;

            Platform_serviceFactory();

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

        template< > inline Platform_Service_ptr create< Platform_Service >()
        {
            auto eFactory = Platform_servicePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< Platform_serviceFactory* >(eFactory.get());
            return packageFactory->createPlatform_Service();
        }

        template< > inline Platform_ServiceProvider_ptr create< Platform_ServiceProvider >()
        {
            auto eFactory = Platform_servicePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< Platform_serviceFactory* >(eFactory.get());
            return packageFactory->createPlatform_ServiceProvider();
        }

    } // platform_service
} // nevonex

#endif // _NEVONEX_PLATFORM_SERVICEFACTORY_HPP
