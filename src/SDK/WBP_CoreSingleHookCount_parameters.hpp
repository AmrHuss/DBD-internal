﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSingleHookCount

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreSingleHookCount.WBP_CoreSingleHookCount_C.UpdateState
// 0x0004 (0x0004 - 0x0000)
struct WBP_CoreSingleHookCount_C_UpdateState final
{
public:
	ESingleHookState                              hookState;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreSingleHookCount.WBP_CoreSingleHookCount_C.playSingleHookAnimation
// 0x0008 (0x0008 - 0x0000)
struct WBP_CoreSingleHookCount_C_playSingleHookAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreSingleHookCount.WBP_CoreSingleHookCount_C.InitHookSegment
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreSingleHookCount_C_InitHookSegment final
{
public:
	bool                                          IsSmallVersion;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

