﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreLabelTooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_CoreLabelTooltip.WBP_CoreLabelTooltip_C.ExecuteUbergraph_WBP_CoreLabelTooltip
// 0x0028 (0x0028 - 0x0000)
struct WBP_CoreLabelTooltip_C_ExecuteUbergraph_WBP_CoreLabelTooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreLabelTooltip.WBP_CoreLabelTooltip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreLabelTooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

