﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreInputPrompt_MovementThumbstick

#include "Basic.hpp"

#include "WBP_CoreInputPrompt_MovementThumbstick_classes.hpp"
#include "WBP_CoreInputPrompt_MovementThumbstick_parameters.hpp"


namespace SDK
{

// Function WBP_CoreInputPrompt_MovementThumbstick.WBP_CoreInputPrompt_MovementThumbstick_C.ExecuteUbergraph_WBP_CoreInputPrompt_MovementThumbstick
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreInputPrompt_MovementThumbstick_C::ExecuteUbergraph_WBP_CoreInputPrompt_MovementThumbstick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreInputPrompt_MovementThumbstick_C", "ExecuteUbergraph_WBP_CoreInputPrompt_MovementThumbstick");

	Params::WBP_CoreInputPrompt_MovementThumbstick_C_ExecuteUbergraph_WBP_CoreInputPrompt_MovementThumbstick Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreInputPrompt_MovementThumbstick.WBP_CoreInputPrompt_MovementThumbstick_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreInputPrompt_MovementThumbstick_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreInputPrompt_MovementThumbstick_C", "PreConstruct");

	Params::WBP_CoreInputPrompt_MovementThumbstick_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

