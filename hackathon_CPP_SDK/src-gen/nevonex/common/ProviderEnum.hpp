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
             GPS_TCProvider = 0 /* GPS_TCProvider*/
            ,ImplementProvider = 1 /* ImplementProvider*/
            ,ISOPGNProvider = 2 /* ISOPGNProvider*/
        };
// ProviderEnum Values array.
        static const ProviderEnum ProviderEnum_Values[] =
        { ProviderEnum::GPS_TCProvider, ProviderEnum::ImplementProvider, ProviderEnum::ISOPGNProvider };
        inline const std::string getLiteral(ProviderEnum e)
        {
            switch (e)
            {
            case ProviderEnum::GPS_TCProvider:
                return "GPS_TCProvider";
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
