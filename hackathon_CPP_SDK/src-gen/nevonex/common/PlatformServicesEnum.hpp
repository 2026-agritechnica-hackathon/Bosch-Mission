/*
 * nevonex/common/PlatformServicesEnum.hpp
 * Copyright (c) Robert Bosch GmbH. All rights reserved.
 */

#ifndef NEVONEX_COMMON_PLATFORMSERVICESENUM_HPP
#define NEVONEX_COMMON_PLATFORMSERVICESENUM_HPP

#include <string>

namespace nevonex
{
    namespace common
    {

        enum class PlatformServicesEnum
        {
             CLOUD_DOWNLOAD = 0 /* CLOUD_DOWNLOAD*/
            ,CLOUD_UPLOAD = 1 /* CLOUD_UPLOAD*/
        };
// PlatformServicesEnum Values array.
        static const PlatformServicesEnum PlatformServicesEnum_Values[] =
        { PlatformServicesEnum::CLOUD_DOWNLOAD, PlatformServicesEnum::CLOUD_UPLOAD };
        inline const std::string getLiteral(PlatformServicesEnum e)
        {
            switch (e)
            {
            case PlatformServicesEnum::CLOUD_DOWNLOAD:
                return "CLOUD_DOWNLOAD";
            case PlatformServicesEnum::CLOUD_UPLOAD:
                return "CLOUD_UPLOAD";
            }
            return "";
        }
        ;
    } // common
} // nevonex

#endif
