﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TextDesignTunables

#include "Basic.hpp"

#include "BP_TextDesignTunables_classes.hpp"
#include "BP_TextDesignTunables_parameters.hpp"


namespace SDK
{

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TextDesignTunables_C::ExecuteUbergraph_BP_TextDesignTunables(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextDesignTunables_C", "ExecuteUbergraph_BP_TextDesignTunables");

	Params::BP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_TextDesignTunables_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextDesignTunables_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TextDesignTunables_C::ReceiveTick(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextDesignTunables_C", "ReceiveTick");

	Params::BP_TextDesignTunables_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

