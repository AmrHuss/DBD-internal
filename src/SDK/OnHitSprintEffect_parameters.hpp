﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnHitSprintEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function OnHitSprintEffect.OnHitSprintEffect_C.ExecuteUbergraph_OnHitSprintEffect
// 0x0020 (0x0020 - 0x0000)
struct OnHitSprintEffect_C_ExecuteUbergraph_OnHitSprintEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IConditionReceiver>    CallFunc_CreateAndReceiveConditionForBP_conditionReceiver_CastInput; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEventDrivenModifierCondition*          CallFunc_CreateAndReceiveConditionForBP_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}

