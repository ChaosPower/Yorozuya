// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPostData.hpp"
#include "_INVENKEY.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CPostReturnStorage
    {
        CPostData m_PostData[10];
        int m_nSize;
    public:
        struct CPostData* AddReturnPost(char byErrCode, unsigned int dwPostSerial, char byState, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
        {
            using org_ptr = struct CPostData* (WINAPIV*)(struct CPostReturnStorage*, char, unsigned int, char, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t);
            return (org_ptr(0x1403238f0L))(this, byErrCode, dwPostSerial, byState, wszRecvName, wszTitle, wszContent, Key, dwDur, dwUpt, dwGold, lnUID);
        };
        CPostReturnStorage()
        {
            using org_ptr = void (WINAPIV*)(struct CPostReturnStorage*);
            (org_ptr(0x140323770L))(this);
        };
        void ctor_CPostReturnStorage()
        {
            using org_ptr = void (WINAPIV*)(struct CPostReturnStorage*);
            (org_ptr(0x140323770L))(this);
        };
        void DelPostData(unsigned int dwPostSerial)
        {
            using org_ptr = void (WINAPIV*)(struct CPostReturnStorage*, unsigned int);
            (org_ptr(0x140323be0L))(this, dwPostSerial);
        };
        struct CPostData* GetPostDataFromInx(int nIndex)
        {
            using org_ptr = struct CPostData* (WINAPIV*)(struct CPostReturnStorage*, int);
            return (org_ptr(0x140323b10L))(this, nIndex);
        };
        struct CPostData* GetPostDataFromSerial(unsigned int dwPostSerial)
        {
            using org_ptr = struct CPostData* (WINAPIV*)(struct CPostReturnStorage*, unsigned int);
            return (org_ptr(0x140323b50L))(this, dwPostSerial);
        };
        int GetReturnPostInx()
        {
            using org_ptr = int (WINAPIV*)(struct CPostReturnStorage*);
            return (org_ptr(0x140323a90L))(this);
        };
        int GetSize()
        {
            using org_ptr = int (WINAPIV*)(struct CPostReturnStorage*);
            return (org_ptr(0x140323a70L))(this);
        };
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct CPostReturnStorage*);
            (org_ptr(0x140323870L))(this);
        };
        ~CPostReturnStorage()
        {
            using org_ptr = void (WINAPIV*)(struct CPostReturnStorage*);
            (org_ptr(0x140323820L))(this);
        };
        void dtor_CPostReturnStorage()
        {
            using org_ptr = void (WINAPIV*)(struct CPostReturnStorage*);
            (org_ptr(0x140323820L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE