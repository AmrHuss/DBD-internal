﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PulldownAcrossDefinition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PulldownAcrossDefinition.PulldownAcrossDefinition_C
// 0x0030 (0x07A0 - 0x0770)
class UPulldownAcrossDefinition_C final : public UInteractionDefinition
{
public:
	uint8                                         Pad_768[0x8];                                      // 0x0768(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0770(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDBDTimer                              FallTimer;                                         // 0x0778(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnInteractionUpdateTick(class ADBDPlayer* Player, float DeltaTime);
	void OnInteractionUpdateStart(class ADBDPlayer* Player);
	void OnInteractionUpdateEnd(class ADBDPlayer* Player);
	void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);
	void ExecuteUbergraph_PulldownAcrossDefinition(int32 EntryPoint);

	bool IsInteractionPossibleClient(const class ADBDPlayer* Player, EInputInteractionType interactionType) const;
	bool IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType interactionType) const;
	float GetSnapTime(const class ADBDPlayer* Player) const;
	void GetPulldown(class APallet** PullDown) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PulldownAcrossDefinition_C">();
	}
	static class UPulldownAcrossDefinition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPulldownAcrossDefinition_C>();
	}
};

}

