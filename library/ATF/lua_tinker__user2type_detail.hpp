// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "lua_tinker__user2type_info.hpp"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        namespace detail
        {
            static info::lua_tinker__user2typeinvoke2_ptr lua_tinker__user2typeinvoke2_next(nullptr);
            static info::lua_tinker__user2typeinvoke2_clbk lua_tinker__user2typeinvoke2_user(nullptr);
            
            static struct lua_tinker::var_base* lua_tinker__user2typeinvoke2_wrapper(struct lua_tinker::user2type<lua_tinker::var_base *>* _this, lua_State* L, int index)
            {
               return lua_tinker__user2typeinvoke2_user(_this, L, index);
            };
            
            static hook_record user2type<lua_tinker::var_base *>_functions[] = {
            {   (LPVOID)0x140447240L,
                (LPVOID *)&lua_tinker__user2typeinvoke2_user,
                (LPVOID *)&lua_tinker__user2typeinvoke2_next,
                (LPVOID)cast_pointer_function(lua_tinker__user2typeinvoke2_wrapper),
                (LPVOID)cast_pointer_function((struct lua_tinker::var_base*(lua_tinker::user2type<lua_tinker::var_base *>::*)(struct lua_tinker::user2type<lua_tinker::var_base *>*, lua_State*, int))&lua_tinker::user2type<lua_tinker::var_base *>::invoke) },
            
            };
            
        }; // static end namespace detail
    }; // end namespace lua_tinker
END_ATF_NAMESPACE
#include "lua_tinker__user2type_info.hpp"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        namespace detail
        {
            static info::lua_tinker__user2typeinvoke2_ptr lua_tinker__user2typeinvoke2_next(nullptr);
            static info::lua_tinker__user2typeinvoke2_clbk lua_tinker__user2typeinvoke2_user(nullptr);
            
            static struct lua_tinker::user* lua_tinker__user2typeinvoke2_wrapper(struct lua_tinker::user2type<lua_tinker::user *>* _this, lua_State* L, int index)
            {
               return lua_tinker__user2typeinvoke2_user(_this, L, index);
            };
            
            static hook_record user2type<lua_tinker::user *>_functions[] = {
            {   (LPVOID)0x140409b60L,
                (LPVOID *)&lua_tinker__user2typeinvoke2_user,
                (LPVOID *)&lua_tinker__user2typeinvoke2_next,
                (LPVOID)cast_pointer_function(lua_tinker__user2typeinvoke2_wrapper),
                (LPVOID)cast_pointer_function((struct lua_tinker::user*(lua_tinker::user2type<lua_tinker::user *>::*)(struct lua_tinker::user2type<lua_tinker::user *>*, lua_State*, int))&lua_tinker::user2type<lua_tinker::user *>::invoke) },
            
            };
            
        }; // static end namespace detail
    }; // end namespace lua_tinker
END_ATF_NAMESPACE