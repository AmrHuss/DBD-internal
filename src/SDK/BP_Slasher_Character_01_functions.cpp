﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Slasher_Character_01

#include "Basic.hpp"

#include "BP_Slasher_Character_01_classes.hpp"
#include "BP_Slasher_Character_01_parameters.hpp"


namespace SDK
{

// Function BP_Slasher_Character_01.BP_Slasher_Character_01_C.Trap Collected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              gameEventType                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// const struct FGameEventData&            GameEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_Slasher_Character_01_C::Trap_Collected(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Slasher_Character_01_C", "Trap Collected");

	Params::BP_Slasher_Character_01_C_Trap_Collected Parms{};

	Parms.gameEventType = std::move(gameEventType);
	Parms.GameEventData = std::move(GameEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Slasher_Character_01.BP_Slasher_Character_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Slasher_Character_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Slasher_Character_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Slasher_Character_01.BP_Slasher_Character_01_C.IsTrapPlacementValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Slasher_Character_01_C::IsTrapPlacementValid(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Slasher_Character_01_C", "IsTrapPlacementValid");

	Params::BP_Slasher_Character_01_C_IsTrapPlacementValid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_Slasher_Character_01.BP_Slasher_Character_01_C.IntroCompleted
// (BlueprintCallable, BlueprintEvent)

void ABP_Slasher_Character_01_C::IntroCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Slasher_Character_01_C", "IntroCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Slasher_Character_01.BP_Slasher_Character_01_C.ExecuteUbergraph_BP_Slasher_Character_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Slasher_Character_01_C::ExecuteUbergraph_BP_Slasher_Character_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Slasher_Character_01_C", "ExecuteUbergraph_BP_Slasher_Character_01");

	Params::BP_Slasher_Character_01_C_ExecuteUbergraph_BP_Slasher_Character_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Slasher_Character_01.BP_Slasher_Character_01_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EAudioCustomizationCategory             category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    switchState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Slasher_Character_01_C::BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, const class FString& switchState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Slasher_Character_01_C", "BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature");

	Params::BP_Slasher_Character_01_C_BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature Parms{};

	Parms.category = category;
	Parms.switchState = std::move(switchState);

	UObject::ProcessEvent(Func, &Parms);
}

}

