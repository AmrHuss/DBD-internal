﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSliderArrowButton

#include "Basic.hpp"

#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.ExecuteUbergraph_WBP_CoreSliderArrowButton
// 0x0038 (0x0038 - 0x0000)
struct WBP_CoreSliderArrowButton_C_ExecuteUbergraph_WBP_CoreSliderArrowButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  K2Node_Event_newAlignment;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnabled_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isEnabled;                            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_ToScale_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnabled_ReturnValue_1;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUITweenInstance*                       CallFunc_Create_ReturnValue_1;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUITweenInstance*                       CallFunc_ToScale_ReturnValue_1;                    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnabled_ReturnValue_2;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnabled_ReturnValue_3;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnAlignmentChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreSliderArrowButton_C_OnAlignmentChanged final
{
public:
	ETextJustify                                  newAlignment;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnEnabledChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreSliderArrowButton_C_OnEnabledChanged final
{
public:
	bool                                          IsEnabled_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

