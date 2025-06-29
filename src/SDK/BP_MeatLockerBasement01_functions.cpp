﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeatLockerBasement01

#include "Basic.hpp"

#include "BP_MeatLockerBasement01_classes.hpp"
#include "BP_MeatLockerBasement01_parameters.hpp"


namespace SDK
{

// Function BP_MeatLockerBasement01.BP_MeatLockerBasement01_C.Cosmetic_SetAsScourgeHookStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ABP_MeatLockerBasement01_C::Cosmetic_SetAsScourgeHookStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement01_C", "Cosmetic_SetAsScourgeHookStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MeatLockerBasement01.BP_MeatLockerBasement01_C.ExecuteUbergraph_BP_MeatLockerBasement01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MeatLockerBasement01_C::ExecuteUbergraph_BP_MeatLockerBasement01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement01_C", "ExecuteUbergraph_BP_MeatLockerBasement01");

	Params::BP_MeatLockerBasement01_C_ExecuteUbergraph_BP_MeatLockerBasement01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MeatLockerBasement01.BP_MeatLockerBasement01_C.GetAnimInstance
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimInstance*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UAnimInstance* ABP_MeatLockerBasement01_C::GetAnimInstance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement01_C", "GetAnimInstance");

	Params::BP_MeatLockerBasement01_C_GetAnimInstance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeatLockerBasement01.BP_MeatLockerBasement01_C.GetEntity
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEntity*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AEntity* ABP_MeatLockerBasement01_C::GetEntity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement01_C", "GetEntity");

	Params::BP_MeatLockerBasement01_C_GetEntity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeatLockerBasement01.BP_MeatLockerBasement01_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent**          Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MeatLockerBasement01_C::GetMesh(class USkeletalMeshComponent** Mesh) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeatLockerBasement01_C", "GetMesh");

	Params::BP_MeatLockerBasement01_C_GetMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}

}

