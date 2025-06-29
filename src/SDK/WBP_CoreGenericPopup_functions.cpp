﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreGenericPopup

#include "Basic.hpp"

#include "WBP_CoreGenericPopup_classes.hpp"
#include "WBP_CoreGenericPopup_parameters.hpp"


namespace SDK
{

// Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.ExecuteUbergraph_WBP_CoreGenericPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreGenericPopup_C::ExecuteUbergraph_WBP_CoreGenericPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreGenericPopup_C", "ExecuteUbergraph_WBP_CoreGenericPopup");

	Params::WBP_CoreGenericPopup_C_ExecuteUbergraph_WBP_CoreGenericPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CoreGenericPopup_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreGenericPopup_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.SetHeaderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasePopupViewData*               Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreGenericPopup_C::SetHeaderColor(class UBasePopupViewData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreGenericPopup_C", "SetHeaderColor");

	Params::WBP_CoreGenericPopup_C_SetHeaderColor Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasePopupViewData*               Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CoreGenericPopup_C::Show(class UBasePopupViewData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CoreGenericPopup_C", "Show");

	Params::WBP_CoreGenericPopup_C_Show Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}

}

