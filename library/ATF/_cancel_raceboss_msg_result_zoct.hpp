// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  _cancel_raceboss_msg_result_zoct
    {
        char byRet;
        char byRaceCode;
        int nID;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _cancel_raceboss_msg_result_zoct*);
            return (org_ptr(0x1401c7740L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE