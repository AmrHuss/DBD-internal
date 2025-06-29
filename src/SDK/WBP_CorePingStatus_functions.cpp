﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePingStatus

#include "Basic.hpp"

#include "WBP_CorePingStatus_classes.hpp"
#include "WBP_CorePingStatus_parameters.hpp"


namespace SDK
{

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDBDImage*                        Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EConnectionQuality                      status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCriticalOnly                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdateVisibility(class UDBDImage* Image, EConnectionQuality status, bool IsCriticalOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdateVisibility");

	Params::WBP_CorePingStatus_C_UpdateVisibility Parms{};

	Parms.Image = Image;
	Parms.status = status;
	Parms.IsCriticalOnly = IsCriticalOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdatePing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdatePing(EConnectionQuality status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdatePing");

	Params::WBP_CorePingStatus_C_UpdatePing Parms{};

	Parms.status = status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdatePacketLoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdatePacketLoss(EConnectionQuality status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdatePacketLoss");

	Params::WBP_CorePingStatus_C_UpdatePacketLoss Parms{};

	Parms.status = status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdateKillerPing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConnectionQuality                      status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::UpdateKillerPing(EConnectionQuality status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "UpdateKillerPing");

	Params::WBP_CorePingStatus_C_UpdateKillerPing Parms{};

	Parms.status = status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetLocalPingStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const EConnectionQuality&               localPing                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::SetLocalPingStatus(const EConnectionQuality& localPing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "SetLocalPingStatus");

	Params::WBP_CorePingStatus_C_SetLocalPingStatus Parms{};

	Parms.localPing = localPing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetLocalPacketLossStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const EConnectionQuality&               localPacketLoss                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::SetLocalPacketLossStatus(const EConnectionQuality& localPacketLoss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "SetLocalPacketLossStatus");

	Params::WBP_CorePingStatus_C_SetLocalPacketLossStatus Parms{};

	Parms.localPacketLoss = localPacketLoss;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetKillerConnectionQualityStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const EConnectionQuality&               killerConnectionQuality                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::SetKillerConnectionQualityStatus(const EConnectionQuality& killerConnectionQuality)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "SetKillerConnectionQualityStatus");

	Params::WBP_CorePingStatus_C_SetKillerConnectionQualityStatus Parms{};

	Parms.killerConnectionQuality = killerConnectionQuality;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "PreConstruct");

	Params::WBP_CorePingStatus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.InitPingStatus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const int32                             numberOfSurvivors                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::InitPingStatus(const int32 numberOfSurvivors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "InitPingStatus");

	Params::WBP_CorePingStatus_C_InitPingStatus Parms{};

	Parms.numberOfSurvivors = numberOfSurvivors;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CorePingStatus.WBP_CorePingStatus_C.ExecuteUbergraph_WBP_CorePingStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CorePingStatus_C::ExecuteUbergraph_WBP_CorePingStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CorePingStatus_C", "ExecuteUbergraph_WBP_CorePingStatus");

	Params::WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

