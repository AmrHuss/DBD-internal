﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABSub_Slasher_01_BaseAttack_00

#include "Basic.hpp"

#include "ABSub_Slasher_01_BaseAttack_00_classes.hpp"
#include "ABSub_Slasher_01_BaseAttack_00_parameters.hpp"


namespace SDK
{

// Function ABSub_Slasher_01_BaseAttack_00.ABSub_Slasher_01_BaseAttack_00_C.ExecuteUbergraph_ABSub_Slasher_01_BaseAttack_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABSub_Slasher_01_BaseAttack_00_C::ExecuteUbergraph_ABSub_Slasher_01_BaseAttack_00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABSub_Slasher_01_BaseAttack_00_C", "ExecuteUbergraph_ABSub_Slasher_01_BaseAttack_00");

	Params::ABSub_Slasher_01_BaseAttack_00_C_ExecuteUbergraph_ABSub_Slasher_01_BaseAttack_00 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABSub_Slasher_01_BaseAttack_00.ABSub_Slasher_01_BaseAttack_00_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABSub_Slasher_01_BaseAttack_00_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABSub_Slasher_01_BaseAttack_00_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

