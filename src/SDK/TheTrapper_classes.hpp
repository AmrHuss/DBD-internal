﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheTrapper

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "StatSystem_structs.hpp"
#include "DataTableUtilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimationUtilities_structs.hpp"
#include "AnimationUtilities_classes.hpp"
#include "Engine_classes.hpp"
#include "DBDInteraction_classes.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// Class TheTrapper.BearTrapKillerComponent
// 0x0000 (0x00B8 - 0x00B8)
class UBearTrapKillerComponent final : public UActorComponent
{
public:
	void Multicast_DisarmTrap(class ABearTrap* trapToDisarm);
	void Server_TryDisarmTrap(class ABearTrap* trapToDisarm);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BearTrapKillerComponent">();
	}
	static class UBearTrapKillerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBearTrapKillerComponent>();
	}
};

// Class TheTrapper.Addon_Beartrap_05
// 0x0000 (0x0300 - 0x0300)
class UAddon_Beartrap_05 final : public UItemAddon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Addon_Beartrap_05">();
	}
	static class UAddon_Beartrap_05* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAddon_Beartrap_05>();
	}
};

// Class TheTrapper.BearTrapOutlineUpdateStrategy
// 0x0038 (0x0118 - 0x00E0)
class UBearTrapOutlineUpdateStrategy final : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                           UnrevealedColor;                                   // 0x00E0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                           RevealedColorToSurvivor;                           // 0x00F0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveLinearColor*                      KillerOutlineFadeCurve;                            // 0x0100(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_108[0x8];                                      // 0x0108(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapActorComponent*                     _owningBearTrapMapActorComponent;                  // 0x0110(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SetOwningBearTrapMapActorComponent(class UMapActorComponent* MapActorComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BearTrapOutlineUpdateStrategy">();
	}
	static class UBearTrapOutlineUpdateStrategy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBearTrapOutlineUpdateStrategy>();
	}
};

// Class TheTrapper.Addon_Beartrap_DisarmRevealer
// 0x0060 (0x0360 - 0x0300)
class UAddon_Beartrap_DisarmRevealer final : public UItemAddon
{
public:
	float                                         _auraRevealDuration;                               // 0x0300(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _timedRevealToKillerStatusEffect;                  // 0x0308(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class ABearTrap*, class ASurvivor*>      _disarmedTrapMap;                                  // 0x0310(0x0050)(Transient, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Addon_Beartrap_DisarmRevealer">();
	}
	static class UAddon_Beartrap_DisarmRevealer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAddon_Beartrap_DisarmRevealer>();
	}
};

// Class TheTrapper.DisarmBearTrapInteraction
// 0x0020 (0x08E0 - 0x08C0)
class UDisarmBearTrapInteraction : public UChargeableInteractionDefinition
{
public:
	float                                         _averageMaxVelocity;                               // 0x08C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _averageMaxVelocitySquared;                        // 0x08C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _updateMontageID;                                  // 0x08C8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _loudNoiseAudibleRangeTunable;                     // 0x08D4(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DisarmBearTrapInteraction">();
	}
	static class UDisarmBearTrapInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisarmBearTrapInteraction>();
	}
};

// Class TheTrapper.Addon_Beartrap_RustedJaws
// 0x0010 (0x0310 - 0x0300)
class UAddon_Beartrap_RustedJaws final : public UItemAddon
{
public:
	TSubclassOf<class UStatusEffect>              _mangledEffectClass;                               // 0x0300(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _mangledEffectLifetime;                            // 0x0308(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Addon_Beartrap_RustedJaws">();
	}
	static class UAddon_Beartrap_RustedJaws* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAddon_Beartrap_RustedJaws>();
	}
};

