﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_KillerSpecificStatusEffectSurvivorAnimation

#include "Basic.hpp"

#include "ALI_KillerSpecificStatusEffectSurvivorAnimation_classes.hpp"
#include "ALI_KillerSpecificStatusEffectSurvivorAnimation_parameters.hpp"


namespace SDK
{

// Function ALI_KillerSpecificStatusEffectSurvivorAnimation.ALI_KillerSpecificStatusEffectSurvivorAnimation_C.KillerSpecificStatusEffectSurvivorAnimation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       KillerSpecificStatusEffectSurvivorAnimation_0          (Parm, OutParm, NoDestructor)

void IALI_KillerSpecificStatusEffectSurvivorAnimation_C::KillerSpecificStatusEffectSurvivorAnimation(const struct FPoseLink& InPose, struct FPoseLink* KillerSpecificStatusEffectSurvivorAnimation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ALI_KillerSpecificStatusEffectSurvivorAnimation_C", "KillerSpecificStatusEffectSurvivorAnimation");

	Params::ALI_KillerSpecificStatusEffectSurvivorAnimation_C_KillerSpecificStatusEffectSurvivorAnimation Parms{};

	Parms.InPose = std::move(InPose);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (KillerSpecificStatusEffectSurvivorAnimation_0 != nullptr)
		*KillerSpecificStatusEffectSurvivorAnimation_0 = std::move(Parms.KillerSpecificStatusEffectSurvivorAnimation_0);
}

}

