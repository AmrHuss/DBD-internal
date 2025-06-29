﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PulldownDestroyWithPowerAttack

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "Engine_structs.hpp"
#include "DataTableUtilities_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PulldownDestroyWithPowerAttack.PulldownDestroyWithPowerAttack_C
// 0x0040 (0x07B0 - 0x0770)
class UPulldownDestroyWithPowerAttack_C final : public UInteractionDefinition
{
public:
	uint8                                         Pad_768[0x8];                                      // 0x0768(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0770(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ADBDPlayer*                             DamageTarget;                                      // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EDetectionZone                                DetectionZoneToUseForDamage;                       // 0x0780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanDamageSurvivors;                                // 0x0781(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_782[0x6];                                      // 0x0782(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDBDTunableRowHandle                   DemogorgonPowerRecoveryTime;                       // 0x0788(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnInteractionUpdateStart(class ADBDPlayer* Player);
	void OnInteractionFinished(class ADBDPlayer* Player, bool hasInteractionStarted);
	void OnInteractionEnterTick(class ADBDPlayer* Player, float DeltaTime);
	void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);
	void LocalUpdateDamageTarget(class ADBDPlayer* interactingPlayer);
	void ExecuteUbergraph_PulldownDestroyWithPowerAttack(int32 EntryPoint);
	void CustomizePropertiesForKiller(class ADBDPlayer* Player);
	void Authority_DamageTarget(class ADBDPlayer* interactingPlayer, class ADBDPlayer* DamageTarget_0);

	bool ShouldDealDoubleDamage(class ADBDPlayer* Player) const;
	bool IsInteractionPossibleBP(const class ADBDPlayer* Player, EInputInteractionType interactionType) const;
	void GetPulldown(class APallet** AsPallet) const;
	bool CanOverrideInteraction(const class UInteractionDefinition* Interaction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PulldownDestroyWithPowerAttack_C">();
	}
	static class UPulldownDestroyWithPowerAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPulldownDestroyWithPowerAttack_C>();
	}
};

}

