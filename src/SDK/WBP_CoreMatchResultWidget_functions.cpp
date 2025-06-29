﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreMatchResultWidget

#include "Basic.hpp"

#include "WBP_CoreMatchResultWidget_classes.hpp"
#include "WBP_CoreMatchResultWidget_parameters.hpp"


namespace SDK
{

// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.UpdateWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FMatchResultViewData&      Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_CoreMatchResultWidget_C::UpdateWidget(const struct FMatchResultViewData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreMatchResultWidget_C", "UpdateWidget");

	Params::WBP_CoreMatchResultWidget_C_UpdateWidget Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.SetMatchResultText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      resultText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CoreMatchResultWidget_C::SetMatchResultText(const class FText& resultText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreMatchResultWidget_C", "SetMatchResultText");

	Params::WBP_CoreMatchResultWidget_C_SetMatchResultText Parms{};

	Parms.resultText = std::move(resultText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FMatchResultViewData&      Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CoreMatchResultWidget_C::SetData(const struct FMatchResultViewData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreMatchResultWidget_C", "SetData");

	Params::WBP_CoreMatchResultWidget_C_SetData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.PlayAnimationSequence
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreMatchResultWidget_C::PlayAnimationSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreMatchResultWidget_C", "PlayAnimationSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.OnFadeInCompleted
// (BlueprintCallable, BlueprintEvent)

void UWBP_CoreMatchResultWidget_C::OnFadeInCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreMatchResultWidget_C", "OnFadeInCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreMatchResultWidget.WBP_CoreMatchResultWidget_C.ExecuteUbergraph_WBP_CoreMatchResultWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreMatchResultWidget_C::ExecuteUbergraph_WBP_CoreMatchResultWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreMatchResultWidget_C", "ExecuteUbergraph_WBP_CoreMatchResultWidget");

	Params::WBP_CoreMatchResultWidget_C_ExecuteUbergraph_WBP_CoreMatchResultWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

