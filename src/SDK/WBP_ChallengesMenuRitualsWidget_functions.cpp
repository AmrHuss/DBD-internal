﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengesMenuRitualsWidget

#include "Basic.hpp"

#include "WBP_ChallengesMenuRitualsWidget_classes.hpp"
#include "WBP_ChallengesMenuRitualsWidget_parameters.hpp"


namespace SDK
{

// Function WBP_ChallengesMenuRitualsWidget.WBP_ChallengesMenuRitualsWidget_C.ExecuteUbergraph_WBP_ChallengesMenuRitualsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengesMenuRitualsWidget_C::ExecuteUbergraph_WBP_ChallengesMenuRitualsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuRitualsWidget_C", "ExecuteUbergraph_WBP_ChallengesMenuRitualsWidget");

	Params::WBP_ChallengesMenuRitualsWidget_C_ExecuteUbergraph_WBP_ChallengesMenuRitualsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChallengesMenuRitualsWidget.WBP_ChallengesMenuRitualsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengesMenuRitualsWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChallengesMenuRitualsWidget_C", "PreConstruct");

	Params::WBP_ChallengesMenuRitualsWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

