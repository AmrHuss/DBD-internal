﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Survivor00_Lantern_AnimInstance

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Firefly_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Survivor00_Lantern_AnimInstance.AB_Survivor00_Lantern_AnimInstance_C
// 0x07B0 (0x0DC0 - 0x0610)
class UAB_Survivor00_Lantern_AnimInstance_C final : public UFireflySurvivorAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0618(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0620(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0628(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0648(0x00D0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0718(0x0108)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0820(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0848(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0870(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0898(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x08C0(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0908(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x09E8(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0A18(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0A38(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0A80(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0B60(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0B90(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0BB0(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0BE0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0C00(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0CC8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0CE8(0x00D0)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void AnimNotify_InteractionUpperBody2LayerDone();
	void ExecuteUbergraph_AB_Survivor00_Lantern_AnimInstance(int32 EntryPoint);
	void Survivor_InteractionUpperBody2_Layer(const struct FPoseLink& InPose, struct FPoseLink* Survivor_InteractionUpperBody2_Layer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Survivor00_Lantern_AnimInstance_C">();
	}
	static class UAB_Survivor00_Lantern_AnimInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Survivor00_Lantern_AnimInstance_C>();
	}
};

}

