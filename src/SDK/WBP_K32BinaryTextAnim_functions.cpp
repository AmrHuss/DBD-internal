﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K32BinaryTextAnim

#include "Basic.hpp"

#include "WBP_K32BinaryTextAnim_classes.hpp"
#include "WBP_K32BinaryTextAnim_parameters.hpp"


namespace SDK
{

// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.UpdateBinaryText
// (BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::UpdateBinaryText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "UpdateBinaryText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.SwitchMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInAllienMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K32BinaryTextAnim_C::SwitchMode(bool IsInAllienMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "SwitchMode");

	Params::WBP_K32BinaryTextAnim_C_SwitchMode Parms{};

	Parms.IsInAllienMode = IsInAllienMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.StopBinaryTextAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::StopBinaryTextAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "StopBinaryTextAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.SetBinaryTextColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K32BinaryTextAnim_C::SetBinaryTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "SetBinaryTextColor");

	Params::WBP_K32BinaryTextAnim_C_SetBinaryTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.ResetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::ResetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "ResetText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.RemoveFirstLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::RemoveFirstLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "RemoveFirstLine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.PrepareNextLine
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::PrepareNextLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "PrepareNextLine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K32BinaryTextAnim_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "PreConstruct");

	Params::WBP_K32BinaryTextAnim_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.PlayBinaryTextAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::PlayBinaryTextAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "PlayBinaryTextAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.Finished_55E4FE73447D5694976775888E2FF1D6
// (BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::Finished_55E4FE73447D5694976775888E2FF1D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "Finished_55E4FE73447D5694976775888E2FF1D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.ExecuteUbergraph_WBP_K32BinaryTextAnim
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_K32BinaryTextAnim_C::ExecuteUbergraph_WBP_K32BinaryTextAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "ExecuteUbergraph_WBP_K32BinaryTextAnim");

	Params::WBP_K32BinaryTextAnim_C_ExecuteUbergraph_WBP_K32BinaryTextAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_K32BinaryTextAnim.WBP_K32BinaryTextAnim_C.AddCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_K32BinaryTextAnim_C::AddCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_K32BinaryTextAnim_C", "AddCharacter");

	UObject::ProcessEvent(Func, nullptr);
}

}

