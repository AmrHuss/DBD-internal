﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Firefly

#include "Basic.hpp"

#include "Firefly_classes.hpp"
#include "Firefly_parameters.hpp"


namespace SDK
{

// Function Firefly.FireflyCosmeticStatusEffect.Cosmetic_OnFireflyLanternCollected
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UFireflyCosmeticStatusEffect::Cosmetic_OnFireflyLanternCollected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyCosmeticStatusEffect", "Cosmetic_OnFireflyLanternCollected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Firefly.FireflyCosmeticStatusEffect.Cosmetic_OnFireflyLanternDropped
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UFireflyCosmeticStatusEffect::Cosmetic_OnFireflyLanternDropped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyCosmeticStatusEffect", "Cosmetic_OnFireflyLanternDropped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Firefly.FireflyCosmeticStatusEffect.OnRep_HeldFireflyLantern
// (Final, Native, Private)
// Parameters:
// class AFireflyLantern*                  oldLantern                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFireflyCosmeticStatusEffect::OnRep_HeldFireflyLantern(class AFireflyLantern* oldLantern)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyCosmeticStatusEffect", "OnRep_HeldFireflyLantern");

	Params::FireflyCosmeticStatusEffect_OnRep_HeldFireflyLantern Parms{};

	Parms.oldLantern = oldLantern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLantern.Cosmetic_OnChestWithLanternOpened
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AFireflyLantern::Cosmetic_OnChestWithLanternOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "Cosmetic_OnChestWithLanternOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Firefly.FireflyLantern.Cosmetic_OnCollectorInLocker
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    inLocker                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFireflyLantern::Cosmetic_OnCollectorInLocker(bool inLocker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "Cosmetic_OnCollectorInLocker");

	Params::FireflyLantern_Cosmetic_OnCollectorInLocker Parms{};

	Parms.inLocker = inLocker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Firefly.FireflyLantern.Cosmetic_OnLanternBeingUsed
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    isBeingUsed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFireflyLantern::Cosmetic_OnLanternBeingUsed(bool isBeingUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "Cosmetic_OnLanternBeingUsed");

	Params::FireflyLantern_Cosmetic_OnLanternBeingUsed Parms{};

	Parms.isBeingUsed = isBeingUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Firefly.FireflyLantern.Cosmetic_OnLanternCollected
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFireflyLantern::Cosmetic_OnLanternCollected(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "Cosmetic_OnLanternCollected");

	Params::FireflyLantern_Cosmetic_OnLanternCollected Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Firefly.FireflyLantern.Cosmetic_OnLanternDestroyed
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer*                       Player                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFireflyLantern::Cosmetic_OnLanternDestroyed(class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "Cosmetic_OnLanternDestroyed");

	Params::FireflyLantern_Cosmetic_OnLanternDestroyed Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Firefly.FireflyLantern.Cosmetic_OnLanternDropped
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AFireflyLantern::Cosmetic_OnLanternDropped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "Cosmetic_OnLanternDropped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Firefly.FireflyLantern.OnLanternInteractionFinished
// (Final, Native, Private)

void AFireflyLantern::OnLanternInteractionFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "OnLanternInteractionFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLantern.OnLanternInteractionStarted
// (Final, Native, Private)

void AFireflyLantern::OnLanternInteractionStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "OnLanternInteractionStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLantern.OnRep_DestroyingPlayer
// (Final, Native, Private)

void AFireflyLantern::OnRep_DestroyingPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "OnRep_DestroyingPlayer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLantern.OnRep_LanternSpawnedFromChest
// (Final, Native, Private)

void AFireflyLantern::OnRep_LanternSpawnedFromChest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "OnRep_LanternSpawnedFromChest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLantern.OnRep_RevealedGenerator
// (Final, Native, Private)
// Parameters:
// class AGenerator*                       oldGenerator                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFireflyLantern::OnRep_RevealedGenerator(class AGenerator* oldGenerator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLantern", "OnRep_RevealedGenerator");

	Params::FireflyLantern_OnRep_RevealedGenerator Parms{};

	Parms.oldGenerator = oldGenerator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLanternGeneratorComponent.OnLevelReadyToPlay
// (Final, Native, Private)

void UFireflyLanternGeneratorComponent::OnLevelReadyToPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLanternGeneratorComponent", "OnLevelReadyToPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLanternGeneratorComponent.OnRep_LanternOnGenerator
// (Final, Native, Private)

void UFireflyLanternGeneratorComponent::OnRep_LanternOnGenerator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLanternGeneratorComponent", "OnRep_LanternOnGenerator");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLanternSFXEffect.Cosmetic_OnLanternCollected
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UFireflyLanternSFXEffect::Cosmetic_OnLanternCollected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLanternSFXEffect", "Cosmetic_OnLanternCollected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Firefly.FireflyLanternSFXEffect.Cosmetic_OnLanternDropped
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UFireflyLanternSFXEffect::Cosmetic_OnLanternDropped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLanternSFXEffect", "Cosmetic_OnLanternDropped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Firefly.FireflyLanternSFXEffect.OnRep_HeldFireflyLantern
// (Final, Native, Private)
// Parameters:
// class AFireflyLantern*                  oldLantern                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFireflyLanternSFXEffect::OnRep_HeldFireflyLantern(class AFireflyLantern* oldLantern)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLanternSFXEffect", "OnRep_HeldFireflyLantern");

	Params::FireflyLanternSFXEffect_OnRep_HeldFireflyLantern Parms{};

	Parms.oldLantern = oldLantern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyLanternSFXEffect.OnRep_NearestFireflyLantern
// (Final, Native, Private)
// Parameters:
// class AFireflyLantern*                  oldLantern                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFireflyLanternSFXEffect::OnRep_NearestFireflyLantern(class AFireflyLantern* oldLantern)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireflyLanternSFXEffect", "OnRep_NearestFireflyLantern");

	Params::FireflyLanternSFXEffect_OnRep_NearestFireflyLantern Parms{};

	Parms.oldLantern = oldLantern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Firefly.FireflyUtilities.GetLanternFromPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFireflyLantern*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFireflyLantern* UFireflyUtilities::GetLanternFromPlayer(const class ADBDPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FireflyUtilities", "GetLanternFromPlayer");

	Params::FireflyUtilities_GetLanternFromPlayer Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Firefly.FireflyUtilities.GetLanternGeneratorComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFireflyLanternGeneratorComponent*ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFireflyLanternGeneratorComponent* UFireflyUtilities::GetLanternGeneratorComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FireflyUtilities", "GetLanternGeneratorComponent");

	Params::FireflyUtilities_GetLanternGeneratorComponent Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

