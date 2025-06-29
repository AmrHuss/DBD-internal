﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Cage_Calamari_01

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Cage_Calamari_01.AB_Cage_Calamari_01_C
// 0x00D0 (0x0420 - 0x0350)
class UAB_Cage_Calamari_01_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0388(0x0050)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x03D8(0x0048)()

public:
	void ExecuteUbergraph_AB_Cage_Calamari_01(int32 EntryPoint);
	void AnimNotify_FX_DeathBed_Dissolve();
	void AnimNotify_DeathBedResuce_CameraReset();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Cage_Calamari_01_C">();
	}
	static class UAB_Cage_Calamari_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Cage_Calamari_01_C>();
	}
};

}

