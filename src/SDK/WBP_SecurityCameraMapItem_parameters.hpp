﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SecurityCameraMapItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_SecurityCameraMapItem.WBP_SecurityCameraMapItem_C.SetYouText
// 0x0018 (0x0018 - 0x0000)
struct WBP_SecurityCameraMapItem_C_SetYouText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SecurityCameraMapItem.WBP_SecurityCameraMapItem_C.SetPlayerLocationPanelVisuals
// 0x0024 (0x0024 - 0x0000)
struct WBP_SecurityCameraMapItem_C_SetPlayerLocationPanelVisuals final
{
public:
	bool                                          isUpLayoutCamera_0;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SecurityCameraMapItem.WBP_SecurityCameraMapItem_C.SetObserved
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecurityCameraMapItem_C_SetObserved final
{
public:
	bool                                          isObserved;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SecurityCameraMapItem.WBP_SecurityCameraMapItem_C.Set Player Location
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecurityCameraMapItem_C_Set_Player_Location final
{
public:
	bool                                          IsUpLayout;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SecurityCameraMapItem.WBP_SecurityCameraMapItem_C.ResetPlayerLocation
// 0x0010 (0x0010 - 0x0000)
struct WBP_SecurityCameraMapItem_C_ResetPlayerLocation final
{
public:
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SecurityCameraMapItem.WBP_SecurityCameraMapItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecurityCameraMapItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SecurityCameraMapItem.WBP_SecurityCameraMapItem_C.ExecuteUbergraph_WBP_SecurityCameraMapItem
// 0x0030 (0x0030 - 0x0000)
struct WBP_SecurityCameraMapItem_C_ExecuteUbergraph_WBP_SecurityCameraMapItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

