﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreOfferingInteraction

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreOfferingInteraction.WBP_CoreOfferingInteraction_C.SetData
// 0x0070 (0x0070 - 0x0000)
struct WBP_CoreOfferingInteraction_C_SetData final
{
public:
	struct FOfferingViewData                      OfferingData;                                      // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_CoreOfferingInteraction.WBP_CoreOfferingInteraction_C.ExecuteUbergraph_WBP_CoreOfferingInteraction
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_CoreOfferingInteraction_C_ExecuteUbergraph_WBP_CoreOfferingInteraction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IOfferingViewInterface> K2Node_DynamicCast_AsOffering_View_Interface;     // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOfferingViewData                      K2Node_Event_OfferingData;                         // 0x0020(0x0070)(ConstParm)
	TScriptInterface<class IOfferingViewInterface> K2Node_DynamicCast_AsOffering_View_Interface_1;   // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

