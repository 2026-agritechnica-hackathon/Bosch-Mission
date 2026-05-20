/*
 * nevonex/platform_service/Platform_serviceFactory.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/platform_service/Platform_serviceFactory.hpp>

using namespace ::nevonex::platform_service;

::ecore::Ptr< ::nevonex::platform_service::Platform_serviceFactory > Platform_serviceFactory::s_holder;

::nevonex::platform_service::Platform_serviceFactory_ptr Platform_serviceFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < Platform_serviceFactory > (new Platform_serviceFactory());

    return s_holder;
}
