// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HBITMAP__.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagLVBKIMAGEW
    {
        unsigned int ulFlags;
        HBITMAP__ *hbm;
        wchar_t *pszImage;
        unsigned int cchImageMax;
        int xOffsetPercent;
        int yOffsetPercent;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE