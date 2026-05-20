/*
 * nevonex/fcal/FcalFactory.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_FCALFACTORY_HPP
#define _NEVONEX_FCALFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <nevonex/fcal.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace fcal
    {

        class EXPORT_NEVONEX_DLL FcalFactory : public virtual ::ecore::EFactory
        {
        public:

            static FcalFactory_ptr _instance();

            virtual BulkProcessor_ptr createBulkProcessor();
            virtual GPS_INFO_R_ptr createGPS_INFO_R();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< FcalFactory > s_holder;

            FcalFactory();

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

        template< > inline BulkProcessor_ptr create< BulkProcessor >()
        {
            auto eFactory = FcalPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< FcalFactory* >(eFactory.get());
            return packageFactory->createBulkProcessor();
        }

        template< > inline GPS_INFO_R_ptr create< GPS_INFO_R >()
        {
            auto eFactory = FcalPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< FcalFactory* >(eFactory.get());
            return packageFactory->createGPS_INFO_R();
        }

    } // fcal
} // nevonex

#endif // _NEVONEX_FCALFACTORY_HPP
