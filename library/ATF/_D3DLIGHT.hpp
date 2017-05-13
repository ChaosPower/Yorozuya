// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_D3DCOLORVALUE.hpp"
#include "_D3DLIGHTTYPE.hpp"
#include "_D3DVECTOR.hpp"


START_ATF_NAMESPACE
    struct _D3DLIGHT
    {
        unsigned int dwSize;
        _D3DLIGHTTYPE dltType;
        _D3DCOLORVALUE dcvColor;
        _D3DVECTOR dvPosition;
        _D3DVECTOR dvDirection;
        float dvRange;
        float dvFalloff;
        float dvAttenuation0;
        float dvAttenuation1;
        float dvAttenuation2;
        float dvTheta;
        float dvPhi;
    };
END_ATF_NAMESPACE