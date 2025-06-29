﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K30

#include "Basic.hpp"

#include "WBP_K30_classes.hpp"
#include "WBP_K30_parameters.hpp"


namespace SDK
{

// Function WBP_K30.WBP_K30_C.SetKillerData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPlayerStatusViewData&     Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_K30_C::SetKillerData(const struct FPlayerStatusViewData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K30_C", "SetKillerData");

	Params::WBP_K30_C_SetKillerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K30.WBP_K30_C.Set K30 View Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UK30StatusData*                   Killer_Data                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_K30_C::Set_K30_View_Data(class UK30StatusData* Killer_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K30_C", "Set K30 View Data");

	Params::WBP_K30_C_Set_K30_View_Data Parms{};

	Parms.Killer_Data = Killer_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K30.WBP_K30_C.ExecuteUbergraph_WBP_K30
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K30_C::ExecuteUbergraph_WBP_K30(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K30_C", "ExecuteUbergraph_WBP_K30");

	Params::WBP_K30_C_ExecuteUbergraph_WBP_K30 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