// Class TheTrapper.BearTrap
// 0x0250 (0x07B0 - 0x0560)
class alignas(0x10) ABearTrap : public ABaseTrap
{
public:
	uint8                                         Pad_560[0x8];                                      // 0x0560(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UBoxPlayerOverlapComponent*             _interactionVolume;                                // 0x0568(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsulePlayerOverlapComponent*         _trapPlayerDetectionZone;                          // 0x0570(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                          _killerSafetyZoneComponent;                        // 0x0578(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                   _outlineComponent;                                 // 0x0580(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBearTrapOutlineUpdateStrategy*         _outlineUpdateStrategy;                            // 0x0588(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapActorComponent*                     _mapActorComponent;                                // 0x0590(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                       _mapActorCollision;                                // 0x0598(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                       _trapBlocker;                                      // 0x05A0(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMontagePlayer*                         _montagePlayer;                                    // 0x05A8(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMulticastInlineDelegate<void()>              _onIsTrapSetChanged;                               // 0x05B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class ADBDPlayer*                             _ownerPlayer;                                      // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UStatusEffect>              _revealWhileTrappedStatusEffectClass;              // 0x05C8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5D0[0x8];                                      // 0x05D0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UDBDNavModifierComponent*               _dangerNavModifierComponent;                       // 0x05D8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          _isTrapperOutOfSafetyZone;                         // 0x05E0(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _maximumAttemptsForSelfUntrap;                     // 0x05E4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  _untrapTargetEvents;                               // 0x05E8(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  _slashedOutOfTrapEvents;                           // 0x0608(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                         _selfUntrapAttemptsRemaining;                      // 0x0628(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_62C[0x4];                                      // 0x062C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractor*                            _mainInteractor;                                   // 0x0630(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionDefinition*                 _trapSurvivor;                                     // 0x0638(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionDefinition*                 _trapKiller;                                       // 0x0640(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                             _trappedPlayer;                                    // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_650[0x90];                                     // 0x0650(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimationMontageSlave*                 _animationMontageSlave;                            // 0x06E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_6E8[0x10];                                     // 0x06E8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTunableStat                           _baseBearTrapCarryCapacity;                        // 0x06F8(0x0080)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _honingStoneStatusEffect;                          // 0x0778(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_780[0x20];                                     // 0x0780(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class ADBDPlayerState>         _owningPlayerState;                                // 0x07A0(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_7A8[0x8];                                      // 0x07A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_ImposeRevealAuraEffect(class ASurvivor* Survivor);
	void InitializeMainInteractor(class UInteractor* Interactor);
	void InitializeTrapKillerInteraction(class UInteractionDefinition* Interaction);
	void InitializeTrapSurvivorInteraction(class UInteractionDefinition* Interaction);
	void OnCollectUpdateEnd();
	void OnCollectUpdateStart();
	void OnGuidedStateChanged();
	void OnLevelReadyToPlay_Implementation();
	void OnPlayerTrapped(class ADBDPlayer* trappedPlayer);
	void OnRep_OwningPlayerState();
	void OnSafetyZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnTrapDetectionZoneOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnTrapDetectionZoneOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnTrappedInjuredBleedoutKO(class ADBDPlayer* injuredBleedoutInstigator);
	void OnTrappedPlayerPickedUp(class ADBDPlayer* picker);
	void SetTrappedPlayer(class ADBDPlayer* trappedPlayer);
	void SetTrappedPlayerSinceMoved(bool didTrap);
	void TrySetTrappedPlayer(class ADBDPlayer* Player);

	class UAkComponent* GetAkAudioComponent() const;
	class UBearTrapAnimInstance* GetAnimInstance() const;
	int32 GetMaximumAttemptsForSelfUntrap() const;
	int32 GetSelfUntrapAttemptsRemaining() const;
	class ADBDPlayer* GetTrappedPlayer() const;
	bool HasTrappedPlayer() const;
	bool HasTrappedPlayerSinceMoved() const;
	bool IsTrapperOutOfSafetyZone() const;
	void PlayMontage(class UAnimMontage* Montage) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BearTrap">();
	}
	static class ABearTrap* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABearTrap>();
	}
};

// Class TheTrapper.BearTrapAnimInstance
// 0x0010 (0x0370 - 0x0360)
class UBearTrapAnimInstance : public USleepingAnimInstance
{
public:
	bool                                          _isBeingCollected;                                 // 0x0360(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _containsSurvivor;                                 // 0x0361(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isTrapSet;                                        // 0x0362(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _wasJustDisarmed;                                  // 0x0363(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_364[0xC];                                      // 0x0364(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetContainsSurvivor(bool containsSurvivor);
	void SetIsBeingCollected(bool isBeingCollected);
	void SetIsTrapSet(bool IsTrapSet);
	void SetWasJustDisarmed(bool wasJustDisarmed);

	bool KillerHasBearTrapNoDamageModifier() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BearTrapAnimInstance">();
	}
	static class UBearTrapAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBearTrapAnimInstance>();
	}
};

// Class TheTrapper.IridescentStone
// 0x0000 (0x0300 - 0x0300)
class UIridescentStone final : public UItemAddon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IridescentStone">();
	}
	static class UIridescentStone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIridescentStone>();
	}
};

// Class TheTrapper.ResetBearTrapInteraction
// 0x0110 (0x09D0 - 0x08C0)
class UResetBearTrapInteraction : public UChargeableInteractionDefinition
{
public:
	class FName                                   _enterMontageIDForBeartrap;                        // 0x08C0(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _udpateMontageIDForBeartrap;                       // 0x08CC(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                          _updateSequenceForBeartrap;                        // 0x08D8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _exitMontageForIDBeartrap;                         // 0x08E0(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _cancelExitMontage;                                // 0x08EC(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UStatusEffect>              _hasteStatusEffectClass;                           // 0x08F8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNonTunableStat                        _setTrapHasteSpeedStat;                            // 0x0900(0x0060)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                         _hasteEffectDurationSeconds;                       // 0x0960(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_964[0x6C];                                     // 0x0964(0x006C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResetBearTrapInteraction">();
	}
	static class UResetBearTrapInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResetBearTrapInteraction>();
	}
};

