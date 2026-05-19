/*
 * nevonex/device2device/Device2deviceFactory.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 * Generator version: 8.6.0.202602121119
 */

#include <nevonex/device2device/Device2deviceFactory.hpp>

using namespace ::nevonex::device2device;

::ecore::Ptr< ::nevonex::device2device::Device2deviceFactory > Device2deviceFactory::s_holder;

::nevonex::device2device::Device2deviceFactory_ptr Device2deviceFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < Device2deviceFactory
                > (new Device2deviceFactory());

    return s_holder;
}

