﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSelectionArrowInputSwitcher

#include "Basic.hpp"

#include "WBP_CoreSelectionArrowInputSwitcher_classes.hpp"
#include "WBP_CoreSelectionArrowInputSwitcher_parameters.hpp"


namespace SDK
{

// Function WBP_CoreSelectionArrowInputSwitcher.WBP_CoreSelectionArrowInputSwitcher_C.ExecuteUbergraph_WBP_CoreSelectionArrowInputSwitcher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSelectionArrowInputSwitcher_C::ExecuteUbergraph_WBP_CoreSelectionArrowInputSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSelectionArrowInputSwitcher_C", "ExecuteUbergraph_WBP_CoreSelectionArrowInputSwitcher");

	Params::WBP_CoreSelectionArrowInputSwitcher_C_ExecuteUbergraph_WBP_CoreSelectionArrowInputSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSelectionArrowInputSwitcher.WBP_CoreSelectionArrowInputSwitcher_C.OnAlignmentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETextJustify                            newAlignment                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSelectionArrowInputSwitcher_C::OnAlignmentChanged(ETextJustify newAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSelectionArrowInputSwitcher_C", "OnAlignmentChanged");

	Params::WBP_CoreSelectionArrowInputSwitcher_C_OnAlignmentChanged Parms{};

	Parms.newAlignment = newAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSelectionArrowInputSwitcher.WBP_CoreSelectionArrowInputSwitcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSelectionArrowInputSwitcher_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSelectionArrowInputSwitcher_C", "PreConstruct");

	Params::WBP_CoreSelectionArrowInputSwitcher_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

