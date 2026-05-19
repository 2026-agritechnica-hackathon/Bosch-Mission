/*
 * nevonex/implement/ImplementFactory.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_IMPLEMENTFACTORY_HPP
#define _NEVONEX_IMPLEMENTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <nevonex/implement.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace implement
    {

        class EXPORT_NEVONEX_DLL ImplementFactory : public virtual ::ecore::EFactory
        {
        public:

            static ImplementFactory_ptr _instance();

            virtual Implement_ptr createImplement();
            virtual ImplementProvider_ptr createImplementProvider();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< ImplementFactory > s_holder;

            ImplementFactory();

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

        template< > inline Implement_ptr create< Implement >()
        {
            auto eFactory = ImplementPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ImplementFactory* >(eFactory.get());
            return packageFactory->createImplement();
        }

        template< > inline ImplementProvider_ptr create< ImplementProvider >()
        {
            auto eFactory = ImplementPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< ImplementFactory* >(eFactory.get());
            return packageFactory->createImplementProvider();
        }

    } // implement
} // nevonex

#endif // _NEVONEX_IMPLEMENTFACTORY_HPP
