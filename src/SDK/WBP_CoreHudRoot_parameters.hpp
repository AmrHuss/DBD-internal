﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreHudRoot

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.SetWidgetsVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreHudRoot_C_SetWidgetsVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.ScalePadding
// 0x0048 (0x0048 - 0x0000)
struct WBP_CoreHudRoot_C_ScalePadding final
{
public:
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_FClamp_Value_ImplicitCast;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreHudRoot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.ExecuteUbergraph_WBP_CoreHudRoot
// 0x0040 (0x0040 - 0x0000)
struct WBP_CoreHudRoot_C_ExecuteUbergraph_WBP_CoreHudRoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_visible;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isConstrained;                        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_aspectRatio;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.ApplyConstrainedAspectRatio
// 0x0008 (0x0008 - 0x0000)
struct WBP_CoreHudRoot_C_ApplyConstrainedAspectRatio final
{
public:
	bool                                          isConstrained;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AspectRatio;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

