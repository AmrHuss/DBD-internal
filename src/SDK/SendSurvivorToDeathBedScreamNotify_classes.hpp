﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SendSurvivorToDeathBedScreamNotify

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SendSurvivorToDeathBedScreamNotify.SendSurvivorToDeathBedScreamNotify_C
// 0x0000 (0x0040 - 0x0040)
class USendSurvivorToDeathBedScreamNotify_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SendSurvivorToDeathBedScreamNotify_C">();
	}
	static class USendSurvivorToDeathBedScreamNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USendSurvivorToDeathBedScreamNotify_C>();
	}
};

}

