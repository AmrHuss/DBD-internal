﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChatMessageWidget

#include "Basic.hpp"

#include "WBP_ChatMessageWidget_classes.hpp"
#include "WBP_ChatMessageWidget_parameters.hpp"


namespace SDK
{

// Function WBP_ChatMessageWidget.WBP_ChatMessageWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatMessageWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatMessageWidget_C", "PreConstruct");

	Params::WBP_ChatMessageWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChatMessageWidget.WBP_ChatMessageWidget_C.ExecuteUbergraph_WBP_ChatMessageWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatMessageWidget_C::ExecuteUbergraph_WBP_ChatMessageWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatMessageWidget_C", "ExecuteUbergraph_WBP_ChatMessageWidget");

	Params::WBP_ChatMessageWidget_C_ExecuteUbergraph_WBP_ChatMessageWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

