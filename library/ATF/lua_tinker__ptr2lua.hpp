// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMonster.hpp"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        template<>
        struct  ptr2lua<CMonster>
        {
        public:
            static void invoke(lua_State* L, struct CMonster* input)
            {
                using org_ptr = void (WINAPIV*)(lua_State*, struct CMonster*);
                (org_ptr(0x14040b670L))(L, input);
            };
        };
    }; // end namespace lua_tinker
END_ATF_NAMESPACE
#include "CLuaSignalReActor.hpp"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        template<>
        struct  ptr2lua<CLuaSignalReActor>
        {
        public:
            static void invoke(lua_State* L, struct CLuaSignalReActor* input)
            {
                using org_ptr = void (WINAPIV*)(lua_State*, struct CLuaSignalReActor*);
                (org_ptr(0x14040b450L))(L, input);
            };
        };
    }; // end namespace lua_tinker
END_ATF_NAMESPACE
#include "CLuaEventMgr.hpp"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        template<>
        struct  ptr2lua<CLuaEventMgr>
        {
        public:
            static void invoke(lua_State* L, struct CLuaEventMgr* input)
            {
                using org_ptr = void (WINAPIV*)(lua_State*, struct CLuaEventMgr*);
                (org_ptr(0x14040b560L))(L, input);
            };
        };
    }; // end namespace lua_tinker
END_ATF_NAMESPACE
#include "CLuaEventNode.hpp"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        template<>
        struct  ptr2lua<CLuaEventNode>
        {
        public:
            static void invoke(lua_State* L, struct CLuaEventNode* input)
            {
                using org_ptr = void (WINAPIV*)(lua_State*, struct CLuaEventNode*);
                (org_ptr(0x140404b30L))(L, input);
            };
        };
    }; // end namespace lua_tinker
END_ATF_NAMESPACE
#include "CLuaScript.hpp"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        template<>
        struct  ptr2lua<CLuaScript>
        {
        public:
            static void invoke(lua_State* L, struct CLuaScript* input)
            {
                using org_ptr = void (WINAPIV*)(lua_State*, struct CLuaScript*);
                (org_ptr(0x140403050L))(L, input);
            };
        };
    }; // end namespace lua_tinker
END_ATF_NAMESPACE