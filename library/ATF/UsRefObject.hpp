// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "UsRefObjectVtbl.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct UsRefObject
    {
        UsRefObjectVtbl *vfptr;
        unsigned int m_uiRefCount;
    public:
        void DecRefCount()
        {
            using org_ptr = void (WINAPIV*)(struct UsRefObject*);
            (org_ptr(0x14014cd40L))(this);
        };
        void IncRefCount()
        {
            using org_ptr = void (WINAPIV*)(struct UsRefObject*);
            (org_ptr(0x14014cc40L))(this);
        };
        UsRefObject()
        {
            using org_ptr = void (WINAPIV*)(struct UsRefObject*);
            (org_ptr(0x1401633f0L))(this);
        };
        void ctor_UsRefObject()
        {
            using org_ptr = void (WINAPIV*)(struct UsRefObject*);
            (org_ptr(0x1401633f0L))(this);
        };
        ~UsRefObject()
        {
            using org_ptr = void (WINAPIV*)(struct UsRefObject*);
            (org_ptr(0x1401634b0L))(this);
        };
        void dtor_UsRefObject()
        {
            using org_ptr = void (WINAPIV*)(struct UsRefObject*);
            (org_ptr(0x1401634b0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE