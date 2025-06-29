﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheSpirit

#include "Basic.hpp"

#include "StatSystem_structs.hpp"
#include "DataTableUtilities_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "DBDCompetence_classes.hpp"
#include "DBDBots_classes.hpp"
#include "GameplayTagUtilities_structs.hpp"
#include "DBDGameplay_structs.hpp"
#include "DBDGameplay_classes.hpp"
#include "TheSpirit_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class TheSpirit.PhaseWalkingComponent
// 0x0638 (0x06F0 - 0x00B8)
class UPhaseWalkingComponent final : public UActorComponent
{
public:
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FPhaseWalkInfo& PhaseWalkInfo)> OnPhaseWalkInfoReceived; // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnGameEndedVFX;                                    // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool Visible)>  TriggerSurvivorVisibilityVFX;                      // 0x00E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool wasPassivePhaseWalking, bool wasActivePhaseWalking, const struct FPhaseWalkInfo& PhaseWalkInfo)> TriggerKillerVisibilityVFX; // 0x00F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnMaxActivePhaseWalkCharges;                       // 0x0100(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     _huskClass;                                        // 0x0110(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                          _isActivePhaseWalking;                             // 0x0118(0x0048)(Transient, NativeAccessSpecifierPrivate)
	struct FTagStateBool                          _isPassivePhaseWalking;                            // 0x0160(0x0048)(Transient, NativeAccessSpecifierPrivate)
	struct FTagStateBool                          _isInPostActivePhaseWalk;                          // 0x01A8(0x0048)(Net, Transient, NativeAccessSpecifierPrivate)
	bool                                          _isInteractionPhaseWalking;                        // 0x01F0(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASpiritHusk*                            _husk;                                             // 0x01F8(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDBidirectionalTimer                 _activePhaseWalkCharges;                           // 0x0200(0x0028)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_228[0x28];                                     // 0x0228(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          _survivorsAreVisible;                              // 0x0250(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_251[0x3F];                                     // 0x0251(0x003F)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _passivePhaseWalkHusksCount;                       // 0x0290(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   _isVisibleDuringPhaseWalkTags;                     // 0x0298(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _activePhaseWalkChargeGainRate;                    // 0x02A8(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _passivePhaseWalkDuration;                         // 0x0328(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _passivePhaseWalkFirstCooldownDuration;            // 0x03A8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _passivePhaseWalkCooldownDurationMin;              // 0x03D0(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _passivePhaseWalkCooldownDurationMax;              // 0x0450(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _activePhaseWalkMaxCharge;                         // 0x04D0(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTunableStat                           _postActivePhaseWalkDuration;                      // 0x0550(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _activePhaseWalkMaxAcceleration;                   // 0x05D0(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _defaultMaxAcceleration;                           // 0x05F8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _activePhaseWalkDistanceToHideKiller;              // 0x0620(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_648[0x8];                                      // 0x0648(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            _postPhaseWalkSpeedCurve;                          // 0x0650(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_658[0x98];                                     // 0x0658(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_SetIsInPostActivePhaseWalk(bool Value);
	void DBD_RefillActivePhaseWalkCharges();
	void Local_EndPhaseWalks();
	void MakePassivePhaseWalkHusksVisible(const struct FTransform& huskTransform, float opacityValue, float speedValue);
	void ModifyActivePhaseWalkCharges(float Delta);
	void Multicast_Broadcast_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo);
	void OnInRangeToKillerChanged(const bool inRange, class AKiller* Killer);
	void OnLevelReadyToPlay();
	void OnRep_Husk();
	void RefillActivePhaseWalkCharges();
	void Server_Broadcast_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo);
	void SpawnPassivePhaseWalkHusks();
	void UpdateKillerVisibility();
	void UpdateSurvivorVisibility(bool Visible);

	bool CanStartActivePhaseWalk() const;
	float GetActivePhaseWalkChargePercentage() const;
	float GetActivePhaseWalkCharges() const;
	class AActor* GetHusk() const;
	const struct FDBDTimer GetPassivePhaseWalkTimer() const;
	int32 GetSpiritPassivePhaseWalkHusksCountToSpawn() const;
	bool IsActivePhaseWalking() const;
	bool IsHuskActive() const;
	bool IsPassivePhaseWalking() const;
	bool IsPhaseWalking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhaseWalkingComponent">();
	}
	static class UPhaseWalkingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhaseWalkingComponent>();
	}
};

