﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BubbleIndicator_Crow

#include "Basic.hpp"

#include "BP_BubbleIndicator_Crow_classes.hpp"
#include "BP_BubbleIndicator_Crow_parameters.hpp"


namespace SDK
{

// Function BP_BubbleIndicator_Crow.BP_BubbleIndicator_Crow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BubbleIndicator_Crow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BubbleIndicator_Crow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BubbleIndicator_Crow.BP_BubbleIndicator_Crow_C.ExecuteUbergraph_BP_BubbleIndicator_Crow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BubbleIndicator_Crow_C::ExecuteUbergraph_BP_BubbleIndicator_Crow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BubbleIndicator_Crow_C", "ExecuteUbergraph_BP_BubbleIndicator_Crow");

	Params::BP_BubbleIndicator_Crow_C_ExecuteUbergraph_BP_BubbleIndicator_Crow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

