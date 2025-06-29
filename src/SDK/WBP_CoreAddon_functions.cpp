﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreAddon

#include "Basic.hpp"

#include "WBP_CoreAddon_classes.hpp"
#include "WBP_CoreAddon_parameters.hpp"


namespace SDK
{

// Function WBP_CoreAddon.WBP_CoreAddon_C.StopHaloPulseAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreAddon_C::StopHaloPulseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAddon_C", "StopHaloPulseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreAddon.WBP_CoreAddon_C.SetStatusEffect
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatusEffectType                       StatusEffectType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreAddon_C::SetStatusEffect(EStatusEffectType StatusEffectType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAddon_C", "SetStatusEffect");

	Params::WBP_CoreAddon_C_SetStatusEffect Parms{};

	Parms.StatusEffectType = StatusEffectType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreAddon.WBP_CoreAddon_C.SetStackCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StackCount_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELoadoutPartState                       State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreAddon_C::SetStackCount(int32 StackCount_0, ELoadoutPartState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAddon_C", "SetStackCount");

	Params::WBP_CoreAddon_C_SetStackCount Parms{};

	Parms.StackCount_0 = StackCount_0;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreAddon.WBP_CoreAddon_C.SetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FAddonViewData&            BaseLoadoutPartViewData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoreAddon_C::SetData(const struct FAddonViewData& BaseLoadoutPartViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAddon_C", "SetData");

	Params::WBP_CoreAddon_C_SetData Parms{};

	Parms.BaseLoadoutPartViewData = std::move(BaseLoadoutPartViewData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreAddon.WBP_CoreAddon_C.Set Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double&                                 Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreAddon_C::Set_Progress(double& Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAddon_C", "Set Progress");

	Params::WBP_CoreAddon_C_Set_Progress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

	Progress = Parms.Progress;
}


// Function WBP_CoreAddon.WBP_CoreAddon_C.ExecuteUbergraph_WBP_CoreAddon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreAddon_C::ExecuteUbergraph_WBP_CoreAddon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAddon_C", "ExecuteUbergraph_WBP_CoreAddon");

	Params::WBP_CoreAddon_C_ExecuteUbergraph_WBP_CoreAddon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreAddon.WBP_CoreAddon_C.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreAddon_C::ClearData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreAddon_C", "ClearData");

	UObject::ProcessEvent(Func, nullptr);
}

}

