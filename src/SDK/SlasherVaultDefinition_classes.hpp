﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlasherVaultDefinition

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SlasherVaultDefinition.SlasherVaultDefinition_C
// 0x0000 (0x0860 - 0x0860)
class USlasherVaultDefinition_C final : public UKillerVaultDefinition
{
public:
	struct FAnimationMontageDescriptor GetUpdateMontage(const class ADBDPlayer* Player) const;
	float GetInteractionTimeMultiplier(const class ADBDPlayer* Character) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SlasherVaultDefinition_C">();
	}
	static class USlasherVaultDefinition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlasherVaultDefinition_C>();
	}
};

}

