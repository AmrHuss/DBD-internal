﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheLegion

#include "Basic.hpp"

#include "TheLegion_classes.hpp"
#include "TheLegion_parameters.hpp"


namespace SDK
{

// Function TheLegion.DiscordancePerk.Multicast_AddGeneratorAura
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class AGenerator*                       Generator                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordancePerk::Multicast_AddGeneratorAura(class AGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscordancePerk", "Multicast_AddGeneratorAura");

	Params::DiscordancePerk_Multicast_AddGeneratorAura Parms{};

	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.DiscordancePerk.Multicast_AddLingeringGeneratorAura
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class AGenerator*                       Generator                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordancePerk::Multicast_AddLingeringGeneratorAura(class AGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscordancePerk", "Multicast_AddLingeringGeneratorAura");

	Params::DiscordancePerk_Multicast_AddLingeringGeneratorAura Parms{};

	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.DiscordancePerk.GetAuraLingerDuration
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDiscordancePerk::GetAuraLingerDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscordancePerk", "GetAuraLingerDuration");

	Params::DiscordancePerk_GetAuraLingerDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.DiscordancePerk.GetEffectRangeAtLevel
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDiscordancePerk::GetEffectRangeAtLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscordancePerk", "GetEffectRangeAtLevel");

	Params::DiscordancePerk_GetEffectRangeAtLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyComponent.EndFrenzy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EFrenzyEndReason                        Reason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFrenzyComponent::EndFrenzy(EFrenzyEndReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "EndFrenzy");

	Params::FrenzyComponent_EndFrenzy Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.InitializeFrenzy
// (Final, Native, Private)

void UFrenzyComponent::InitializeFrenzy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "InitializeFrenzy");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.OnFrenzyCooldownStarted
// (Final, Native, Public, BlueprintCallable)

void UFrenzyComponent::OnFrenzyCooldownStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "OnFrenzyCooldownStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.OnMoriStarted
// (Final, Native, Private)

void UFrenzyComponent::OnMoriStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "OnMoriStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion
// (Final, Native, Public, BlueprintCallable)

void UFrenzyComponent::PauseFrenzyChargeDepletion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "PauseFrenzyChargeDepletion");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion
// (Final, Native, Public, BlueprintCallable)

void UFrenzyComponent::ResumeFrenzyChargeDepletion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "ResumeFrenzyChargeDepletion");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.SetObjectState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayTagContainerComponent*   objectState                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFrenzyComponent::SetObjectState(class UGameplayTagContainerComponent* objectState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "SetObjectState");

	Params::FrenzyComponent_SetObjectState Parms{};

	Parms.objectState = objectState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.SetStartingFrenzy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    startingFrenzy                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFrenzyComponent::SetStartingFrenzy(bool startingFrenzy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "SetStartingFrenzy");

	Params::FrenzyComponent_SetStartingFrenzy Parms{};

	Parms.startingFrenzy = startingFrenzy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.StartFrenzy
// (Final, Native, Public, BlueprintCallable)

void UFrenzyComponent::StartFrenzy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "StartFrenzy");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.FrenzyComponent.CanManuallyEndFrenzy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFrenzyComponent::CanManuallyEndFrenzy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "CanManuallyEndFrenzy");

	Params::FrenzyComponent_CanManuallyEndFrenzy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyComponent.CanStartFrenzy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFrenzyComponent::CanStartFrenzy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "CanStartFrenzy");

	Params::FrenzyComponent_CanStartFrenzy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyComponent.GetFrenzyTier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFrenzyComponent::GetFrenzyTier() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "GetFrenzyTier");

	Params::FrenzyComponent_GetFrenzyTier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFrenzyComponent::HasStartedInjuredBleedoutDuringThisFrenzy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "HasStartedInjuredBleedoutDuringThisFrenzy");

	Params::FrenzyComponent_HasStartedInjuredBleedoutDuringThisFrenzy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyComponent.IsInFrenzy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFrenzyComponent::IsInFrenzy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "IsInFrenzy");

	Params::FrenzyComponent_IsInFrenzy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyComponent.IsInFrenzyCooldown
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFrenzyComponent::IsInFrenzyCooldown() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "IsInFrenzyCooldown");

	Params::FrenzyComponent_IsInFrenzyCooldown Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyComponent.IsStartingFrenzy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFrenzyComponent::IsStartingFrenzy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyComponent", "IsStartingFrenzy");

	Params::FrenzyComponent_IsStartingFrenzy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TheLegion.FrenzyEffect.Authority_OnFrenzyTierIncreased
// (Final, Native, Private)
// Parameters:
// int32                                   tier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFrenzyEffect::Authority_OnFrenzyTierIncreased(int32 tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrenzyEffect", "Authority_OnFrenzyTierIncreased");

	Params::FrenzyEffect_Authority_OnFrenzyTierIncreased Parms{};

	Parms.tier = tier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever
// (Final, Exec, Native, Public)

void ULegionCheatComponent::DBD_LegionFrenzyForever()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegionCheatComponent", "DBD_LegionFrenzyForever");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameEventDispatcher*             GameEventDispatcher                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegionKillerAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegionKillerAnalyticsComponent", "SetGameEventDispatcher");

	Params::LegionKillerAnalyticsComponent_SetGameEventDispatcher Parms{};

	Parms.GameEventDispatcher = GameEventDispatcher;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
// (Final, Native, Private, HasOutParams)
// Parameters:
// const struct FGameplayTag&              gameEventType                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameEventData&            GameEventData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULegionSurvivorAnalyticsComponent::OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegionSurvivorAnalyticsComponent", "OnGameEventDispatched");

	Params::LegionSurvivorAnalyticsComponent_OnGameEventDispatched Parms{};

	Parms.gameEventType = std::move(gameEventType);
	Parms.GameEventData = std::move(GameEventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameEventDispatcher*             GameEventDispatcher                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegionSurvivorAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegionSurvivorAnalyticsComponent", "SetGameEventDispatcher");

	Params::LegionSurvivorAnalyticsComponent_SetGameEventDispatcher Parms{};

	Parms.GameEventDispatcher = GameEventDispatcher;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased
// (Final, Native, Private)
// Parameters:
// int32                                   tier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModifyFrenzyFOVEffect::Authority_OnFrenzyTierIncreased(int32 tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModifyFrenzyFOVEffect", "Authority_OnFrenzyTierIncreased");

	Params::ModifyFrenzyFOVEffect_Authority_OnFrenzyTierIncreased Parms{};

	Parms.tier = tier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

