﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePlayerCardContainer

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.ExecuteUbergraph_WBP_CorePlayerCardContainer
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_CorePlayerCardContainer_C_ExecuteUbergraph_WBP_CorePlayerCardContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPlayerCardAnimationViewInterface> K2Node_DynamicCast_AsPlayer_Card_Animation_View_Interface; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPlayerCardAnimationViewInterface> K2Node_DynamicCast_AsPlayer_Card_Animation_View_Interface_1; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Icon;                           // 0x0040(0x0038)(HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_WidgetAnimation;                // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_SetAnimation_WidgetObj;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPlayerCardAnimationViewInterface> K2Node_DynamicCast_AsPlayer_Card_Animation_View_Interface_2; // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_Opacity;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPlayerCardAnimationViewInterface> K2Node_DynamicCast_AsPlayer_Card_Animation_View_Interface_3; // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isPlaying;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRetainerBoxOpacity_opacity_ImplicitCast; // 0x00C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.InitAnimation
// 0x0008 (0x0008 - 0x0000)
struct WBP_CorePlayerCardContainer_C_InitAnimation final
{
public:
	class UClass*                                 WidgetAnimation;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.InitIcon
// 0x0038 (0x0038 - 0x0000)
struct WBP_CorePlayerCardContainer_C_InitIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon_0;                                            // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePlayerCardContainer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetAnimation
// 0x0020 (0x0020 - 0x0000)
struct WBP_CorePlayerCardContainer_C_SetAnimation final
{
public:
	class UClass*                                 WidgetAnimation;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            WidgetObj;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCorePlayerCardAnimationWidget*         CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetAnimationPlay
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePlayerCardContainer_C_SetAnimationPlay final
{
public:
	bool                                          IsPlaying;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetIcon
// 0x0038 (0x0038 - 0x0000)
struct WBP_CorePlayerCardContainer_C_SetIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture2D;                                         // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetOpacity
// 0x0008 (0x0008 - 0x0000)
struct WBP_CorePlayerCardContainer_C_SetOpacity final
{
public:
	double                                        Opacity;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

