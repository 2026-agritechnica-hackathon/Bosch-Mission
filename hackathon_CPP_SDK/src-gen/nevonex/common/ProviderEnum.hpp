/*
 * nevonex/common/ProviderEnum.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_COMMON_PROVIDERENUM_HPP
#define NEVONEX_COMMON_PROVIDERENUM_HPP

#include <string>

namespace nevonex
{
    namespace common
    {

        enum class ProviderEnum
        {
             GPSPluginProvider = 0 /* GPSPluginProvider*/
            ,ImplementProvider = 1 /* ImplementProvider*/
            ,ISOPGNProvider = 2 /* ISOPGNProvider*/
        };
// ProviderEnum Values array.
        static const ProviderEnum ProviderEnum_Values[] =
        { ProviderEnum::GPSPluginProvider, ProviderEnum::ImplementProvider, ProviderEnum::ISOPGNProvider };
        inline const std::string getLiteral(ProviderEnum e)
        {
            switch (e)
            {
            case ProviderEnum::GPSPluginProvider:
                return "GPSPluginProvider";
            case ProviderEnum::ImplementProvider:
                return "ImplementProvider";
            case ProviderEnum::ISOPGNProvider:
                return "ISOPGNProvider";
            }
            return "";
        }
        ;
    } // common
} // nevonex

#endif
