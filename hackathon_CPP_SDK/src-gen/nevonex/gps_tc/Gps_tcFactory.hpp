/*
 * nevonex/gps_tc/Gps_tcFactory.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_GPS_TCFACTORY_HPP
#define _NEVONEX_GPS_TCFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <nevonex/gps_tc.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace gps_tc
    {

        class EXPORT_NEVONEX_DLL Gps_tcFactory : public virtual ::ecore::EFactory
        {
        public:

            static Gps_tcFactory_ptr _instance();

            virtual GPS_TC_ptr createGPS_TC();
            virtual GPS_TCProvider_ptr createGPS_TCProvider();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< Gps_tcFactory > s_holder;

            Gps_tcFactory();

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

        template< > inline GPS_TC_ptr create< GPS_TC >()
        {
            auto eFactory = Gps_tcPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< Gps_tcFactory* >(eFactory.get());
            return packageFactory->createGPS_TC();
        }

        template< > inline GPS_TCProvider_ptr create< GPS_TCProvider >()
        {
            auto eFactory = Gps_tcPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< Gps_tcFactory* >(eFactory.get());
            return packageFactory->createGPS_TCProvider();
        }

    } // gps_tc
} // nevonex

#endif // _NEVONEX_GPS_TCFACTORY_HPP
