// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPlayer.hpp>
#include <_skill_fld.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CRaceBuffInfoByHolyQuest
    {
        _skill_fld *m_pData;
        char m_byLv;
    public:
        bool Apply(struct CPlayer* pkDest);
        bool ApplyEffect(struct CPlayer* pkDest, bool bAdd);
        CRaceBuffInfoByHolyQuest(struct _skill_fld* pFld, char byLv);
        void ctor_CRaceBuffInfoByHolyQuest(struct _skill_fld* pFld, char byLv);
        static struct CRaceBuffInfoByHolyQuest* Create(unsigned int uiNTh, char* szItemName);
        bool CreateComplete(struct CPlayer* pkDest);
        static bool LoadINISubProcLoadCode(unsigned int uiTh, char* szItemName, struct _skill_fld** ppFld, char* byLv);
        void NotifyLogInSetBuff(uint16_t wUserInx);
        void NotifyReleaseBuff(uint16_t wUserInx);
        void NotifySetBuff(struct CPlayer* pkDest);
        bool Release(struct CPlayer* pkDest);
        ~CRaceBuffInfoByHolyQuest();
        void dtor_CRaceBuffInfoByHolyQuest();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
