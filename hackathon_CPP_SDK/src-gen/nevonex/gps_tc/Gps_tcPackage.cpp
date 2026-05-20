/*
 * nevonex/gps_tc/Gps_tcPackage.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gps_tc/Gps_tcPackage.hpp>

using namespace ::nevonex::gps_tc;

::ecore::Ptr< ::nevonex::gps_tc::Gps_tcPackage > Gps_tcPackage::s_instance;

::nevonex::gps_tc::Gps_tcPackage_ptr Gps_tcPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< Gps_tcPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < Gps_tcPackage > (new Gps_tcPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::nevonex::gps_tc::Gps_tcPackage_ptr Gps_tcPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}
