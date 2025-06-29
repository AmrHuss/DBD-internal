﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreHUD_EventSpring2024_ObjectiveItem

#include "Basic.hpp"

#include "WBP_CoreHUD_EventSpring2024_ObjectiveItem_classes.hpp"
#include "WBP_CoreHUD_EventSpring2024_ObjectiveItem_parameters.hpp"


namespace SDK
{

// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.UpdateCharges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewChargeCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::UpdateCharges(int32 NewChargeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "UpdateCharges");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_UpdateCharges Parms{};

	Parms.NewChargeCount = NewChargeCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.ShouldResetGaugePercentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldCharges                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OldMaxCharges                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewCharges                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewMaxCharges                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   ShouldResetGauge                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::ShouldResetGaugePercentage(int32 OldCharges, int32 OldMaxCharges, int32 NewCharges, int32 NewMaxCharges, bool* ShouldResetGauge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "ShouldResetGaugePercentage");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_ShouldResetGaugePercentage Parms{};

	Parms.OldCharges = OldCharges;
	Parms.OldMaxCharges = OldMaxCharges;
	Parms.NewCharges = NewCharges;
	Parms.NewMaxCharges = NewMaxCharges;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldResetGauge != nullptr)
		*ShouldResetGauge = Parms.ShouldResetGauge;
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.SetWidgetState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const EEventObjectiveItemState          eventItemState                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::SetWidgetState(const EEventObjectiveItemState eventItemState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "SetWidgetState");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_SetWidgetState Parms{};

	Parms.eventItemState = eventItemState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.SetWidgetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const EEventObjectiveItemState          eventItemState                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const int32                             charges                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const int32                             maxCharges                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const float                             ChargePercent                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::SetWidgetData(const EEventObjectiveItemState eventItemState, const int32 charges, const int32 maxCharges, const float ChargePercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "SetWidgetData");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_SetWidgetData Parms{};

	Parms.eventItemState = eventItemState;
	Parms.charges = charges;
	Parms.maxCharges = maxCharges;
	Parms.ChargePercent = ChargePercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.SetPickUpPutDownAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isPickupAvailable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isPutdownAvailable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::SetPickUpPutDownAvailable(bool isPickupAvailable, bool isPutdownAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "SetPickUpPutDownAvailable");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_SetPickUpPutDownAvailable Parms{};

	Parms.isPickupAvailable = isPickupAvailable;
	Parms.isPutdownAvailable = isPutdownAvailable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.SetInputKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      InputKey                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::SetInputKey(const struct FKey& InputKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "SetInputKey");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_SetInputKey Parms{};

	Parms.InputKey = std::move(InputKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.SetCooldownPercentage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const float                             cooldownPercent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::SetCooldownPercentage(const float cooldownPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "SetCooldownPercentage");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_SetCooldownPercentage Parms{};

	Parms.cooldownPercent = cooldownPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.SetCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOnCooldown                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::SetCooldown(bool IsOnCooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "SetCooldown");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_SetCooldown Parms{};

	Parms.IsOnCooldown = IsOnCooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.SetAvailableCharges
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const int32                             charges                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const int32                             maxCharges                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::SetAvailableCharges(const int32 charges, const int32 maxCharges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "SetAvailableCharges");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_SetAvailableCharges Parms{};

	Parms.charges = charges;
	Parms.maxCharges = maxCharges;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.Set Red Background
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isRed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::Set_Red_Background(bool isRed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "Set Red Background");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_Set_Red_Background Parms{};

	Parms.isRed = isRed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.InitWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isLocalKiller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::InitWidget(bool isLocalKiller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "InitWidget");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_InitWidget Parms{};

	Parms.isLocalKiller = isLocalKiller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.ExecuteUbergraph_WBP_CoreHUD_EventSpring2024_ObjectiveItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::ExecuteUbergraph_WBP_CoreHUD_EventSpring2024_ObjectiveItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "ExecuteUbergraph_WBP_CoreHUD_EventSpring2024_ObjectiveItem");

	Params::WBP_CoreHUD_EventSpring2024_ObjectiveItem_C_ExecuteUbergraph_WBP_CoreHUD_EventSpring2024_ObjectiveItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreHUD_EventSpring2024_ObjectiveItem.WBP_CoreHUD_EventSpring2024_ObjectiveItem_C.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreHUD_EventSpring2024_ObjectiveItem_C::ClearData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreHUD_EventSpring2024_ObjectiveItem_C", "ClearData");

	UObject::ProcessEvent(Func, nullptr);
}

}

