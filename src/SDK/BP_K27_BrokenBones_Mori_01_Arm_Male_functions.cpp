﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_K27_BrokenBones_Mori_01_Arm_Male

#include "Basic.hpp"

#include "BP_K27_BrokenBones_Mori_01_Arm_Male_classes.hpp"
#include "BP_K27_BrokenBones_Mori_01_Arm_Male_parameters.hpp"


namespace SDK
{

// Function BP_K27_BrokenBones_Mori_01_Arm_Male.BP_K27_BrokenBones_Mori_01_Arm_Male_C.ExecuteUbergraph_BP_K27_BrokenBones_Mori_01_Arm_Male
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_K27_BrokenBones_Mori_01_Arm_Male_C::ExecuteUbergraph_BP_K27_BrokenBones_Mori_01_Arm_Male(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_K27_BrokenBones_Mori_01_Arm_Male_C", "ExecuteUbergraph_BP_K27_BrokenBones_Mori_01_Arm_Male");

	Params::BP_K27_BrokenBones_Mori_01_Arm_Male_C_ExecuteUbergraph_BP_K27_BrokenBones_Mori_01_Arm_Male Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_K27_BrokenBones_Mori_01_Arm_Male.BP_K27_BrokenBones_Mori_01_Arm_Male_C.Spawn_BoneOnCamper_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_K27_BrokenBones_Mori_01_Arm_Male_C::Spawn_BoneOnCamper_01(class USkeletalMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_K27_BrokenBones_Mori_01_Arm_Male_C", "Spawn_BoneOnCamper_01");

	Params::BP_K27_BrokenBones_Mori_01_Arm_Male_C_Spawn_BoneOnCamper_01 Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}

}

