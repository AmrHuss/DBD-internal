﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ForceDrop

#include "Basic.hpp"

#include "ForceDrop_classes.hpp"
#include "ForceDrop_parameters.hpp"


namespace SDK
{

// Function ForceDrop.ForceDrop_C.IsInteractionPossibleBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class ADBDPlayer*                 Player                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputInteractionType                   interactionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UForceDrop_C::IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType interactionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ForceDrop_C", "IsInteractionPossibleBP");

	Params::ForceDrop_C_IsInteractionPossibleBP Parms{};

	Parms.Player = Player;
	Parms.interactionType = interactionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

