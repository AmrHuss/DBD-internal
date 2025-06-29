﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS38

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TheS38.S38P01.Authority_OnPerkActivated
// 0x0040 (0x0040 - 0x0000)
struct S38P01_Authority_OnPerkActivated final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P01.Multicast_OnSecondaryPerkEffect
// 0x0001 (0x0001 - 0x0000)
struct S38P01_Multicast_OnSecondaryPerkEffect final
{
public:
	bool                                          shouldScream;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P01.GetCollectableClasses
// 0x0010 (0x0010 - 0x0000)
struct S38P01_GetCollectableClasses final
{
public:
	TArray<TSubclassOf<class ACollectable>>       ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P01.GetExhaustionDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct S38P01_GetExhaustionDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P01.GetExposedDuration
// 0x0004 (0x0004 - 0x0000)
struct S38P01_GetExposedDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P01.GetHasteAmount
// 0x0004 (0x0004 - 0x0000)
struct S38P01_GetHasteAmount final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P01.GetHasteDuration
// 0x0004 (0x0004 - 0x0000)
struct S38P01_GetHasteDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P01.GetUnsupportedItemAddons
// 0x0010 (0x0010 - 0x0000)
struct S38P01_GetUnsupportedItemAddons final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.Authority_OnIsApplicableChanged
// 0x0010 (0x0010 - 0x0000)
struct S38P02_Authority_OnIsApplicableChanged final
{
public:
	class UGameplayModifierContainer*             container;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsApplicable_0;                                    // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function TheS38.S38P02.Multicast_MakeSurvivorScream
// 0x0004 (0x0004 - 0x0000)
struct S38P02_Multicast_MakeSurvivorScream final
{
public:
	int32                                         timesToScream;                                     // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.GetAuraDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct S38P02_GetAuraDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.GetCooldownDuration
// 0x0004 (0x0004 - 0x0000)
struct S38P02_GetCooldownDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.GetExtraAuraDurationPerExtraScream
// 0x0004 (0x0004 - 0x0000)
struct S38P02_GetExtraAuraDurationPerExtraScream final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.GetMaxRandomScreamDelay
// 0x0004 (0x0004 - 0x0000)
struct S38P02_GetMaxRandomScreamDelay final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.GetMaxScreamCount
// 0x0004 (0x0004 - 0x0000)
struct S38P02_GetMaxScreamCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.GetMinRandomScreamDelay
// 0x0004 (0x0004 - 0x0000)
struct S38P02_GetMinRandomScreamDelay final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P02.GetScreamDuration
// 0x0004 (0x0004 - 0x0000)
struct S38P02_GetScreamDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P03.Authority_OnExitGatesPowered
// 0x0040 (0x0040 - 0x0000)
struct S38P03_Authority_OnExitGatesPowered final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P03.Authority_OnPerkActivated
// 0x0040 (0x0040 - 0x0000)
struct S38P03_Authority_OnPerkActivated final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P03.Authority_OnPickSelfUp
// 0x0040 (0x0040 - 0x0000)
struct S38P03_Authority_OnPickSelfUp final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x000C)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P03.GetHasteDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct S38P03_GetHasteDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P03OnGroundStatusEffect.Authority_OnHealthStateChanged
// 0x0002 (0x0002 - 0x0000)
struct S38P03OnGroundStatusEffect_Authority_OnHealthStateChanged final
{
public:
	EHealthState                                  oldHealthState;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHealthState                                  newHealthState;                                    // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P03OnGroundStatusEffect.Authority_OnPickSelfUp
// 0x0040 (0x0040 - 0x0000)
struct S38P03OnGroundStatusEffect_Authority_OnPickSelfUp final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheS38.S38P03OnGroundStatusEffect.Authority_OnSurvivorHooked
// 0x0040 (0x0040 - 0x0000)
struct S38P03OnGroundStatusEffect_Authority_OnSurvivorHooked final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

