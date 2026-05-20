/*
 * nevonex/gps_tc/Gps_tcFactory.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gps_tc/Gps_tcFactory.hpp>

using namespace ::nevonex::gps_tc;

::ecore::Ptr< ::nevonex::gps_tc::Gps_tcFactory > Gps_tcFactory::s_holder;

::nevonex::gps_tc::Gps_tcFactory_ptr Gps_tcFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < Gps_tcFactory > (new Gps_tcFactory());

    return s_holder;
}
