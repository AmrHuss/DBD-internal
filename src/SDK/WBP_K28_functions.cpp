﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K28

#include "Basic.hpp"

#include "WBP_K28_classes.hpp"
#include "WBP_K28_parameters.hpp"


namespace SDK
{

// Function WBP_K28.WBP_K28_C.SetWarningThreshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  progressPercentage                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TransitionToNighttimeChanged                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TransitionToDaytimeChanged                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDaytime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsNighttime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K28_C::SetWarningThreshold(double progressPercentage, bool TransitionToNighttimeChanged, bool TransitionToDaytimeChanged, bool IsDaytime, bool IsNighttime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "SetWarningThreshold");

	Params::WBP_K28_C_SetWarningThreshold Parms{};

	Parms.progressPercentage = progressPercentage;
	Parms.TransitionToNighttimeChanged = TransitionToNighttimeChanged;
	Parms.TransitionToDaytimeChanged = TransitionToDaytimeChanged;
	Parms.IsDaytime = IsDaytime;
	Parms.IsNighttime = IsNighttime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.SetNightTimerProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsNighttime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NightCycleProgress                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K28_C::SetNightTimerProgress(bool IsNighttime, double NightCycleProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "SetNightTimerProgress");

	Params::WBP_K28_C_SetNightTimerProgress Parms{};

	Parms.IsNighttime = IsNighttime;
	Parms.NightCycleProgress = NightCycleProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.SetNightBuildUpProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDaytime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DayCycleProgress                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K28_C::SetNightBuildUpProgress(bool IsDaytime, double DayCycleProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "SetNightBuildUpProgress");

	Params::WBP_K28_C_SetNightBuildUpProgress Parms{};

	Parms.IsDaytime = IsDaytime;
	Parms.DayCycleProgress = DayCycleProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.SetKillerData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPlayerStatusViewData&     Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_K28_C::SetKillerData(const struct FPlayerStatusViewData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "SetKillerData");

	Params::WBP_K28_C_SetKillerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.SetKiller
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UK28StatusData*                   StatusData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    TransitionToNighttimeChanged                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TransitionToDaytimeChanged                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K28_C::SetKiller(class UK28StatusData* StatusData, bool TransitionToNighttimeChanged, bool TransitionToDaytimeChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "SetKiller");

	Params::WBP_K28_C_SetKiller Parms{};

	Parms.StatusData = StatusData;
	Parms.TransitionToNighttimeChanged = TransitionToNighttimeChanged;
	Parms.TransitionToDaytimeChanged = TransitionToDaytimeChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.SetK28Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UK28StatusData*                   K28_Status_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    isLocalKiller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K28_C::SetK28Data(class UK28StatusData* K28_Status_Data, bool isLocalKiller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "SetK28Data");

	Params::WBP_K28_C_SetK28Data Parms{};

	Parms.K28_Status_Data = K28_Status_Data;
	Parms.isLocalKiller = isLocalKiller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.Set Survivor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UK28StatusData*                   StatusData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    TransitionToNighttimeChanged                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TransitionToDaytimeChanged                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K28_C::Set_Survivor(class UK28StatusData* StatusData, bool TransitionToNighttimeChanged, bool TransitionToDaytimeChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "Set Survivor");

	Params::WBP_K28_C_Set_Survivor Parms{};

	Parms.StatusData = StatusData;
	Parms.TransitionToNighttimeChanged = TransitionToNighttimeChanged;
	Parms.TransitionToDaytimeChanged = TransitionToDaytimeChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.ResetTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_K28_C::ResetTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "ResetTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K28.WBP_K28_C.ResetMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_K28_C::ResetMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "ResetMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K28.WBP_K28_C.ResetBuildUp
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_K28_C::ResetBuildUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "ResetBuildUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K28.WBP_K28_C.Play Timer Warning
// (BlueprintCallable, BlueprintEvent)

void UWBP_K28_C::Play_Timer_Warning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "Play Timer Warning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K28.WBP_K28_C.Play Build Up Warning
// (BlueprintCallable, BlueprintEvent)

void UWBP_K28_C::Play_Build_Up_Warning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "Play Build Up Warning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K28.WBP_K28_C.Finished_B8FAF99D481E4E5F354A45B22800170E
// (BlueprintCallable, BlueprintEvent)

void UWBP_K28_C::Finished_B8FAF99D481E4E5F354A45B22800170E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "Finished_B8FAF99D481E4E5F354A45B22800170E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K28.WBP_K28_C.Finished_5749240F4E36D543BC12B4A879D32A09
// (BlueprintCallable, BlueprintEvent)

void UWBP_K28_C::Finished_5749240F4E36D543BC12B4A879D32A09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "Finished_5749240F4E36D543BC12B4A879D32A09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K28.WBP_K28_C.ExecuteUbergraph_WBP_K28
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K28_C::ExecuteUbergraph_WBP_K28(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "ExecuteUbergraph_WBP_K28");

	Params::WBP_K28_C_ExecuteUbergraph_WBP_K28 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K28.WBP_K28_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_K28_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K28_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

