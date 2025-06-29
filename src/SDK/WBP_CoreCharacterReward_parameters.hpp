﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCharacterReward

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.ExecuteUbergraph_WBP_CoreCharacterReward
// 0x0150 (0x0150 - 0x0000)
struct WBP_CoreCharacterReward_C_ExecuteUbergraph_WBP_CoreCharacterReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterRewardViewData               K2Node_Event_characterRewardViewData;              // 0x0008(0x0148)(ConstParm)
};

// Function WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.SetCharacterRewardData
// 0x0148 (0x0148 - 0x0000)
struct WBP_CoreCharacterReward_C_SetCharacterRewardData final
{
public:
	struct FCharacterRewardViewData               CharacterRewardViewData;                           // 0x0000(0x0148)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.SetKillSwitchOverlay
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreCharacterReward_C_SetKillSwitchOverlay final
{
public:
	bool                                          IsEnabled_0;                                       // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.SetLegacyPrestigePortrait
// 0x0001 (0x0001 - 0x0000)
struct WBP_CoreCharacterReward_C_SetLegacyPrestigePortrait final
{
public:
	bool                                          IsLegacyPrestigePortraitEnabled;                   // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.SetRole
// 0x0014 (0x0014 - 0x0000)
struct WBP_CoreCharacterReward_C_SetRole final
{
public:
	EPlayerRole                                   PlayerRole;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

