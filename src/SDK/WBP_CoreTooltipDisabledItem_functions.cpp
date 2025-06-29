﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreTooltipDisabledItem

#include "Basic.hpp"

#include "WBP_CoreTooltipDisabledItem_classes.hpp"
#include "WBP_CoreTooltipDisabledItem_parameters.hpp"


namespace SDK
{

// Function WBP_CoreTooltipDisabledItem.WBP_CoreTooltipDisabledItem_C.ExecuteUbergraph_WBP_CoreTooltipDisabledItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreTooltipDisabledItem_C::ExecuteUbergraph_WBP_CoreTooltipDisabledItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreTooltipDisabledItem_C", "ExecuteUbergraph_WBP_CoreTooltipDisabledItem");

	Params::WBP_CoreTooltipDisabledItem_C_ExecuteUbergraph_WBP_CoreTooltipDisabledItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreTooltipDisabledItem.WBP_CoreTooltipDisabledItem_C.SetTooltipData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDisabledItemOption                     DisabledItemOption                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      DisabledMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CoreTooltipDisabledItem_C::SetTooltipData(EDisabledItemOption DisabledItemOption, const class FText& DisabledMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreTooltipDisabledItem_C", "SetTooltipData");

	Params::WBP_CoreTooltipDisabledItem_C_SetTooltipData Parms{};

	Parms.DisabledItemOption = DisabledItemOption;
	Parms.DisabledMessage = std::move(DisabledMessage);

	UObject::ProcessEvent(Func, &Parms);
}

}

