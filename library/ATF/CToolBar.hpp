// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CControlBar.hpp"
#include "CMapStringToPtr.hpp"
#include "CSize.hpp"
#include "HBITMAP__.hpp"
#include "HINSTANCE__.hpp"
#include "HRSRC__.hpp"


START_ATF_NAMESPACE
    struct  CToolBar : CControlBar
    {
        HRSRC__ *m_hRsrcImageWell;
        HINSTANCE__ *m_hInstImageWell;
        HBITMAP__ *m_hbmImageWell;
        int m_bDelayedButtonLayout;
        CSize m_sizeImage;
        CSize m_sizeButton;
        CMapStringToPtr *m_pStringMap;
    };
END_ATF_NAMESPACE