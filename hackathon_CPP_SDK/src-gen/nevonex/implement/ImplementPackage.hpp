/*
 * nevonex/implement/ImplementPackage.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef _NEVONEX_IMPLEMENTPACKAGE_HPP
#define _NEVONEX_IMPLEMENTPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nevonex/implement_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <nevonex/common/CommonPackage.hpp>

#include <nevonex/dllNevonex.hpp>

namespace nevonex
{
    namespace implement
    {

    class EXPORT_NEVONEX_DLL ImplementPackage : public virtual ::ecore::EPackage
    {
    public:

        static ImplementPackage_ptr _instance();
        static ImplementPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifiers

        static const int IIMPLEMENT = 0;

        static const int IIMPLEMENTFACTORY = 1;

        static const int IIMPLEMENTPROVIDER = 2;

        static const int IMPLEMENT = 3;

        static const int IMPLEMENTPROVIDER = 4;

        static const int IMPLEMENT__LIFETIMEWORKINGHOURS = 0;

        static const int IMPLEMENTPROVIDER__IMPLEMENT = 1;

        // IDs for classifiers for inherited features

        static const int IMPLEMENT__INDEX = ::nevonex::common::CommonPackage::TOPICOBJECT__INDEX;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getImplement();
        virtual ::ecore::EClass_ptr getImplementProvider();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getImplement__lifetimeWorkingHours();
        virtual ::ecore::EReference_ptr getImplementProvider__implement();

    protected:

        static ::ecore::Ptr< ImplementPackage > s_instance;

        ImplementPackage();
        void _initPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ImplementEClass;

        ::ecore::EClass_ptr m_ImplementProviderEClass;

        // EEnuminstances 



        // EDataType instances 



        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Implement__lifetimeWorkingHours;

        ::ecore::EReference_ptr m_ImplementProvider__implement;

    };

}
 // implement
}// nevonex

#endif // _NEVONEX_IMPLEMENTPACKAGE_HPP