// Class TheSpirit.ActivePhaseWalkInteraction
// 0x0180 (0x0A40 - 0x08C0)
class UActivePhaseWalkInteraction final : public UChargeableInteractionDefinition
{
public:
	struct FTunableStat                           _fullyChargedSpeed;                                // 0x08C0(0x0080)(Edit, NativeAccessSpecifierPrivate)
	float                                         _accelerationMultiplier;                           // 0x0940(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_944[0x4];                                      // 0x0944(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            _chargingSpeedCurve;                               // 0x0948(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _phaseWalkPenaltyThreshold;                        // 0x0950(0x0028)(Edit, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _phaseWalkPenaltyValue;                            // 0x0978(0x0028)(Edit, NativeAccessSpecifierPrivate)
	uint8                                         Pad_9A0[0x8];                                      // 0x09A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTunableStat                           _activePhaseWalkChargeDuration;                    // 0x09A8(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UAnimMontage*                           _activePhaseWalkChargingMontage;                   // 0x0A28(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_A30[0x10];                                     // 0x0A30(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Cosmetic_ResetChargeVFX(class ADBDPlayer* Player);
	void OnPlayerLocallyObservedChanged(class ADBDPlayer* Player);
	void OnPowerCollected(class ADBDPlayer* collector);

	float GetChargeTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActivePhaseWalkInteraction">();
	}
	static class UActivePhaseWalkInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivePhaseWalkInteraction>();
	}
};

// Class TheSpirit.Rancor
// 0x0030 (0x0490 - 0x0460)
class URancor final : public UPerk
{
public:
	float                                         _survivorRevealDuration;                           // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _killerRevealToObsessionDuration[0x3];             // 0x0464(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_470[0x8];                                      // 0x0470(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UStatusEffect*                          _exposedStatusEffect;                              // 0x0478(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _timedRevealKillerEffectClass;                     // 0x0480(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _rancorEffectClass;                                // 0x0488(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SpawnBubbleAtSurvivorsLocation();

	float GetKillerRevealToObsessionDurationAtLevel() const;
	float GetSurvivorRevealDuration() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Rancor">();
	}
	static class URancor* GetDefaultObj()
	{
		return GetDefaultObjImpl<URancor>();
	}
};

// Class TheSpirit.AISkill_Interaction_PhaseWalk
// 0x0300 (0x05A0 - 0x02A0)
class UAISkill_Interaction_PhaseWalk final : public UAISkill_Interaction_KillerPower
{
public:
	struct FAITunableParameter                    MinimumTraversalRange;                             // 0x02A0(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAITunableParameter                    MinimumChaseRange;                                 // 0x0300(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAITunableParameter                    MaxTraversalChargeUsage;                           // 0x0360(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAITunableParameter                    MinimumChargeUsage;                                // 0x03C0(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAITunableParameter                    StopUnderRange;                                    // 0x0420(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAITunableParameter                    ChaseStopUnderPathLength;                          // 0x0480(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAITunableParameter                    SurvivorLostUnderPathLength;                       // 0x04E0(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAITunableParameter                    SurvivorLostOverRange;                             // 0x0540(0x0060)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_Interaction_PhaseWalk">();
	}
	static class UAISkill_Interaction_PhaseWalk* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_Interaction_PhaseWalk>();
	}
};

// Class TheSpirit.DriedCherryBlossom
// 0x0010 (0x0330 - 0x0320)
class UDriedCherryBlossom final : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
public:
	TSubclassOf<class UStatusEffect>              _spiritDriedCherryBlossomStatusEffectClass;        // 0x0320(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_328[0x8];                                      // 0x0328(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DriedCherryBlossom">();
	}
	static class UDriedCherryBlossom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDriedCherryBlossom>();
	}
};

// Class TheSpirit.KatsumoriTalisman
// 0x0020 (0x0320 - 0x0300)
class UKatsumoriTalisman final : public UItemAddon
{
public:
	TArray<class AActor*>                         _blockableWindows;                                 // 0x0300(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	float                                         _explosionRadius;                                  // 0x0310(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _blockDuration;                                    // 0x0314(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KatsumoriTalisman">();
	}
	static class UKatsumoriTalisman* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKatsumoriTalisman>();
	}
};

