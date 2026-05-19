/*
 * nevonex/implement/ImplementFactory.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/implement/ImplementFactory.hpp>

using namespace ::nevonex::implement;

::ecore::Ptr< ::nevonex::implement::ImplementFactory > ImplementFactory::s_holder;

::nevonex::implement::ImplementFactory_ptr ImplementFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < ImplementFactory > (new ImplementFactory());

    return s_holder;
}
