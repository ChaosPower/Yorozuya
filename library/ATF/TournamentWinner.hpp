// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct TournamentWinner
    {
        unsigned int dwSerial;
        char wszCharName[17];
        char byGrade;
    public:
        TournamentWinner()
        {
            using org_ptr = void (WINAPIV*)(struct TournamentWinner*);
            (org_ptr(0x1401bf4d0L))(this);
        };
        void ctor_TournamentWinner()
        {
            using org_ptr = void (WINAPIV*)(struct TournamentWinner*);
            (org_ptr(0x1401bf4d0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE