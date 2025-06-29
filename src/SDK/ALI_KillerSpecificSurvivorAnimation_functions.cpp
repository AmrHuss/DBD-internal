﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_KillerSpecificSurvivorAnimation

#include "Basic.hpp"

#include "ALI_KillerSpecificSurvivorAnimation_classes.hpp"
#include "ALI_KillerSpecificSurvivorAnimation_parameters.hpp"


namespace SDK
{

// Function ALI_KillerSpecificSurvivorAnimation.ALI_KillerSpecificSurvivorAnimation_C.KillerSpecificSurvivorAnimation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       KillerSpecificSurvivorAnimation_0                      (Parm, OutParm, NoDestructor)

void IALI_KillerSpecificSurvivorAnimation_C::KillerSpecificSurvivorAnimation(const struct FPoseLink& InPose, struct FPoseLink* KillerSpecificSurvivorAnimation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ALI_KillerSpecificSurvivorAnimation_C", "KillerSpecificSurvivorAnimation");

	Params::ALI_KillerSpecificSurvivorAnimation_C_KillerSpecificSurvivorAnimation Parms{};

	Parms.InPose = std::move(InPose);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (KillerSpecificSurvivorAnimation_0 != nullptr)
		*KillerSpecificSurvivorAnimation_0 = std::move(Parms.KillerSpecificSurvivorAnimation_0);
}


// Function ALI_KillerSpecificSurvivorAnimation.ALI_KillerSpecificSurvivorAnimation_C.KillerSpecivicSurvivorAnimationAfterMontage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose_                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       KillerSpecivicSurvivorAnimationAfterMontage_0          (Parm, OutParm, NoDestructor)

void IALI_KillerSpecificSurvivorAnimation_C::KillerSpecivicSurvivorAnimationAfterMontage(const struct FPoseLink& InPose_, struct FPoseLink* KillerSpecivicSurvivorAnimationAfterMontage_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ALI_KillerSpecificSurvivorAnimation_C", "KillerSpecivicSurvivorAnimationAfterMontage");

	Params::ALI_KillerSpecificSurvivorAnimation_C_KillerSpecivicSurvivorAnimationAfterMontage Parms{};

	Parms.InPose_ = std::move(InPose_);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (KillerSpecivicSurvivorAnimationAfterMontage_0 != nullptr)
		*KillerSpecivicSurvivorAnimationAfterMontage_0 = std::move(Parms.KillerSpecivicSurvivorAnimationAfterMontage_0);
}

}

