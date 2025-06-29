﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlindnessEffect

#include "Basic.hpp"

#include "BlindnessEffect_classes.hpp"
#include "BlindnessEffect_parameters.hpp"


namespace SDK
{

// Function BlindnessEffect.BlindnessEffect_C.OnInitialized
// (Event, Public, BlueprintEvent)

void UBlindnessEffect_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlindnessEffect_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlindnessEffect.BlindnessEffect_C.ExecuteUbergraph_BlindnessEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlindnessEffect_C::ExecuteUbergraph_BlindnessEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlindnessEffect_C", "ExecuteUbergraph_BlindnessEffect");

	Params::BlindnessEffect_C_ExecuteUbergraph_BlindnessEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

