// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMergeFile.hpp"


START_ATF_NAMESPACE
    struct CMergeFileManager
    {
        char mPath[256];
        unsigned int mPathNameLeng;
        unsigned int mMergeFileNum;
        CMergeFile *mMergeFile;
    public:
        uint32_t GetFileSize(char* arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(struct CMergeFileManager*, char*);
            return (org_ptr(0x14050a920L))(this, arg_0);
        };
        void InitMergeFile(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CMergeFileManager*, char*);
            (org_ptr(0x14050a490L))(this, arg_0);
        };
        int IsExistFile(char* arg_0)
        {
            using org_ptr = int (WINAPIV*)(struct CMergeFileManager*, char*);
            return (org_ptr(0x14050a890L))(this, arg_0);
        };
        struct _iobuf* LoadFileOffset(char* arg_0, char* arg_1)
        {
            using org_ptr = struct _iobuf* (WINAPIV*)(struct CMergeFileManager*, char*, char*);
            return (org_ptr(0x14050a810L))(this, arg_0, arg_1);
        };
        void ReleaseMergeFile()
        {
            using org_ptr = void (WINAPIV*)(struct CMergeFileManager*);
            (org_ptr(0x14050a790L))(this);
        };
        ~CMergeFileManager()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CMergeFileManager*);
            (org_ptr(0x14050aab0L))(this);
        };
        int64_t dtor_CMergeFileManager()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CMergeFileManager*);
            return (org_ptr(0x14050aab0L))(this);
        };
    };
END_ATF_NAMESPACE