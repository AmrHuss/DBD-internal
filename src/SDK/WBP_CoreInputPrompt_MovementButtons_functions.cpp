﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreInputPrompt_MovementButtons

#include "Basic.hpp"

#include "WBP_CoreInputPrompt_MovementButtons_classes.hpp"
#include "WBP_CoreInputPrompt_MovementButtons_parameters.hpp"


namespace SDK
{

// Function WBP_CoreInputPrompt_MovementButtons.WBP_CoreInputPrompt_MovementButtons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreInputPrompt_MovementButtons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreInputPrompt_MovementButtons_C", "PreConstruct");

	Params::WBP_CoreInputPrompt_MovementButtons_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreInputPrompt_MovementButtons.WBP_CoreInputPrompt_MovementButtons_C.ExecuteUbergraph_WBP_CoreInputPrompt_MovementButtons
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreInputPrompt_MovementButtons_C::ExecuteUbergraph_WBP_CoreInputPrompt_MovementButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreInputPrompt_MovementButtons_C", "ExecuteUbergraph_WBP_CoreInputPrompt_MovementButtons");

	Params::WBP_CoreInputPrompt_MovementButtons_C_ExecuteUbergraph_WBP_CoreInputPrompt_MovementButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

