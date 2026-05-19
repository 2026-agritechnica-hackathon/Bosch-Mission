/*
 * nevonex/gpsplugin/GpspluginFactory.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_GPSPLUGINFACTORY_HPP
#define _NEVONEX_GPSPLUGINFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <nevonex/gpsplugin.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace gpsplugin
    {

        class EXPORT_NEVONEX_DLL GpspluginFactory : public virtual ::ecore::EFactory
        {
        public:

            static GpspluginFactory_ptr _instance();

            virtual GPSPlugin_ptr createGPSPlugin();
            virtual GPSPluginProvider_ptr createGPSPluginProvider();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< GpspluginFactory > s_holder;

            GpspluginFactory();

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

        template< > inline GPSPlugin_ptr create< GPSPlugin >()
        {
            auto eFactory = GpspluginPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< GpspluginFactory* >(eFactory.get());
            return packageFactory->createGPSPlugin();
        }

        template< > inline GPSPluginProvider_ptr create< GPSPluginProvider >()
        {
            auto eFactory = GpspluginPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< GpspluginFactory* >(eFactory.get());
            return packageFactory->createGPSPluginProvider();
        }

    } // gpsplugin
} // nevonex

#endif // _NEVONEX_GPSPLUGINFACTORY_HPP
