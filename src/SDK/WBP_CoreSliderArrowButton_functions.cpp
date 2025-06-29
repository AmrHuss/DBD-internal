﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSliderArrowButton

#include "Basic.hpp"

#include "WBP_CoreSliderArrowButton_classes.hpp"
#include "WBP_CoreSliderArrowButton_parameters.hpp"


namespace SDK
{

// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CoreSliderArrowButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.ExecuteUbergraph_WBP_CoreSliderArrowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSliderArrowButton_C::ExecuteUbergraph_WBP_CoreSliderArrowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "ExecuteUbergraph_WBP_CoreSliderArrowButton");

	Params::WBP_CoreSliderArrowButton_C_ExecuteUbergraph_WBP_CoreSliderArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnAlignmentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETextJustify                            newAlignment                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSliderArrowButton_C::OnAlignmentChanged(ETextJustify newAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "OnAlignmentChanged");

	Params::WBP_CoreSliderArrowButton_C_OnAlignmentChanged Parms{};

	Parms.newAlignment = newAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreSliderArrowButton_C::OnEnabledChanged(bool IsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "OnEnabledChanged");

	Params::WBP_CoreSliderArrowButton_C_OnEnabledChanged Parms{};

	Parms.IsEnabled_0 = IsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UWBP_CoreSliderArrowButton_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnPressed
// (Event, Protected, BlueprintEvent)

void UWBP_CoreSliderArrowButton_C::OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnReleased
// (Event, Protected, BlueprintEvent)

void UWBP_CoreSliderArrowButton_C::OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreSliderArrowButton.WBP_CoreSliderArrowButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UWBP_CoreSliderArrowButton_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreSliderArrowButton_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

}

