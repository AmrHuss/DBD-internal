﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePower

#include "Basic.hpp"

#include "WBP_CorePower_classes.hpp"
#include "WBP_CorePower_parameters.hpp"


namespace SDK
{

// Function WBP_CorePower.WBP_CorePower_C.UpdateInputPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CorePower_C::UpdateInputPrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "UpdateInputPrompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CorePower.WBP_CorePower_C.SetStackCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CorePower_C::SetStackCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "SetStackCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CorePower.WBP_CorePower_C.SetRechargeableIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CorePower_C::SetRechargeableIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "SetRechargeableIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CorePower.WBP_CorePower_C.SetProgressBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CorePower_C::SetProgressBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "SetProgressBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CorePower.WBP_CorePower_C.SetInputVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CorePower_C::SetInputVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "SetInputVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CorePower.WBP_CorePower_C.SetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPowerViewData&            PowerViewData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CorePower_C::SetData(const struct FPowerViewData& PowerViewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "SetData");

	Params::WBP_CorePower_C_SetData Parms{};

	Parms.PowerViewData = std::move(PowerViewData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePower.WBP_CorePower_C.SetActiveState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePower_C::SetActiveState(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "SetActiveState");

	Params::WBP_CorePower_C_SetActiveState Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePower.WBP_CorePower_C.SelectProgressBarColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProgressValueDisplayColor              ProgressValueDisplayColor                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*                    progressBarColor                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePower_C::SelectProgressBarColor(EProgressValueDisplayColor ProgressValueDisplayColor, struct FLinearColor* progressBarColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "SelectProgressBarColor");

	Params::WBP_CorePower_C_SelectProgressBarColor Parms{};

	Parms.ProgressValueDisplayColor = ProgressValueDisplayColor;

	UObject::ProcessEvent(Func, &Parms);

	if (progressBarColor != nullptr)
		*progressBarColor = std::move(Parms.progressBarColor);
}


// Function WBP_CorePower.WBP_CorePower_C.IconUpdateAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CorePower_C::IconUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "IconUpdateAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CorePower.WBP_CorePower_C.Get Power Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPowerViewData*                  NewParam                                               (Parm, OutParm)

void UWBP_CorePower_C::Get_Power_Data(struct FPowerViewData* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "Get Power Data");

	Params::WBP_CorePower_C_Get_Power_Data Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function WBP_CorePower.WBP_CorePower_C.ExecuteUbergraph_WBP_CorePower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePower_C::ExecuteUbergraph_WBP_CorePower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "ExecuteUbergraph_WBP_CorePower");

	Params::WBP_CorePower_C_ExecuteUbergraph_WBP_CorePower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePower.WBP_CorePower_C.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CorePower_C::ClearData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePower_C", "ClearData");

	UObject::ProcessEvent(Func, nullptr);
}

}

