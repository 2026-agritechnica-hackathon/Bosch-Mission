/*
 * nevonex/gpsplugin/GpspluginPackage.cpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#include <nevonex/gpsplugin/GpspluginPackage.hpp>

using namespace ::nevonex::gpsplugin;

::ecore::Ptr< ::nevonex::gpsplugin::GpspluginPackage > GpspluginPackage::s_instance;

::nevonex::gpsplugin::GpspluginPackage_ptr GpspluginPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< GpspluginPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < GpspluginPackage > (new GpspluginPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::nevonex::gpsplugin::GpspluginPackage_ptr GpspluginPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}
