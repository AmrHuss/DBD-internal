﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosetExitSwing

#include "Basic.hpp"

#include "ClosetExitSwing_classes.hpp"
#include "ClosetExitSwing_parameters.hpp"


namespace SDK
{

// Function ClosetExitSwing.ClosetExitSwing_C.OnInteractionUpdateStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UClosetExitSwing_C::OnInteractionUpdateStart(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetExitSwing_C", "OnInteractionUpdateStart");

	Params::ClosetExitSwing_C_OnInteractionUpdateStart Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClosetExitSwing.ClosetExitSwing_C.OnInteractionFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    hasInteractionStarted                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClosetExitSwing_C::OnInteractionFinished(class ADBDPlayer* Player, bool hasInteractionStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetExitSwing_C", "OnInteractionFinished");

	Params::ClosetExitSwing_C_OnInteractionFinished Parms{};

	Parms.Player = Player;
	Parms.hasInteractionStarted = hasInteractionStarted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClosetExitSwing.ClosetExitSwing_C.ExecuteUbergraph_ClosetExitSwing
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClosetExitSwing_C::ExecuteUbergraph_ClosetExitSwing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetExitSwing_C", "ExecuteUbergraph_ClosetExitSwing");

	Params::ClosetExitSwing_C_ExecuteUbergraph_ClosetExitSwing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClosetExitSwing.ClosetExitSwing_C.EndPerformingHeadOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UClosetExitSwing_C::EndPerformingHeadOn(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetExitSwing_C", "EndPerformingHeadOn");

	Params::ClosetExitSwing_C_EndPerformingHeadOn Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClosetExitSwing.ClosetExitSwing_C.IsInteractionPossibleBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   interactionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UClosetExitSwing_C::IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType interactionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetExitSwing_C", "IsInteractionPossibleBP");

	Params::ClosetExitSwing_C_IsInteractionPossibleBP Parms{};

	Parms.Player = Player;
	Parms.interactionType = interactionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ClosetExitSwing.ClosetExitSwing_C.CanApplyHeadOnInteraction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UClosetExitSwing_C::CanApplyHeadOnInteraction(class ADBDPlayer* Player) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClosetExitSwing_C", "CanApplyHeadOnInteraction");

	Params::ClosetExitSwing_C_CanApplyHeadOnInteraction Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

