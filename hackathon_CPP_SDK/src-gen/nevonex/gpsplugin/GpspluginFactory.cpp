/*
 * nevonex/gpsplugin/GpspluginFactory.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gpsplugin/GpspluginFactory.hpp>

using namespace ::nevonex::gpsplugin;

::ecore::Ptr< ::nevonex::gpsplugin::GpspluginFactory > GpspluginFactory::s_holder;

::nevonex::gpsplugin::GpspluginFactory_ptr GpspluginFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < GpspluginFactory > (new GpspluginFactory());

    return s_holder;
}
