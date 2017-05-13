// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_D3DCOLORVALUE.hpp"
#include "_D3DLIGHTTYPE.hpp"
#include "_D3DVECTOR.hpp"


START_ATF_NAMESPACE
    struct _D3DLIGHT8
    {
        _D3DLIGHTTYPE Type;
        _D3DCOLORVALUE Diffuse;
        _D3DCOLORVALUE Specular;
        _D3DCOLORVALUE Ambient;
        _D3DVECTOR Position;
        _D3DVECTOR Direction;
        float Range;
        float Falloff;
        float Attenuation0;
        float Attenuation1;
        float Attenuation2;
        float Theta;
        float Phi;
    };
END_ATF_NAMESPACE