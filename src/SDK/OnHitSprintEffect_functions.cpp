﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnHitSprintEffect

#include "Basic.hpp"

#include "OnHitSprintEffect_classes.hpp"
#include "OnHitSprintEffect_parameters.hpp"


namespace SDK
{

// Function OnHitSprintEffect.OnHitSprintEffect_C.Authority_OnInstantiateModifierConditions
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)

void UOnHitSprintEffect_C::Authority_OnInstantiateModifierConditions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnHitSprintEffect_C", "Authority_OnInstantiateModifierConditions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnHitSprintEffect.OnHitSprintEffect_C.ExecuteUbergraph_OnHitSprintEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnHitSprintEffect_C::ExecuteUbergraph_OnHitSprintEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnHitSprintEffect_C", "ExecuteUbergraph_OnHitSprintEffect");

	Params::OnHitSprintEffect_C_ExecuteUbergraph_OnHitSprintEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

