﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreCustomizationItemSlotWrapper

#include "Basic.hpp"

#include "WBP_CoreCustomizationItemSlotWrapper_classes.hpp"
#include "WBP_CoreCustomizationItemSlotWrapper_parameters.hpp"


namespace SDK
{

// Function WBP_CoreCustomizationItemSlotWrapper.WBP_CoreCustomizationItemSlotWrapper_C.ExecuteUbergraph_WBP_CoreCustomizationItemSlotWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationItemSlotWrapper_C::ExecuteUbergraph_WBP_CoreCustomizationItemSlotWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationItemSlotWrapper_C", "ExecuteUbergraph_WBP_CoreCustomizationItemSlotWrapper");

	Params::WBP_CoreCustomizationItemSlotWrapper_C_ExecuteUbergraph_WBP_CoreCustomizationItemSlotWrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCustomizationItemSlotWrapper.WBP_CoreCustomizationItemSlotWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationItemSlotWrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationItemSlotWrapper_C", "PreConstruct");

	Params::WBP_CoreCustomizationItemSlotWrapper_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreCustomizationItemSlotWrapper.WBP_CoreCustomizationItemSlotWrapper_C.SetAsEmptySlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const bool                              isEmptySlot                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreCustomizationItemSlotWrapper_C::SetAsEmptySlot(const bool isEmptySlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreCustomizationItemSlotWrapper_C", "SetAsEmptySlot");

	Params::WBP_CoreCustomizationItemSlotWrapper_C_SetAsEmptySlot Parms{};

	Parms.isEmptySlot = isEmptySlot;

	UObject::ProcessEvent(Func, &Parms);
}

}