// Class TheTrapper.SelfUntrap
// 0x00B0 (0x0970 - 0x08C0)
class USelfUntrap : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                   _trapImmunityDuration;                             // 0x08C0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor            _successfulEscapeHealthy;                          // 0x08E8(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor            _successfulEscapeInjured;                          // 0x0908(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor            _successfulEscapeCrawling;                         // 0x0928(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor            _failedEscape;                                     // 0x0948(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                          _canEscape;                                        // 0x0968(0x0001)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_969[0x7];                                      // 0x0969(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SelfUntrap">();
	}
	static class USelfUntrap* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelfUntrap>();
	}
};

// Class TheTrapper.SetBearTrap
// 0x0100 (0x0A40 - 0x0940)
class USetBearTrap : public USetTrapInteraction
{
public:
	class FName                                   _enterMontageIDForBeartrap;                        // 0x0940(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _udpateMontageIDForBeartrap;                       // 0x094C(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                          _updateSequenceForBeartrap;                        // 0x0958(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _exitMontageForIDBeartrap;                         // 0x0960(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _cancelExitMontage;                                // 0x096C(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UStatusEffect>              _hasteStatusEffectClass;                           // 0x0978(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                           _setTrapHasteSpeedStat;                            // 0x0980(0x0080)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                         _hasteEffectDurationSeconds;                       // 0x0A00(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_A04[0x3C];                                     // 0x0A04(0x003C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetSetTrapHasteSpeed();

	float GetHasteEffectDurationSeconds() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SetBearTrap">();
	}
	static class USetBearTrap* GetDefaultObj()
	{
		return GetDefaultObjImpl<USetBearTrap>();
	}
};

// Class TheTrapper.SlashedOutOfBearTrapInteraction
// 0x0050 (0x07C0 - 0x0770)
class USlashedOutOfBearTrapInteraction : public UInteractionDefinition
{
public:
	TArray<class FString>                         _overridableInteractions;                          // 0x0768(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UAnimMontage*                           _updateMontage;                                    // 0x0778(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor            _survivorDyingOutOfBearTrapMontageID;              // 0x0780(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor            _survivorInjuredOutOfBearTrapMontageID;            // 0x07A0(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlashedOutOfBearTrapInteraction">();
	}
	static class USlashedOutOfBearTrapInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlashedOutOfBearTrapInteraction>();
	}
};

// Class TheTrapper.SurvivorBearTrapAnimInstance
// 0x0010 (0x05F0 - 0x05E0)
class USurvivorBearTrapAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	uint8                                         Pad_5E0[0x8];                                      // 0x05E0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          _isTrapped;                                        // 0x05E8(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EInteractionAnimation                         _interactionType;                                  // 0x05E9(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5EA[0x6];                                      // 0x05EA(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SurvivorBearTrapAnimInstance">();
	}
	static class USurvivorBearTrapAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<USurvivorBearTrapAnimInstance>();
	}
};

// Class TheTrapper.TrapKillerInteraction
// 0x00A0 (0x0810 - 0x0770)
class UTrapKillerInteraction : public UInteractionDefinition
{
public:
	TArray<class FString>                         _overridableInteractions;                          // 0x0768(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                               _caughtFootRotationOffset;                         // 0x0778(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                   _openNotifyID;                                     // 0x0790(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _footSocketName;                                   // 0x079C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7A8[0x68];                                     // 0x07A8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TrapKillerInteraction">();
	}
	static class UTrapKillerInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrapKillerInteraction>();
	}
};

// Class TheTrapper.TrapperAnimInstance
// 0x0000 (0x0720 - 0x0720)
class UTrapperAnimInstance : public UKillerAnimInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TrapperAnimInstance">();
	}
	static class UTrapperAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrapperAnimInstance>();
	}
};

// Class TheTrapper.TrapSurvivorInteraction
// 0x00A0 (0x0810 - 0x0770)
class UTrapSurvivorInteraction : public UInteractionDefinition
{
public:
	TArray<class FString>                         _nonOverridableInteractions;                       // 0x0768(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                   _trapAttachSocket;                                 // 0x0778(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _updateMontageID;                                  // 0x0784(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _updateNoScreamMontageID;                          // 0x0790(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_79C[0x4];                                      // 0x079C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDBDTunableRowHandle                   _loudNoiseRangeTunable;                            // 0x07A0(0x0028)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _hemorrhageEffectDurationTunable;                  // 0x07C8(0x0028)(Edit, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UStatusEffect>              _hemorrhageStatusEffect;                           // 0x07F0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UStatusEffect>              _mangledStatusEffect;                              // 0x07F8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UStatusEffect>              _honingStoneWarningStatusEffect;                   // 0x0800(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_808[0x8];                                      // 0x0808(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TrapSurvivorInteraction">();
	}
	static class UTrapSurvivorInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrapSurvivorInteraction>();
	}
};

// Class TheTrapper.Untrap
// 0x0030 (0x08F0 - 0x08C0)
class UUntrap : public UChargeableInteractionDefinition
{
public:
	TArray<class FString>                         _overridableInteractions;                          // 0x08C0(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                   _bearTrapUpdateMontageID;                          // 0x08D0(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   _bearTrapFinishMontageID;                          // 0x08DC(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_8E8[0x8];                                      // 0x08E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class ABearTrap* GetTrap() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Untrap">();
	}
	static class UUntrap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUntrap>();
	}
};

}

