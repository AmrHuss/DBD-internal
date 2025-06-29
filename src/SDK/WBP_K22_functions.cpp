﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K22

#include "Basic.hpp"

#include "WBP_K22_classes.hpp"
#include "WBP_K22_parameters.hpp"


namespace SDK
{

// Function WBP_K22.WBP_K22_C.SetTwinsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K22_C::SetTwinsVisibility(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K22_C", "SetTwinsVisibility");

	Params::WBP_K22_C_SetTwinsVisibility Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K22.WBP_K22_C.SetTwinsData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTwinsStatusData*                 KillerData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_K22_C::SetTwinsData(class UTwinsStatusData* KillerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K22_C", "SetTwinsData");

	Params::WBP_K22_C_SetTwinsData Parms{};

	Parms.KillerData = KillerData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K22.WBP_K22_C.SetKillerData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPlayerStatusViewData&     Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_K22_C::SetKillerData(const struct FPlayerStatusViewData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K22_C", "SetKillerData");

	Params::WBP_K22_C_SetKillerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K22.WBP_K22_C.ExecuteUbergraph_WBP_K22
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K22_C::ExecuteUbergraph_WBP_K22(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K22_C", "ExecuteUbergraph_WBP_K22");

	Params::WBP_K22_C_ExecuteUbergraph_WBP_K22 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K22.WBP_K22_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_K22_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K22_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

