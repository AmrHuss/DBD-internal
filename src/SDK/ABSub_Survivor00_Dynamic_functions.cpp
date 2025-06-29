﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABSub_Survivor00_Dynamic

#include "Basic.hpp"

#include "ABSub_Survivor00_Dynamic_classes.hpp"
#include "ABSub_Survivor00_Dynamic_parameters.hpp"


namespace SDK
{

// Function ABSub_Survivor00_Dynamic.ABSub_Survivor00_Dynamic_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABSub_Survivor00_Dynamic_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABSub_Survivor00_Dynamic_C", "AnimGraph");

	Params::ABSub_Survivor00_Dynamic_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABSub_Survivor00_Dynamic.ABSub_Survivor00_Dynamic_C.ExecuteUbergraph_ABSub_Survivor00_Dynamic
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABSub_Survivor00_Dynamic_C::ExecuteUbergraph_ABSub_Survivor00_Dynamic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABSub_Survivor00_Dynamic_C", "ExecuteUbergraph_ABSub_Survivor00_Dynamic");

	Params::ABSub_Survivor00_Dynamic_C_ExecuteUbergraph_ABSub_Survivor00_Dynamic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

