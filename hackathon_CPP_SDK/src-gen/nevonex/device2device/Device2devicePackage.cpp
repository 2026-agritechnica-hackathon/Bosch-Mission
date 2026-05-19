/*
 * nevonex/device2device/Device2devicePackage.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#include <nevonex/device2device/Device2devicePackage.hpp>

using namespace ::nevonex::device2device;

::ecore::Ptr< ::nevonex::device2device::Device2devicePackage > Device2devicePackage::s_instance;

::nevonex::device2device::Device2devicePackage_ptr Device2devicePackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< Device2devicePackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < Device2devicePackage
                > (new Device2devicePackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::nevonex::device2device::Device2devicePackage_ptr Device2devicePackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

