﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealOtherMedkit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDInteraction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HealOtherMedkit.HealOtherMedkit_C
// 0x0010 (0x0940 - 0x0930)
class UHealOtherMedkit_C final : public UHealOtherMedkitInteraction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0930(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Authority_OnPlayerHealed(class ADBDPlayer* healingPlayer, class ADBDPlayer* healedPlayer);
	void ExecuteUbergraph_HealOtherMedkit(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HealOtherMedkit_C">();
	}
	static class UHealOtherMedkit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHealOtherMedkit_C>();
	}
};

}

