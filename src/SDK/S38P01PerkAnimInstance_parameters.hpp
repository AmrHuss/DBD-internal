﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S38P01PerkAnimInstance

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function S38P01PerkAnimInstance.S38P01PerkAnimInstance_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct S38P01PerkAnimInstance_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function S38P01PerkAnimInstance.S38P01PerkAnimInstance_C.ExecuteUbergraph_S38P01PerkAnimInstance
// 0x0004 (0x0004 - 0x0000)
struct S38P01PerkAnimInstance_C_ExecuteUbergraph_S38P01PerkAnimInstance final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function S38P01PerkAnimInstance.S38P01PerkAnimInstance_C.Survivor_Perk_Layer
// 0x0020 (0x0020 - 0x0000)
struct S38P01PerkAnimInstance_C_Survivor_Perk_Layer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Survivor_Perk_Layer_0;                             // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

}

