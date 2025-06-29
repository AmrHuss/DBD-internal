﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDAudio

#include "Basic.hpp"

#include "DBDAudio_classes.hpp"
#include "DBDAudio_parameters.hpp"


namespace SDK
{

// Function DBDAudio.InteractionAudioComponent.PostAkEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*                    akEvent                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInteractionAudioComponent::PostAkEvent(class UAkAudioEvent* akEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionAudioComponent", "PostAkEvent");

	Params::InteractionAudioComponent_PostAkEvent Parms{};

	Parms.akEvent = akEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDAudio.InteractionAudioComponent.GetCalculatedAudioRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UInteractionAudioComponent::GetCalculatedAudioRadius() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractionAudioComponent", "GetCalculatedAudioRadius");

	Params::InteractionAudioComponent_GetCalculatedAudioRadius Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDAudio.AudioUtilities.DBD_LoadAudioBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                     Bank                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::DBD_LoadAudioBank(class UAkAudioBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "DBD_LoadAudioBank");

	Params::AudioUtilities_DBD_LoadAudioBank Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAudio.AudioUtilities.DBD_LoadAudioBankPersistent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                     Bank                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::DBD_LoadAudioBankPersistent(class UAkAudioBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "DBD_LoadAudioBankPersistent");

	Params::AudioUtilities_DBD_LoadAudioBankPersistent Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAudio.AudioUtilities.DBD_LoadAudioBankPersistentWithCallback
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                     Bank                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(EAkResult Result)>&bankLoadedCallback                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::DBD_LoadAudioBankPersistentWithCallback(class UAkAudioBank* Bank, const TDelegate<void(EAkResult Result)>& bankLoadedCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "DBD_LoadAudioBankPersistentWithCallback");

	Params::AudioUtilities_DBD_LoadAudioBankPersistentWithCallback Parms{};

	Parms.Bank = Bank;
	Parms.bankLoadedCallback = bankLoadedCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAudio.AudioUtilities.DBD_LoadAudioBankSynchronous
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                     Bank                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAkResult                               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EAkResult UAudioUtilities::DBD_LoadAudioBankSynchronous(class UAkAudioBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "DBD_LoadAudioBankSynchronous");

	Params::AudioUtilities_DBD_LoadAudioBankSynchronous Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DBDAudio.AudioUtilities.DBD_LoadAudioBankWithCallback
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                     Bank                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(EAkResult Result)>&bankLoadedCallback                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::DBD_LoadAudioBankWithCallback(class UAkAudioBank* Bank, const TDelegate<void(EAkResult Result)>& bankLoadedCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "DBD_LoadAudioBankWithCallback");

	Params::AudioUtilities_DBD_LoadAudioBankWithCallback Parms{};

	Parms.Bank = Bank;
	Parms.bankLoadedCallback = bankLoadedCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAudio.AudioUtilities.DBD_UnloadAudioBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                     Bank                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::DBD_UnloadAudioBank(class UAkAudioBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "DBD_UnloadAudioBank");

	Params::AudioUtilities_DBD_UnloadAudioBank Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAudio.AudioUtilities.DBD_UnloadAudioBankWithCallback
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                     Bank                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void(EAkResult Result)>&bankUnloadedCallback                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::DBD_UnloadAudioBankWithCallback(class UAkAudioBank* Bank, const TDelegate<void(EAkResult Result)>& bankUnloadedCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "DBD_UnloadAudioBankWithCallback");

	Params::AudioUtilities_DBD_UnloadAudioBankWithCallback Parms{};

	Parms.Bank = Bank;
	Parms.bankUnloadedCallback = bankUnloadedCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAudio.AudioUtilities.PostAkAudioEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*                    AudioEvent                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::PostAkAudioEvent(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "PostAkAudioEvent");

	Params::AudioUtilities_PostAkAudioEvent Parms{};

	Parms.AudioEvent = AudioEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DBDAudio.AudioUtilities.PostEventByNameOnComponent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                     Component                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    audioEventName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioUtilities::PostEventByNameOnComponent(class UAkComponent* Component, const class FString& audioEventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioUtilities", "PostEventByNameOnComponent");

	Params::AudioUtilities_PostEventByNameOnComponent Parms{};

	Parms.Component = Component;
	Parms.audioEventName = std::move(audioEventName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