// Class TheSpirit.MotherDaughterRing
// 0x0008 (0x0308 - 0x0300)
class UMotherDaughterRing final : public UItemAddon
{
public:
	TSubclassOf<class UStatusEffect>              _hideFootstepsEffect;                              // 0x0300(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotherDaughterRing">();
	}
	static class UMotherDaughterRing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotherDaughterRing>();
	}
};

// Class TheSpirit.OwningPlayerInSpiritHuskRange
// 0x0010 (0x0118 - 0x0108)
class UOwningPlayerInSpiritHuskRange final : public UAnyActorPairQueryRangeIsTrue
{
public:
	uint8                                         Pad_108[0x10];                                     // 0x0108(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnKillerSet(class AKiller* Killer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OwningPlayerInSpiritHuskRange">();
	}
	static class UOwningPlayerInSpiritHuskRange* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOwningPlayerInSpiritHuskRange>();
	}
};

// Class TheSpirit.SpiritFury
// 0x0010 (0x0470 - 0x0460)
class USpiritFury final : public UPerk
{
public:
	uint8                                         Pad_460[0x4];                                      // 0x0460(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _palletToBreakCountPerLevel[0x3];                  // 0x0464(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	int32 GetPalletToBreakCountAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpiritFury">();
	}
	static class USpiritFury* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpiritFury>();
	}
};

// Class TheSpirit.SpiritHusk
// 0x0010 (0x02F8 - 0x02E8)
class ASpiritHusk final : public ABaseHusk
{
public:
	class UTerrorRadiusEmitterComponent*          _terrorRadiusEmitter;                              // 0x02E8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2F0[0x8];                                      // 0x02F0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ActivateHusk(const struct FTransform& Transform);
	void Cosmetic_OnHuskVisibilityChanged(bool IsVisible);
	void DeactivateHusk();
	void Multicast_HuskStunned();
	void OnIntroCompleted();
	void OnKillerTerrorRadiusChanged(float NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpiritHusk">();
	}
	static class ASpiritHusk* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpiritHusk>();
	}
};

// Class TheSpirit.SpiritHuskAnimInstance
// 0x0020 (0x0370 - 0x0350)
class USpiritHuskAnimInstance : public UAnimInstance
{
public:
	class USkeletalMeshComponent*                 _killerMesh;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           _killerPresenceTag;                                // 0x0358(0x000C)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_364[0xC];                                      // 0x0364(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpiritHuskAnimInstance">();
	}
	static class USpiritHuskAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpiritHuskAnimInstance>();
	}
};

// Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance
// 0x0020 (0x0390 - 0x0370)
class USpiritHuskActivePhaseWalkAnimInstance final : public USpiritHuskAnimInstance
{
public:
	float                                         _elapsedTimeSinceFakingRealKillerPose;             // 0x0370(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _idleAnimationExplicitTime;                        // 0x0374(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          _idleAnimationSequence;                            // 0x0380(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_388[0x8];                                      // 0x0388(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpiritHuskActivePhaseWalkAnimInstance">();
	}
	static class USpiritHuskActivePhaseWalkAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpiritHuskActivePhaseWalkAnimInstance>();
	}
};

// Class TheSpirit.SpiritHuskOutlineUpdateStrategy
// 0x0038 (0x0118 - 0x00E0)
class USpiritHuskOutlineUpdateStrategy final : public UOutlineUpdateStrategy
{
public:
	class AKiller*                                _cachedKiller;                                     // 0x00E0(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E8[0x30];                                      // 0x00E8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnIntroCompleted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpiritHuskOutlineUpdateStrategy">();
	}
	static class USpiritHuskOutlineUpdateStrategy* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpiritHuskOutlineUpdateStrategy>();
	}
};

// Class TheSpirit.SpiritHuskRedStainUpdateStrategy
// 0x0008 (0x0100 - 0x00F8)
class USpiritHuskRedStainUpdateStrategy final : public UKillerRedStainUpdateStrategy
{
public:
	uint8                                         Pad_F8[0x8];                                       // 0x00F8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpiritHuskRedStainUpdateStrategy">();
	}
	static class USpiritHuskRedStainUpdateStrategy* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpiritHuskRedStainUpdateStrategy>();
	}
};

// Class TheSpirit.SpiritHuskStunnableComponent
// 0x0008 (0x00C0 - 0x00B8)
class USpiritHuskStunnableComponent final : public UActorComponent
{
public:
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpiritHuskStunnableComponent">();
	}
	static class USpiritHuskStunnableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpiritHuskStunnableComponent>();
	}
};

}

