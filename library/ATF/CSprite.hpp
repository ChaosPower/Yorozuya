// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct CSprite
    {
    public:
        CSprite()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CSprite*);
            (org_ptr(0x140520670L))(this);
        };
        int64_t ctor_CSprite()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CSprite*);
            return (org_ptr(0x140520670L))(this);
        };
        void DrawSprite(int32_t arg_0, uint32_t arg_1, int32_t arg_2, int32_t arg_3, uint32_t arg_4)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, int32_t, uint32_t, int32_t, int32_t, uint32_t);
            (org_ptr(0x140520cd0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void DrawSprite3D(float* arg_0, int32_t arg_1, int32_t arg_2, uint32_t arg_3)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, float*, int32_t, int32_t, uint32_t);
            (org_ptr(0x140520f20L))(this, arg_0, arg_1, arg_2, arg_3);
        };
        void DrawSpriteRot(int32_t arg_0, int32_t arg_1, float arg_2, uint32_t arg_3, int32_t arg_4, uint32_t arg_5)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, int32_t, int32_t, float, uint32_t, int32_t, uint32_t);
            (org_ptr(0x140521300L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void DrawSpriteRot3D(float* arg_0, float arg_1, int32_t arg_2, int32_t arg_3, uint32_t arg_4)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, float*, float, int32_t, int32_t, uint32_t);
            (org_ptr(0x140521640L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void DrawSpriteRotUV(int32_t arg_0, int32_t arg_1, float arg_2, float** arg_3, uint32_t arg_4, int32_t arg_5, uint32_t arg_6)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, int32_t, int32_t, float, float**, uint32_t, int32_t, uint32_t);
            (org_ptr(0x140521580L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
        };
        void DrawSpriteRotUV3D(float* arg_0, float arg_1, float** arg_2, int32_t arg_3, int32_t arg_4, uint32_t arg_5)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, float*, float, float**, int32_t, int32_t, uint32_t);
            (org_ptr(0x1405218a0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void DrawSpriteUV(int32_t arg_0, int32_t arg_1, float** arg_2, uint32_t arg_3, int32_t arg_4, uint32_t arg_5)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, int32_t, int32_t, float**, uint32_t, int32_t, uint32_t);
            (org_ptr(0x140521160L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
        };
        void DrawSpriteUV3D(float* arg_0, float** arg_1, int32_t arg_2, int32_t arg_3, uint32_t arg_4)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, float*, float**, int32_t, int32_t, uint32_t);
            (org_ptr(0x140521240L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
        };
        void DrawSpriteVertex(struct _D3DR3TLVERTEX_TEX1* arg_0, int arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, struct _D3DR3TLVERTEX_TEX1*, int);
            (org_ptr(0x140521950L))(this, arg_0, arg_1);
        };
        void* GetD3D8TexPtr(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = void* (WINAPIV*)(struct CSprite*, uint32_t, uint32_t);
            return (org_ptr(0x140521bb0L))(this, arg_0, arg_1);
        };
        char* GetFileName()
        {
            using org_ptr = char* (WINAPIV*)(struct CSprite*);
            return (org_ptr(0x140520b50L))(this);
        };
        uint32_t GetMaxActions()
        {
            using org_ptr = uint32_t (WINAPIV*)(struct CSprite*);
            return (org_ptr(0x140520bc0L))(this);
        };
        uint32_t GetMaxFrames(uint32_t arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(struct CSprite*, uint32_t);
            return (org_ptr(0x140520c10L))(this, arg_0);
        };
        uint32_t GetNowActions()
        {
            using org_ptr = uint32_t (WINAPIV*)(struct CSprite*);
            return (org_ptr(0x140520bb0L))(this);
        };
        uint32_t GetNowFrames(uint32_t arg_0)
        {
            using org_ptr = uint32_t (WINAPIV*)(struct CSprite*, uint32_t);
            return (org_ptr(0x140520c00L))(this, arg_0);
        };
        uint16_t GetSpriteOrgXL(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CSprite*, uint32_t, uint32_t);
            return (org_ptr(0x140521990L))(this, arg_0, arg_1);
        };
        uint16_t GetSpriteOrgYL(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CSprite*, uint32_t, uint32_t);
            return (org_ptr(0x1405219f0L))(this, arg_0, arg_1);
        };
        uint16_t GetSpriteXL(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CSprite*, uint32_t, uint32_t);
            return (org_ptr(0x140521a50L))(this, arg_0, arg_1);
        };
        uint16_t GetSpriteYL(uint32_t arg_0, uint32_t arg_1)
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CSprite*, uint32_t, uint32_t);
            return (org_ptr(0x140521ab0L))(this, arg_0, arg_1);
        };
        void InitPageSprite(uint16_t arg_0, uint16_t arg_1)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, uint16_t, uint16_t);
            (org_ptr(0x1405206a0L))(this, arg_0, arg_1);
        };
        void LoadSprite(char* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, char*);
            (org_ptr(0x140521e50L))(this, arg_0);
        };
        void ReleaseSprite()
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*);
            (org_ptr(0x140520b60L))(this);
        };
        void ReleaseTexMemSprite()
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*);
            (org_ptr(0x140520a70L))(this);
        };
        void RestoreTexMemSprite()
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*);
            (org_ptr(0x1405206e0L))(this);
        };
        void RunAnimation()
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*);
            (org_ptr(0x140520c40L))(this);
        };
        void SetAction(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, uint32_t);
            (org_ptr(0x140520b80L))(this, arg_0);
        };
        void SetAniAnimationSpeed(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, uint32_t);
            (org_ptr(0x140520c30L))(this, arg_0);
        };
        void SetFrame(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, uint32_t);
            (org_ptr(0x140520bd0L))(this, arg_0);
        };
        void SetPage(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CSprite*, uint32_t);
            (org_ptr(0x1405206c0L))(this, arg_0);
        };
        ~CSprite()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CSprite*);
            (org_ptr(0x140520690L))(this);
        };
        int64_t dtor_CSprite()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CSprite*);
            return (org_ptr(0x140520690L))(this);
        };
    }
    ;
END_ATF_NAMESPACE