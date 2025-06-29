﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Halloween2023

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"


namespace SDK::Params
{

// Function Halloween2023.HauntComponent.OnPlayerEnterZone
// 0x0008 (0x0008 - 0x0000)
struct HauntComponent_OnPlayerEnterZone final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2023.HauntComponent.OnPlayerLeftZone
// 0x0008 (0x0008 - 0x0000)
struct HauntComponent_OnPlayerLeftZone final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2023.StandardWorldHauntComponent.Multicast_BlessOrTrapCharacterEnteringZone
// 0x0010 (0x0010 - 0x0000)
struct StandardWorldHauntComponent_Multicast_BlessOrTrapCharacterEnteringZone final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          isBlessing;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Halloween2023.VoidZoneHauntComponent.Authority_AddCaptureProgress
// 0x0010 (0x0010 - 0x0000)
struct VoidZoneHauntComponent_Authority_AddCaptureProgress final
{
public:
	int32                                         Progress;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             playerGivingEnergy;                                // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2023.VoidZoneHauntComponent.Authority_DecayProgress
// 0x0004 (0x0004 - 0x0000)
struct VoidZoneHauntComponent_Authority_DecayProgress final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2023.VoidZoneHauntComponent.Authority_GrantCaptureBonusStatusEffects
// 0x0008 (0x0008 - 0x0000)
struct VoidZoneHauntComponent_Authority_GrantCaptureBonusStatusEffects final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2023.VoidZoneHauntComponent.Authority_OnInteractionCompleted
// 0x0018 (0x0018 - 0x0000)
struct VoidZoneHauntComponent_Authority_OnInteractionCompleted final
{
public:
	bool                                          COMPLETED;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         instigatorsForCompletion;                          // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Halloween2023.VoidZoneHauntComponent.Authority_PlayerInZone
// 0x0008 (0x0008 - 0x0000)
struct VoidZoneHauntComponent_Authority_PlayerInZone final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2023.VoidZoneHauntComponent.Multicast_AddCaptureProgress
// 0x0004 (0x0004 - 0x0000)
struct VoidZoneHauntComponent_Multicast_AddCaptureProgress final
{
public:
	int32                                         Progress;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2023.VoidZoneHauntComponent.Multicast_PlayerEnterOrLeftZone
// 0x0028 (0x0028 - 0x0000)
struct VoidZoneHauntComponent_Multicast_PlayerEnterOrLeftZone final
{
public:
	class ADBDPlayer*                             playerEnteringOrLeavingZone;                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          isPlayerLeavingZone;                               // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         chargeRemainingInHaunt;                            // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class ADBDPlayer>>      playersInZone;                                     // 0x0010(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          isZoneContested;                                   // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          shouldRegressProgress;                             // 0x0021(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Halloween2023.VoidZoneHauntComponent.Multicast_UpdateAllPlayerHauntTargets
// 0x0020 (0x0020 - 0x0000)
struct VoidZoneHauntComponent_Multicast_UpdateAllPlayerHauntTargets final
{
public:
	float                                         chargeRemainingInHaunt;                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class ADBDPlayer>>      playersInZone;                                     // 0x0008(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          isZoneContested;                                   // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          shouldRegressProgress;                             // 0x0019(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function Halloween2023.VoidZoneHauntComponent.Multicast_WinHauntForTeam
// 0x0018 (0x0018 - 0x0000)
struct VoidZoneHauntComponent_Multicast_WinHauntForTeam final
{
public:
	class ADBDPlayer*                             winningPlayer;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class ADBDPlayer>>      playersInZone;                                     // 0x0008(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

