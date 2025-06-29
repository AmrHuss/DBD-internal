﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProfileMenuRoot

#include "Basic.hpp"

#include "WBP_ProfileMenuRoot_classes.hpp"
#include "WBP_ProfileMenuRoot_parameters.hpp"


namespace SDK
{

// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ProfileMenuRoot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.ExecuteUbergraph_WBP_ProfileMenuRoot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ProfileMenuRoot_C::ExecuteUbergraph_WBP_ProfileMenuRoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "ExecuteUbergraph_WBP_ProfileMenuRoot");

	Params::WBP_ProfileMenuRoot_C_ExecuteUbergraph_WBP_ProfileMenuRoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetMenuState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProfileMenuState                       menuState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ProfileMenuRoot_C::SetMenuState(EProfileMenuState menuState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "SetMenuState");

	Params::WBP_ProfileMenuRoot_C_SetMenuState Parms{};

	Parms.menuState = menuState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetScrollPrompts
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ProfileMenuRoot_C::SetScrollPrompts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "SetScrollPrompts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetSubtitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      subtitle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ProfileMenuRoot_C::SetSubtitle(const class FText& subtitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "SetSubtitle");

	Params::WBP_ProfileMenuRoot_C_SetSubtitle Parms{};

	Parms.subtitle = std::move(subtitle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SettingsInputSwitcherEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_ProfileMenuRoot_C::SettingsInputSwitcherEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "SettingsInputSwitcherEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Title                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ProfileMenuRoot_C::SetTitle(const class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "SetTitle");

	Params::WBP_ProfileMenuRoot_C_SetTitle Parms{};

	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.GetProfileMenuBadgeInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IProfileMenuCustomizationViewInterface>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IProfileMenuCustomizationViewInterface> UWBP_ProfileMenuRoot_C::GetProfileMenuBadgeInterface() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "GetProfileMenuBadgeInterface");

	Params::WBP_ProfileMenuRoot_C_GetProfileMenuBadgeInterface Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.GetProfileMenuBannerInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IProfileMenuCustomizationViewInterface>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IProfileMenuCustomizationViewInterface> UWBP_ProfileMenuRoot_C::GetProfileMenuBannerInterface() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "GetProfileMenuBannerInterface");

	Params::WBP_ProfileMenuRoot_C_GetProfileMenuBannerInterface Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.GetProfileMenuStatsInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IProfileMenuStatsViewInterface>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IProfileMenuStatsViewInterface> UWBP_ProfileMenuRoot_C::GetProfileMenuStatsInterface() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ProfileMenuRoot_C", "GetProfileMenuStatsInterface");

	Params::WBP_ProfileMenuRoot_C_GetProfileMenuStatsInterface Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

