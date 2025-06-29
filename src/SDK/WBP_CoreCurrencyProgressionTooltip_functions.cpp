﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCurrencyProgressionTooltip

#include "Basic.hpp"

#include "WBP_CoreCurrencyProgressionTooltip_classes.hpp"
#include "WBP_CoreCurrencyProgressionTooltip_parameters.hpp"


namespace SDK
{

// Function WBP_CoreCurrencyProgressionTooltip.WBP_CoreCurrencyProgressionTooltip_C.ExecuteUbergraph_WBP_CoreCurrencyProgressionTooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCurrencyProgressionTooltip_C::ExecuteUbergraph_WBP_CoreCurrencyProgressionTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCurrencyProgressionTooltip_C", "ExecuteUbergraph_WBP_CoreCurrencyProgressionTooltip");

	Params::WBP_CoreCurrencyProgressionTooltip_C_ExecuteUbergraph_WBP_CoreCurrencyProgressionTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCurrencyProgressionTooltip.WBP_CoreCurrencyProgressionTooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCurrencyProgressionTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCurrencyProgressionTooltip_C", "PreConstruct");

	Params::WBP_CoreCurrencyProgressionTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

