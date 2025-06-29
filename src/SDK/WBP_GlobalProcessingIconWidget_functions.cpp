﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GlobalProcessingIconWidget

#include "Basic.hpp"

#include "WBP_GlobalProcessingIconWidget_classes.hpp"
#include "WBP_GlobalProcessingIconWidget_parameters.hpp"


namespace SDK
{

// Function WBP_GlobalProcessingIconWidget.WBP_GlobalProcessingIconWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GlobalProcessingIconWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalProcessingIconWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GlobalProcessingIconWidget.WBP_GlobalProcessingIconWidget_C.ExecuteUbergraph_WBP_GlobalProcessingIconWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalProcessingIconWidget_C::ExecuteUbergraph_WBP_GlobalProcessingIconWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalProcessingIconWidget_C", "ExecuteUbergraph_WBP_GlobalProcessingIconWidget");

	Params::WBP_GlobalProcessingIconWidget_C_ExecuteUbergraph_WBP_GlobalProcessingIconWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalProcessingIconWidget.WBP_GlobalProcessingIconWidget_C.SetGlobalLoadingIconVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalProcessingIconWidget_C::SetGlobalLoadingIconVisibility(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalProcessingIconWidget_C", "SetGlobalLoadingIconVisibility");

	Params::WBP_GlobalProcessingIconWidget_C_SetGlobalLoadingIconVisibility Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalProcessingIconWidget.WBP_GlobalProcessingIconWidget_C.SetGlobalSavingIconVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalProcessingIconWidget_C::SetGlobalSavingIconVisibility(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalProcessingIconWidget_C", "SetGlobalSavingIconVisibility");

	Params::WBP_GlobalProcessingIconWidget_C_SetGlobalSavingIconVisibility Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalProcessingIconWidget.WBP_GlobalProcessingIconWidget_C.SetProcessingIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalProcessingIconWidget_C::SetProcessingIconVisibility(class UWidget* Icon, bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalProcessingIconWidget_C", "SetProcessingIconVisibility");

	Params::WBP_GlobalProcessingIconWidget_C_SetProcessingIconVisibility Parms{};

	Parms.Icon = Icon;
	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

