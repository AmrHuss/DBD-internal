﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCircularProgressBar

#include "Basic.hpp"

#include "WBP_CoreCircularProgressBar_classes.hpp"
#include "WBP_CoreCircularProgressBar_parameters.hpp"


namespace SDK
{

// Function WBP_CoreCircularProgressBar.WBP_CoreCircularProgressBar_C.UpdateWidget
// (BlueprintCallable, BlueprintEvent)

void UWBP_CoreCircularProgressBar_C::UpdateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCircularProgressBar_C", "UpdateWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreCircularProgressBar.WBP_CoreCircularProgressBar_C.SetFillAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           imageWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  fillAmountf                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCircularProgressBar_C::SetFillAmount(class UImage* imageWidget, double fillAmountf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCircularProgressBar_C", "SetFillAmount");

	Params::WBP_CoreCircularProgressBar_C_SetFillAmount Parms{};

	Parms.imageWidget = imageWidget;
	Parms.fillAmountf = fillAmountf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCircularProgressBar.WBP_CoreCircularProgressBar_C.SetFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           imageWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCircularProgressBar_C::SetFill(class UImage* imageWidget, double Percent, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCircularProgressBar_C", "SetFill");

	Params::WBP_CoreCircularProgressBar_C_SetFill Parms{};

	Parms.imageWidget = imageWidget;
	Parms.Percent = Percent;
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCircularProgressBar.WBP_CoreCircularProgressBar_C.SetBase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           imageWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCircularProgressBar_C::SetBase(class UImage* imageWidget, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCircularProgressBar_C", "SetBase");

	Params::WBP_CoreCircularProgressBar_C_SetBase Parms{};

	Parms.imageWidget = imageWidget;
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCircularProgressBar.WBP_CoreCircularProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCircularProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCircularProgressBar_C", "PreConstruct");

	Params::WBP_CoreCircularProgressBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCircularProgressBar.WBP_CoreCircularProgressBar_C.ExecuteUbergraph_WBP_CoreCircularProgressBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCircularProgressBar_C::ExecuteUbergraph_WBP_CoreCircularProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCircularProgressBar_C", "ExecuteUbergraph_WBP_CoreCircularProgressBar");

	Params::WBP_CoreCircularProgressBar_C_ExecuteUbergraph_WBP_CoreCircularProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

