// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace ATL
    {
        template<>
        struct CW2AEX<128>
        {
            char *m_psz;
            char m_szBuffer[128];
        public:
            CW2AEX(wchar_t* psz)
            {
                using org_ptr = void (WINAPIV*)(struct CW2AEX<128>*, wchar_t*);
                (org_ptr(0x140026ef0L))(this, psz);
            };
            void ctor_CW2AEX(wchar_t* psz)
            {
                using org_ptr = void (WINAPIV*)(struct CW2AEX<128>*, wchar_t*);
                (org_ptr(0x140026ef0L))(this, psz);
            };
            void Init(wchar_t* psz, unsigned int nConvertCodePage)
            {
                using org_ptr = void (WINAPIV*)(struct CW2AEX<128>*, wchar_t*, unsigned int);
                (org_ptr(0x140027110L))(this, psz, nConvertCodePage);
            };
            ~CW2AEX()
            {
                using org_ptr = void (WINAPIV*)(struct CW2AEX<128>*);
                (org_ptr(0x140026f70L))(this);
            };
            void dtor_CW2AEX()
            {
                using org_ptr = void (WINAPIV*)(struct CW2AEX<128>*);
                (org_ptr(0x140026f70L))(this);
            };
        };
    }; // end namespace ATL
END_ATF_NAMESPACE