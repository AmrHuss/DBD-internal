﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_DF_Head_ACC01B

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_DF_Head_ACC01B.AB_DF_Head_ACC01B_C
// 0x0210 (0x0580 - 0x0370)
class UAB_DF_Head_ACC01B_C final : public UDynamicAccessoryAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x03A8(0x01D8)(ContainsInstancedReference)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AB_DF_Head_ACC01B(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_DF_Head_ACC01B_C">();
	}
	static class UAB_DF_Head_ACC01B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_DF_Head_ACC01B_C>();
	}
};

}

