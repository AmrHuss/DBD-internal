﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePlayerLevel

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.ExecuteUbergraph_WBP_CorePlayerLevel
// 0x0088 (0x0088 - 0x0000)
struct WBP_CorePlayerLevel_C_ExecuteUbergraph_WBP_CorePlayerLevel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerLevelViewData                   K2Node_Event_viewData;                             // 0x0004(0x0018)(ConstParm, NoDestructor)
	struct FPlayerLevelViewData                   K2Node_MakeStruct_PlayerLevelViewData;             // 0x001C(0x0018)(NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDBDTooltipManager*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetPaintSpaceGeometry_ReturnValue;        // 0x0040(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	class UDBDTooltipManager*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDBDTooltipManager*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePlayerLevel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetData
// 0x0018 (0x0018 - 0x0000)
struct WBP_CorePlayerLevel_C_SetData final
{
public:
	struct FPlayerLevelViewData                   ViewData;                                          // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetDataFromViewData
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_CorePlayerLevel_C_SetDataFromViewData final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value2;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
};

// Function WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetViewData
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_CorePlayerLevel_C_SetViewData final
{
public:
	struct FPlayerLevelViewData                   PlayerLevelViewData;                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0088(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
};

}

