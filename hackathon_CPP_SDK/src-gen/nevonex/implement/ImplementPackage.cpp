/*
 * nevonex/implement/ImplementPackage.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/implement/ImplementPackage.hpp>

using namespace ::nevonex::implement;

::ecore::Ptr< ::nevonex::implement::ImplementPackage > ImplementPackage::s_instance;

::nevonex::implement::ImplementPackage_ptr ImplementPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< ImplementPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < ImplementPackage > (new ImplementPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::nevonex::implement::ImplementPackage_ptr ImplementPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}
