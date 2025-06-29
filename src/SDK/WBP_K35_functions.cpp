﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K35

#include "Basic.hpp"

#include "WBP_K35_classes.hpp"
#include "WBP_K35_parameters.hpp"


namespace SDK
{

// Function WBP_K35.WBP_K35_C.SetKillerData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPlayerStatusViewData&     Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_K35_C::SetKillerData(const struct FPlayerStatusViewData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K35_C", "SetKillerData");

	Params::WBP_K35_C_SetKillerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K35.WBP_K35_C.ExecuteUbergraph_WBP_K35
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K35_C::ExecuteUbergraph_WBP_K35(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K35_C", "ExecuteUbergraph_WBP_K35");

	Params::WBP_K35_C_ExecuteUbergraph_WBP_K35 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K35.WBP_K35_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_K35_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K35_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

