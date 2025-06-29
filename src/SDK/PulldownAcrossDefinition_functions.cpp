﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PulldownAcrossDefinition

#include "Basic.hpp"

#include "PulldownAcrossDefinition_classes.hpp"
#include "PulldownAcrossDefinition_parameters.hpp"


namespace SDK
{

// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.OnInteractionUpdateTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPulldownAcrossDefinition_C::OnInteractionUpdateTick(class ADBDPlayer* Player, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "OnInteractionUpdateTick");

	Params::PulldownAcrossDefinition_C_OnInteractionUpdateTick Parms{};

	Parms.Player = Player;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.OnInteractionUpdateStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPulldownAcrossDefinition_C::OnInteractionUpdateStart(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "OnInteractionUpdateStart");

	Params::PulldownAcrossDefinition_C_OnInteractionUpdateStart Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.OnInteractionUpdateEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPulldownAcrossDefinition_C::OnInteractionUpdateEnd(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "OnInteractionUpdateEnd");

	Params::PulldownAcrossDefinition_C_OnInteractionUpdateEnd Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.OnInteractionEnterStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   actualSnapTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPulldownAcrossDefinition_C::OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "OnInteractionEnterStart");

	Params::PulldownAcrossDefinition_C_OnInteractionEnterStart Parms{};

	Parms.Player = Player;
	Parms.actualSnapTime = actualSnapTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.ExecuteUbergraph_PulldownAcrossDefinition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPulldownAcrossDefinition_C::ExecuteUbergraph_PulldownAcrossDefinition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "ExecuteUbergraph_PulldownAcrossDefinition");

	Params::PulldownAcrossDefinition_C_ExecuteUbergraph_PulldownAcrossDefinition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.IsInteractionPossibleClient
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   interactionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPulldownAcrossDefinition_C::IsInteractionPossibleClient(const class ADBDPlayer* Player, EInputInteractionType interactionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "IsInteractionPossibleClient");

	Params::PulldownAcrossDefinition_C_IsInteractionPossibleClient Parms{};

	Parms.Player = Player;
	Parms.interactionType = interactionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.IsInteractionPossibleBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   interactionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPulldownAcrossDefinition_C::IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType interactionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "IsInteractionPossibleBP");

	Params::PulldownAcrossDefinition_C_IsInteractionPossibleBP Parms{};

	Parms.Player = Player;
	Parms.interactionType = interactionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.GetSnapTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPulldownAcrossDefinition_C::GetSnapTime(const class ADBDPlayer* Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "GetSnapTime");

	Params::PulldownAcrossDefinition_C_GetSnapTime Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PulldownAcrossDefinition.PulldownAcrossDefinition_C.GetPulldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APallet**                         PullDown                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPulldownAcrossDefinition_C::GetPulldown(class APallet** PullDown) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PulldownAcrossDefinition_C", "GetPulldown");

	Params::PulldownAcrossDefinition_C_GetPulldown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PullDown != nullptr)
		*PullDown = Parms.PullDown;
}

}

