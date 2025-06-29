﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AuraReading

#include "Basic.hpp"

#include "AuraReading_classes.hpp"
#include "AuraReading_parameters.hpp"


namespace SDK
{

// Function AuraReading.AuraReading_C.PostAkEventOnPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    akEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAuraReading_C::PostAkEventOnPlayer(class ADBDPlayer* Player, class UAkAudioEvent* akEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "PostAkEventOnPlayer");

	Params::AuraReading_C_PostAkEventOnPlayer Parms{};

	Parms.Player = Player;
	Parms.akEvent = akEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AuraReading.AuraReading_C.OnInteractionUpdateTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAuraReading_C::OnInteractionUpdateTick(class ADBDPlayer* Player, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "OnInteractionUpdateTick");

	Params::AuraReading_C_OnInteractionUpdateTick Parms{};

	Parms.Player = Player;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AuraReading.AuraReading_C.OnInteractionFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    hasInteractionStarted                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAuraReading_C::OnInteractionFinished(class ADBDPlayer* Player, bool hasInteractionStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "OnInteractionFinished");

	Params::AuraReading_C_OnInteractionFinished Parms{};

	Parms.Player = Player;
	Parms.hasInteractionStarted = hasInteractionStarted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AuraReading.AuraReading_C.OnInteractionEnterStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   actualSnapTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAuraReading_C::OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "OnInteractionEnterStart");

	Params::AuraReading_C_OnInteractionEnterStart Parms{};

	Parms.Player = Player;
	Parms.actualSnapTime = actualSnapTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AuraReading.AuraReading_C.OnInteractionCompletionStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    complete                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAuraReading_C::OnInteractionCompletionStateChanged(class ADBDPlayer* Player, bool complete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "OnInteractionCompletionStateChanged");

	Params::AuraReading_C_OnInteractionCompletionStateChanged Parms{};

	Parms.Player = Player;
	Parms.complete = complete;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AuraReading.AuraReading_C.GetIsCharged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsCharged_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAuraReading_C::GetIsCharged(bool* IsCharged_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "GetIsCharged");

	Params::AuraReading_C_GetIsCharged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsCharged_0 != nullptr)
		*IsCharged_0 = Parms.IsCharged_0;
}


// Function AuraReading.AuraReading_C.ExecuteUbergraph_AuraReading
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAuraReading_C::ExecuteUbergraph_AuraReading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "ExecuteUbergraph_AuraReading");

	Params::AuraReading_C_ExecuteUbergraph_AuraReading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AuraReading.AuraReading_C.IsInteractionPossibleBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   interactionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAuraReading_C::IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType interactionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "IsInteractionPossibleBP");

	Params::AuraReading_C_IsInteractionPossibleBP Parms{};

	Parms.Player = Player;
	Parms.interactionType = interactionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AuraReading.AuraReading_C.IsInteractionDone
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   interactionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAuraReading_C::IsInteractionDone(const class ADBDPlayer* Player, EInputInteractionType interactionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "IsInteractionDone");

	Params::AuraReading_C_IsInteractionDone Parms{};

	Parms.Player = Player;
	Parms.interactionType = interactionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AuraReading.AuraReading_C.HasUsableAddon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAuraReading_C::HasUsableAddon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "HasUsableAddon");

	Params::AuraReading_C_HasUsableAddon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AuraReading.AuraReading_C.GetKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_Key_C*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class ABP_Key_C* UAuraReading_C::GetKey() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AuraReading_C", "GetKey");

	Params::AuraReading_C_GetKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

