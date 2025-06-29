﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreHudRoot

#include "Basic.hpp"

#include "WBP_CoreHudRoot_classes.hpp"
#include "WBP_CoreHudRoot_parameters.hpp"


namespace SDK
{

// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.SetWidgetsVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHudRoot_C::SetWidgetsVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "SetWidgetsVisibility");

	Params::WBP_CoreHudRoot_C_SetWidgetsVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.ScalePadding
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreHudRoot_C::ScalePadding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "ScalePadding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHudRoot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "PreConstruct");

	Params::WBP_CoreHudRoot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.OnFadeOutCompleted
// (BlueprintCallable, BlueprintEvent)

void UWBP_CoreHudRoot_C::OnFadeOutCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "OnFadeOutCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.FadeOutWidgets
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreHudRoot_C::FadeOutWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "FadeOutWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.FadeInWidgets
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreHudRoot_C::FadeInWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "FadeInWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.ExecuteUbergraph_WBP_CoreHudRoot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHudRoot_C::ExecuteUbergraph_WBP_CoreHudRoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "ExecuteUbergraph_WBP_CoreHudRoot");

	Params::WBP_CoreHudRoot_C_ExecuteUbergraph_WBP_CoreHudRoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHudRoot.WBP_CoreHudRoot_C.ApplyConstrainedAspectRatio
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    isConstrained                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AspectRatio                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHudRoot_C::ApplyConstrainedAspectRatio(bool isConstrained, float AspectRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHudRoot_C", "ApplyConstrainedAspectRatio");

	Params::WBP_CoreHudRoot_C_ApplyConstrainedAspectRatio Parms{};

	Parms.isConstrained = isConstrained;
	Parms.AspectRatio = AspectRatio;

	UObject::ProcessEvent(Func, &Parms);
}

}

