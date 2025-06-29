﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_EventFunctions

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BPFL_EventFunctions.BPFL_EventFunctions_C.LocallyDispatchEvent
// 0x0070 (0x0070 - 0x0000)
struct BPFL_EventFunctions_C_LocallyDispatchEvent final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             Instigator;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Custom_Value;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameEventDispatcher*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameEventData                         K2Node_MakeStruct_GameEventData;                   // 0x0038(0x0030)(NoDestructor)
	float                                         K2Node_MakeStruct_CustomValue_ImplicitCast;        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_EventFunctions.BPFL_EventFunctions_C.RegisterEventListener
// 0x0070 (0x0070 - 0x0000)
struct BPFL_EventFunctions_C_RegisterEventListener final
{
public:
	TDelegate<void(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)> Game_Event_Delegate; // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Filter;                                            // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameEventDispatcherHandleBP           GameEventDispatcherHandle;                         // 0x0028(0x0020)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
	struct FGameEventDispatcherHandleBP           K2Node_MakeStruct_GameEventDispatcherHandleBP;     // 0x0048(0x0020)(NoDestructor, ContainsInstancedReference)
	class UGameEventDispatcher*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_EventFunctions.BPFL_EventFunctions_C.RemotelyDispatchEvent
// 0x0070 (0x0070 - 0x0000)
struct BPFL_EventFunctions_C_RemotelyDispatchEvent final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             Instigator;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Custom_Value;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameEventDispatcher*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameEventData                         K2Node_MakeStruct_GameEventData;                   // 0x0038(0x0030)(NoDestructor)
	float                                         K2Node_MakeStruct_CustomValue_ImplicitCast;        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPFL_EventFunctions.BPFL_EventFunctions_C.UnregisterEventListener
// 0x0030 (0x0030 - 0x0000)
struct BPFL_EventFunctions_C_UnregisterEventListener final
{
public:
	struct FGameEventDispatcherHandleBP           Game_Event_Delegate_Handle;                        // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameEventDispatcher*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

