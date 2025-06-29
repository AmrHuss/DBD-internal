﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreItemInteraction

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreItemInteraction.WBP_CoreItemInteraction_C.SetData
// 0x0180 (0x0180 - 0x0000)
struct WBP_CoreItemInteraction_C_SetData final
{
public:
	struct FItemBundleViewData                    itemBundleData;                                    // 0x0000(0x0180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_CoreItemInteraction.WBP_CoreItemInteraction_C.ExecuteUbergraph_WBP_CoreItemInteraction
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_CoreItemInteraction_C_ExecuteUbergraph_WBP_CoreItemInteraction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IItemBundleViewInterface> K2Node_DynamicCast_AsItem_Bundle_View_Interface; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemBundleViewData                    K2Node_Event_itemBundleData;                       // 0x0020(0x0180)(ConstParm)
	TScriptInterface<class IItemBundleViewInterface> K2Node_DynamicCast_AsItem_Bundle_View_Interface_1; // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

