// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CAsyncLogger.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CAsyncLoggerctor_CAsyncLogger2_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        using CAsyncLoggerctor_CAsyncLogger2_clbk = void (WINAPIV*)(struct CAsyncLogger*, CAsyncLoggerctor_CAsyncLogger2_ptr);
        using CAsyncLoggerDestroy4_ptr = void (WINAPIV*)();
        using CAsyncLoggerDestroy4_clbk = void (WINAPIV*)(CAsyncLoggerDestroy4_ptr);
        using CAsyncLoggerFormatLog6_ptr = bool (WINAPIV*)(struct CAsyncLogger*, int, char*);
        using CAsyncLoggerFormatLog6_clbk = bool (WINAPIV*)(struct CAsyncLogger*, int, char*, CAsyncLoggerFormatLog6_ptr);
        using CAsyncLoggerGetTotalWaitSize8_ptr = int (WINAPIV*)(struct CAsyncLogger*);
        using CAsyncLoggerGetTotalWaitSize8_clbk = int (WINAPIV*)(struct CAsyncLogger*, CAsyncLoggerGetTotalWaitSize8_ptr);
        using CAsyncLoggerInit10_ptr = int (WINAPIV*)(struct CAsyncLogger*);
        using CAsyncLoggerInit10_clbk = int (WINAPIV*)(struct CAsyncLogger*, CAsyncLoggerInit10_ptr);
        using CAsyncLoggerInstance12_ptr = struct CAsyncLogger* (WINAPIV*)();
        using CAsyncLoggerInstance12_clbk = struct CAsyncLogger* (WINAPIV*)(CAsyncLoggerInstance12_ptr);
        using CAsyncLoggerLog14_ptr = void (WINAPIV*)(struct CAsyncLogger*, char*, char*, int);
        using CAsyncLoggerLog14_clbk = void (WINAPIV*)(struct CAsyncLogger*, char*, char*, int, CAsyncLoggerLog14_ptr);
        using CAsyncLoggerLog16_ptr = bool (WINAPIV*)(struct CAsyncLogger*, int, char*);
        using CAsyncLoggerLog16_clbk = bool (WINAPIV*)(struct CAsyncLogger*, int, char*, CAsyncLoggerLog16_ptr);
        using CAsyncLoggerLogFromArg18_ptr = bool (WINAPIV*)(struct CAsyncLogger*, int, char*, char*);
        using CAsyncLoggerLogFromArg18_clbk = bool (WINAPIV*)(struct CAsyncLogger*, int, char*, char*, CAsyncLoggerLogFromArg18_ptr);
        using CAsyncLoggerLoop20_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        using CAsyncLoggerLoop20_clbk = void (WINAPIV*)(struct CAsyncLogger*, CAsyncLoggerLoop20_ptr);
        using CAsyncLoggerProcThread22_ptr = void (WINAPIV*)(void*);
        using CAsyncLoggerProcThread22_clbk = void (WINAPIV*)(void*, CAsyncLoggerProcThread22_ptr);
        using CAsyncLoggerProcWrite24_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        using CAsyncLoggerProcWrite24_clbk = void (WINAPIV*)(struct CAsyncLogger*, CAsyncLoggerProcWrite24_ptr);
        using CAsyncLoggerRegist26_ptr = bool (WINAPIV*)(struct CAsyncLogger*, ASYNC_LOG_TYPE, char*, char*, bool, unsigned int);
        using CAsyncLoggerRegist26_clbk = bool (WINAPIV*)(struct CAsyncLogger*, ASYNC_LOG_TYPE, char*, char*, bool, unsigned int, CAsyncLoggerRegist26_ptr);
        using CAsyncLoggerSystemLog28_ptr = void (WINAPIV*)(struct CAsyncLogger*, char*);
        using CAsyncLoggerSystemLog28_clbk = void (WINAPIV*)(struct CAsyncLogger*, char*, CAsyncLoggerSystemLog28_ptr);
        
        using CAsyncLoggerdtor_CAsyncLogger32_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        using CAsyncLoggerdtor_CAsyncLogger32_clbk = void (WINAPIV*)(struct CAsyncLogger*, CAsyncLoggerdtor_CAsyncLogger32_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
