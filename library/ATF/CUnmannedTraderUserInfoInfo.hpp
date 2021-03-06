// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CUnmannedTraderUserInfo.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CUnmannedTraderUserInfoBuy2_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_buy_item_request_clzo*, struct CLogFile*);
        using CUnmannedTraderUserInfoBuy2_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_buy_item_request_clzo*, struct CLogFile*, CUnmannedTraderUserInfoBuy2_ptr);
        using CUnmannedTraderUserInfoBuyComplete4_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, unsigned int, char*, char*, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int, uint64_t, struct CLogFile*, uint16_t*);
        using CUnmannedTraderUserInfoBuyComplete4_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, unsigned int, char*, char*, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int, uint64_t, struct CLogFile*, uint16_t*, CUnmannedTraderUserInfoBuyComplete4_ptr);
        
        using CUnmannedTraderUserInfoctor_CUnmannedTraderUserInfo6_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoctor_CUnmannedTraderUserInfo6_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoctor_CUnmannedTraderUserInfo6_ptr);
        
        using CUnmannedTraderUserInfoctor_CUnmannedTraderUserInfo8_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoctor_CUnmannedTraderUserInfo8_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoctor_CUnmannedTraderUserInfo8_ptr);
        using CUnmannedTraderUserInfoCancelRegist10_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_clear_item_request_clzo*, struct CLogFile*);
        using CUnmannedTraderUserInfoCancelRegist10_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_clear_item_request_clzo*, struct CLogFile*, CUnmannedTraderUserInfoCancelRegist10_ptr);
        using CUnmannedTraderUserInfoCheatCancelRegist12_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char);
        using CUnmannedTraderUserInfoCheatCancelRegist12_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, CUnmannedTraderUserInfoCheatCancelRegist12_ptr);
        using CUnmannedTraderUserInfoCheatCancelRegistAll14_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoCheatCancelRegistAll14_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoCheatCancelRegistAll14_ptr);
        using CUnmannedTraderUserInfoCheatCancelRegistSingle16_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char);
        using CUnmannedTraderUserInfoCheatCancelRegistSingle16_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, CUnmannedTraderUserInfoCheatCancelRegistSingle16_ptr);
        using CUnmannedTraderUserInfoCheckBuy18_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_buy_item_request_clzo*, struct CPlayer**, struct CLogFile*);
        using CUnmannedTraderUserInfoCheckBuy18_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_buy_item_request_clzo*, struct CPlayer**, struct CLogFile*, CUnmannedTraderUserInfoCheckBuy18_ptr);
        using CUnmannedTraderUserInfoCheckBuyComplete20_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, unsigned int);
        using CUnmannedTraderUserInfoCheckBuyComplete20_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, unsigned int, CUnmannedTraderUserInfoCheckBuyComplete20_ptr);
        using CUnmannedTraderUserInfoCheckCancelRegist22_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_clear_item_request_clzo*, struct CLogFile*);
        using CUnmannedTraderUserInfoCheckCancelRegist22_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_clear_item_request_clzo*, struct CLogFile*, CUnmannedTraderUserInfoCheckCancelRegist22_ptr);
        using CUnmannedTraderUserInfoCheckIsUpdatedTaxRate24_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct CLogFile*);
        using CUnmannedTraderUserInfoCheckIsUpdatedTaxRate24_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct CLogFile*, CUnmannedTraderUserInfoCheckIsUpdatedTaxRate24_ptr);
        using CUnmannedTraderUserInfoCheckModifyPrice26_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_adjust_price_request_clzo*, unsigned int*, struct CLogFile*, unsigned int*);
        using CUnmannedTraderUserInfoCheckModifyPrice26_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_adjust_price_request_clzo*, unsigned int*, struct CLogFile*, unsigned int*, CUnmannedTraderUserInfoCheckModifyPrice26_ptr);
        using CUnmannedTraderUserInfoCheckReRegist28_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct CLogFile*, uint16_t, char, char, uint16_t, unsigned int, unsigned int, char*, char*, char*, unsigned int*, unsigned int*);
        using CUnmannedTraderUserInfoCheckReRegist28_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct CLogFile*, uint16_t, char, char, uint16_t, unsigned int, unsigned int, char*, char*, char*, unsigned int*, unsigned int*, CUnmannedTraderUserInfoCheckReRegist28_ptr);
        using CUnmannedTraderUserInfoCheckRegist30_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, struct CLogFile*, char*, char*, char*, char*, unsigned int*, unsigned int*);
        using CUnmannedTraderUserInfoCheckRegist30_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, struct CLogFile*, char*, char*, char*, char*, unsigned int*, unsigned int*, CUnmannedTraderUserInfoCheckRegist30_ptr);
        using CUnmannedTraderUserInfoCheckSearch32_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_search_list_request_clzo*, unsigned int*, unsigned int*, struct CLogFile*);
        using CUnmannedTraderUserInfoCheckSearch32_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_search_list_request_clzo*, unsigned int*, unsigned int*, struct CLogFile*, CUnmannedTraderUserInfoCheckSearch32_ptr);
        using CUnmannedTraderUserInfoCheckSellComplete34_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, struct CPlayer*, unsigned int, unsigned int, struct CLogFile*);
        using CUnmannedTraderUserInfoCheckSellComplete34_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, struct CPlayer*, unsigned int, unsigned int, struct CLogFile*, CUnmannedTraderUserInfoCheckSellComplete34_ptr);
        using CUnmannedTraderUserInfoClear36_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoClear36_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoClear36_ptr);
        using CUnmannedTraderUserInfoClearLoadItemInfo38_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoClearLoadItemInfo38_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoClearLoadItemInfo38_ptr);
        using CUnmannedTraderUserInfoClearRequest40_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoClearRequest40_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoClearRequest40_ptr);
        using CUnmannedTraderUserInfoCompleteCancelRegist42_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteCancelRegist42_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*, CUnmannedTraderUserInfoCompleteCancelRegist42_ptr);
        using CUnmannedTraderUserInfoCompleteCancelRegistItem44_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteCancelRegistItem44_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, struct CLogFile*, CUnmannedTraderUserInfoCompleteCancelRegistItem44_ptr);
        using CUnmannedTraderUserInfoCompleteCreate46_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteCreate46_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CLogFile*, CUnmannedTraderUserInfoCompleteCreate46_ptr);
        using CUnmannedTraderUserInfoCompleteReRegist48_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteReRegist48_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, struct CLogFile*, CUnmannedTraderUserInfoCompleteReRegist48_ptr);
        using CUnmannedTraderUserInfoCompleteReRegistItem50_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int, struct CLogFile*, char*);
        using CUnmannedTraderUserInfoCompleteReRegistItem50_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int, struct CLogFile*, char*, CUnmannedTraderUserInfoCompleteReRegistItem50_ptr);
        using CUnmannedTraderUserInfoCompleteReRegistRollBack52_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteReRegistRollBack52_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, struct CLogFile*, CUnmannedTraderUserInfoCompleteReRegistRollBack52_ptr);
        using CUnmannedTraderUserInfoCompleteRegist54_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteRegist54_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*, CUnmannedTraderUserInfoCompleteRegist54_ptr);
        using CUnmannedTraderUserInfoCompleteRegistItem56_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int, unsigned int, char, char, uint16_t, char, uint64_t, unsigned int, bool);
        using CUnmannedTraderUserInfoCompleteRegistItem56_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int, unsigned int, char, char, uint16_t, char, uint64_t, unsigned int, bool, CUnmannedTraderUserInfoCompleteRegistItem56_ptr);
        using CUnmannedTraderUserInfoCompleteReprice58_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteReprice58_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*, CUnmannedTraderUserInfoCompleteReprice58_ptr);
        using CUnmannedTraderUserInfoCompleteRepriceItem60_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int);
        using CUnmannedTraderUserInfoCompleteRepriceItem60_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int, CUnmannedTraderUserInfoCompleteRepriceItem60_ptr);
        using CUnmannedTraderUserInfoCompleteTimeOutClear62_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CLogFile*);
        using CUnmannedTraderUserInfoCompleteTimeOutClear62_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CLogFile*, CUnmannedTraderUserInfoCompleteTimeOutClear62_ptr);
        using CUnmannedTraderUserInfoCompleteUpdateCheatRegistTime64_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*);
        using CUnmannedTraderUserInfoCompleteUpdateCheatRegistTime64_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, CUnmannedTraderUserInfoCompleteUpdateCheatRegistTime64_ptr);
        using CUnmannedTraderUserInfoCompleteUpdateState66_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, char, bool);
        using CUnmannedTraderUserInfoCompleteUpdateState66_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, char, bool, CUnmannedTraderUserInfoCompleteUpdateState66_ptr);
        using CUnmannedTraderUserInfoCountRegistItem68_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoCountRegistItem68_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoCountRegistItem68_ptr);
        using CUnmannedTraderUserInfoFind70_ptr = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*, unsigned int);
        using CUnmannedTraderUserInfoFind70_clbk = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*, unsigned int, CUnmannedTraderUserInfoFind70_ptr);
        using CUnmannedTraderUserInfoFindEmpty72_ptr = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*);
        using CUnmannedTraderUserInfoFindEmpty72_clbk = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*, CUnmannedTraderUserInfoFindEmpty72_ptr);
        using CUnmannedTraderUserInfoFindOwner74_ptr = struct CPlayer* (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoFindOwner74_clbk = struct CPlayer* (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoFindOwner74_ptr);
        using CUnmannedTraderUserInfoFindRegist76_ptr = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >);
        using CUnmannedTraderUserInfoFindRegist76_clbk = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >, CUnmannedTraderUserInfoFindRegist76_ptr);
        using CUnmannedTraderUserInfoGetCloseItemForPassTimeUpdateInfo78_ptr = CUnmannedTraderItemState::STATE (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CPlayer**);
        using CUnmannedTraderUserInfoGetCloseItemForPassTimeUpdateInfo78_clbk = CUnmannedTraderItemState::STATE (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CPlayer**, CUnmannedTraderUserInfoGetCloseItemForPassTimeUpdateInfo78_ptr);
        using CUnmannedTraderUserInfoGetCurrentRegItemStateStr80_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, int);
        using CUnmannedTraderUserInfoGetCurrentRegItemStateStr80_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, int, CUnmannedTraderUserInfoGetCurrentRegItemStateStr80_ptr);
        using CUnmannedTraderUserInfoGetIndex82_ptr = uint16_t (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoGetIndex82_clbk = uint16_t (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoGetIndex82_ptr);
        using CUnmannedTraderUserInfoGetMaxRegistCnt84_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoGetMaxRegistCnt84_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoGetMaxRegistCnt84_ptr);
        using CUnmannedTraderUserInfoGetRegItemInfo86_ptr = struct CUnmannedTraderRegistItemInfo* (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoGetRegItemInfo86_clbk = struct CUnmannedTraderRegistItemInfo* (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoGetRegItemInfo86_ptr);
        using CUnmannedTraderUserInfoGetSerial88_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoGetSerial88_clbk = unsigned int (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoGetSerial88_ptr);
        using CUnmannedTraderUserInfoInit90_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t);
        using CUnmannedTraderUserInfoInit90_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, CUnmannedTraderUserInfoInit90_ptr);
        using CUnmannedTraderUserInfoIsLogInState92_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoIsLogInState92_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoIsLogInState92_ptr);
        using CUnmannedTraderUserInfoIsNull94_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoIsNull94_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoIsNull94_ptr);
        using CUnmannedTraderUserInfoLoad96_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, uint16_t, unsigned int, struct _TRADE_DB_BASE*, struct CLogFile*);
        using CUnmannedTraderUserInfoLoad96_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, uint16_t, unsigned int, struct _TRADE_DB_BASE*, struct CLogFile*, CUnmannedTraderUserInfoLoad96_ptr);
        using CUnmannedTraderUserInfoLogOut98_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CLogFile*);
        using CUnmannedTraderUserInfoLogOut98_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CLogFile*, CUnmannedTraderUserInfoLogOut98_ptr);
        using CUnmannedTraderUserInfoModifyPrice100_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_adjust_price_request_clzo*, struct CLogFile*);
        using CUnmannedTraderUserInfoModifyPrice100_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_adjust_price_request_clzo*, struct CLogFile*, CUnmannedTraderUserInfoModifyPrice100_ptr);
        using CUnmannedTraderUserInfoNotifyCloseItem102_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, struct CLogFile*);
        using CUnmannedTraderUserInfoNotifyCloseItem102_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, struct CLogFile*, CUnmannedTraderUserInfoNotifyCloseItem102_ptr);
        using CUnmannedTraderUserInfoNotifyRegistItem104_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfoNotifyRegistItem104_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfoNotifyRegistItem104_ptr);
        using CUnmannedTraderUserInfoPrcoSellUpdateWaitItem106_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, char, struct CLogFile*);
        using CUnmannedTraderUserInfoPrcoSellUpdateWaitItem106_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, char, struct CLogFile*, CUnmannedTraderUserInfoPrcoSellUpdateWaitItem106_ptr);
        using CUnmannedTraderUserInfoProcSellWaitItem108_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, char, struct CLogFile*);
        using CUnmannedTraderUserInfoProcSellWaitItem108_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, char, struct CLogFile*, CUnmannedTraderUserInfoProcSellWaitItem108_ptr);
        using CUnmannedTraderUserInfoReRegist110_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_re_regist_request_clzo*, struct CLogFile*);
        using CUnmannedTraderUserInfoReRegist110_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_re_regist_request_clzo*, struct CLogFile*, CUnmannedTraderUserInfoReRegist110_ptr);
        using CUnmannedTraderUserInfoRegist112_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, struct CLogFile*);
        using CUnmannedTraderUserInfoRegist112_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, struct CLogFile*, CUnmannedTraderUserInfoRegist112_ptr);
        using CUnmannedTraderUserInfoRegistItem114_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, char, char, char, char, unsigned int, unsigned int);
        using CUnmannedTraderUserInfoRegistItem114_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, char, char, char, char, unsigned int, unsigned int, CUnmannedTraderUserInfoRegistItem114_ptr);
        using CUnmannedTraderUserInfoSearch116_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_search_list_request_clzo*, struct CLogFile*);
        using CUnmannedTraderUserInfoSearch116_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_search_list_request_clzo*, struct CLogFile*, CUnmannedTraderUserInfoSearch116_ptr);
        using CUnmannedTraderUserInfoSellComplete118_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, struct CPlayer*, unsigned int, unsigned int, unsigned int, unsigned int, int64_t, struct CLogFile*);
        using CUnmannedTraderUserInfoSellComplete118_clbk = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, struct CPlayer*, unsigned int, unsigned int, unsigned int, unsigned int, int64_t, struct CLogFile*, CUnmannedTraderUserInfoSellComplete118_ptr);
        using CUnmannedTraderUserInfoSendBuyErrorResult120_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char);
        using CUnmannedTraderUserInfoSendBuyErrorResult120_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char, CUnmannedTraderUserInfoSendBuyErrorResult120_ptr);
        using CUnmannedTraderUserInfoSendCancelRegistErrorResult122_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char);
        using CUnmannedTraderUserInfoSendCancelRegistErrorResult122_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char, CUnmannedTraderUserInfoSendCancelRegistErrorResult122_ptr);
        using CUnmannedTraderUserInfoSendCancelRegistSuccessResult124_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int);
        using CUnmannedTraderUserInfoSendCancelRegistSuccessResult124_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int, CUnmannedTraderUserInfoSendCancelRegistSuccessResult124_ptr);
        using CUnmannedTraderUserInfoSendNotifyCloseItem126_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int, unsigned int, char);
        using CUnmannedTraderUserInfoSendNotifyCloseItem126_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int, unsigned int, char, CUnmannedTraderUserInfoSendNotifyCloseItem126_ptr);
        using CUnmannedTraderUserInfoSendRegistItemErrorResult128_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char, uint16_t, unsigned int);
        using CUnmannedTraderUserInfoSendRegistItemErrorResult128_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char, uint16_t, unsigned int, CUnmannedTraderUserInfoSendRegistItemErrorResult128_ptr);
        using CUnmannedTraderUserInfoSendRegistItemSuccessResult130_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, char*);
        using CUnmannedTraderUserInfoSendRegistItemSuccessResult130_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, char*, CUnmannedTraderUserInfoSendRegistItemSuccessResult130_ptr);
        using CUnmannedTraderUserInfoSendRepriceErrorResult132_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, char);
        using CUnmannedTraderUserInfoSendRepriceErrorResult132_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, char, CUnmannedTraderUserInfoSendRepriceErrorResult132_ptr);
        using CUnmannedTraderUserInfoSendRepriceSuccessResult134_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, uint16_t, unsigned int, unsigned int, unsigned int);
        using CUnmannedTraderUserInfoSendRepriceSuccessResult134_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, uint16_t, unsigned int, unsigned int, unsigned int, CUnmannedTraderUserInfoSendRepriceSuccessResult134_ptr);
        using CUnmannedTraderUserInfoSendSearchErrorResult136_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char);
        using CUnmannedTraderUserInfoSendSearchErrorResult136_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char, CUnmannedTraderUserInfoSendSearchErrorResult136_ptr);
        using CUnmannedTraderUserInfoSendSearchResult138_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char*);
        using CUnmannedTraderUserInfoSendSearchResult138_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char*, CUnmannedTraderUserInfoSendSearchResult138_ptr);
        using CUnmannedTraderUserInfoSendSellInfom140_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int, unsigned int, unsigned int);
        using CUnmannedTraderUserInfoSendSellInfom140_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int, unsigned int, unsigned int, CUnmannedTraderUserInfoSendSellInfom140_ptr);
        using CUnmannedTraderUserInfoSetAllItemState142_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char);
        using CUnmannedTraderUserInfoSetAllItemState142_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char, CUnmannedTraderUserInfoSetAllItemState142_ptr);
        using CUnmannedTraderUserInfoSetCompleteInfo144_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CLogFile*);
        using CUnmannedTraderUserInfoSetCompleteInfo144_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CLogFile*, CUnmannedTraderUserInfoSetCompleteInfo144_ptr);
        using CUnmannedTraderUserInfoSetLoadInfo146_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, unsigned int, struct _TRADE_DB_BASE*, struct CLogFile*);
        using CUnmannedTraderUserInfoSetLoadInfo146_clbk = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, unsigned int, struct _TRADE_DB_BASE*, struct CLogFile*, CUnmannedTraderUserInfoSetLoadInfo146_ptr);
        
        using CUnmannedTraderUserInfodtor_CUnmannedTraderUserInfo154_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        using CUnmannedTraderUserInfodtor_CUnmannedTraderUserInfo154_clbk = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, CUnmannedTraderUserInfodtor_CUnmannedTraderUserInfo154_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
