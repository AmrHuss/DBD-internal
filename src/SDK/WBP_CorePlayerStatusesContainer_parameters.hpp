﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePlayerStatusesContainer

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function WBP_CorePlayerStatusesContainer.WBP_CorePlayerStatusesContainer_C.SetTutorialHighlight
// 0x0002 (0x0002 - 0x0000)
struct WBP_CorePlayerStatusesContainer_C_SetTutorialHighlight final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHudComponent                                 componentId;                                       // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CorePlayerStatusesContainer.WBP_CorePlayerStatusesContainer_C.ExecuteUbergraph_WBP_CorePlayerStatusesContainer
// 0x0020 (0x0020 - 0x0000)
struct WBP_CorePlayerStatusesContainer_C_ExecuteUbergraph_WBP_CorePlayerStatusesContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_show;                                 // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHudComponent                                 K2Node_Event_componentId;                          // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCorePlayerStatusWidget*>        K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

