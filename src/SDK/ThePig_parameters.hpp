﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThePig

#include "Basic.hpp"


namespace SDK::Params
{

// Function ThePig.AttachReverseBearTrap.GetSurvivor
// 0x0008 (0x0008 - 0x0000)
struct AttachReverseBearTrap_GetSurvivor final
{
public:
	class ASurvivor*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithDetach
// 0x0008 (0x0008 - 0x0000)
struct RemoveReverseBearTrapChargeable_BP_OnFinishWithDetach final
{
public:
	class ASurvivor*                              searchingPlayer;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithoutDetach
// 0x0008 (0x0008 - 0x0000)
struct RemoveReverseBearTrapChargeable_BP_OnFinishWithoutDetach final
{
public:
	class ASurvivor*                              searchingPlayer;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ThePig.RemoveReverseBearTrapChargeable.HasSuccessfullyRemoved
// 0x0001 (0x0001 - 0x0000)
struct RemoveReverseBearTrapChargeable_HasSuccessfullyRemoved final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ThePig.ReverseBearTrapExecuteInteraction.OnSurvivorKilled
// 0x0010 (0x0010 - 0x0000)
struct ReverseBearTrapExecuteInteraction_OnSurvivorKilled final
{
public:
	class ASurvivor*                              Survivor;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          isFromExecutionZone;                               // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ThePig.SurveillancePerk.HandleGeneratorIsDamagedChanged
// 0x0010 (0x0010 - 0x0000)
struct SurveillancePerk_HandleGeneratorIsDamagedChanged final
{
public:
	class AGenerator*                             Generator;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                             Player;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ThePig.SurveillancePerk.GetGeneratorRevealTime
// 0x0004 (0x0004 - 0x0000)
struct SurveillancePerk_GetGeneratorRevealTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

