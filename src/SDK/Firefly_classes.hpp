﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Firefly

#include "Basic.hpp"

#include "DBDBots_classes.hpp"
#include "Mutators_classes.hpp"
#include "DBDInteraction_classes.hpp"
#include "DeadByDaylight_classes.hpp"
#include "SystemUtilities_structs.hpp"
#include "DBDGameplay_classes.hpp"
#include "DataTableUtilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "DBDAnimation_classes.hpp"


namespace SDK
{

// Class Firefly.AISkill_FindCollectable_FireflyLanternOnGenerator
// 0x0000 (0x0518 - 0x0518)
class UAISkill_FindCollectable_FireflyLanternOnGenerator final : public UAISkill_FindCollectable_Camper
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_FindCollectable_FireflyLanternOnGenerator">();
	}
	static class UAISkill_FindCollectable_FireflyLanternOnGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_FindCollectable_FireflyLanternOnGenerator>();
	}
};

// Class Firefly.AISkill_InteractionUseItem_FireflyLantern
// 0x0000 (0x0290 - 0x0290)
class UAISkill_InteractionUseItem_FireflyLantern final : public UAISkill_InteractionUseItem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_InteractionUseItem_FireflyLantern">();
	}
	static class UAISkill_InteractionUseItem_FireflyLantern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_InteractionUseItem_FireflyLantern>();
	}
};

// Class Firefly.AISkill_PlaceFireflyLanternOnGenerator
// 0x0010 (0x0128 - 0x0118)
class UAISkill_PlaceFireflyLanternOnGenerator final : public UAISkill
{
public:
	class FName                                   BBGeneratorInteractorKey;                          // 0x0118(0x000C)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_PlaceFireflyLanternOnGenerator">();
	}
	static class UAISkill_PlaceFireflyLanternOnGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_PlaceFireflyLanternOnGenerator>();
	}
};

// Class Firefly.FireflyCosmeticStatusEffect
// 0x0008 (0x03A8 - 0x03A0)
class UFireflyCosmeticStatusEffect final : public UMutatorCosmeticStatusEffect
{
public:
	class AFireflyLantern*                        _heldFireflyLantern;                               // 0x03A0(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void Cosmetic_OnFireflyLanternCollected();
	void Cosmetic_OnFireflyLanternDropped();
	void OnRep_HeldFireflyLantern(class AFireflyLantern* oldLantern);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FireflyCosmeticStatusEffect">();
	}
	static class UFireflyCosmeticStatusEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireflyCosmeticStatusEffect>();
	}
};

// Class Firefly.CollectFireflyLanternFromGeneratorInteraction
// 0x0000 (0x07B0 - 0x07B0)
class UCollectFireflyLanternFromGeneratorInteraction : public UCollectItemInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CollectFireflyLanternFromGeneratorInteraction">();
	}
	static class UCollectFireflyLanternFromGeneratorInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectFireflyLanternFromGeneratorInteraction>();
	}
};

// Class Firefly.DestroyFireflyLanternOnGeneratorInteraction
// 0x0000 (0x0770 - 0x0770)
class UDestroyFireflyLanternOnGeneratorInteraction final : public UInteractionDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DestroyFireflyLanternOnGeneratorInteraction">();
	}
	static class UDestroyFireflyLanternOnGeneratorInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestroyFireflyLanternOnGeneratorInteraction>();
	}
};

// Class Firefly.FireflyLantern
// 0x00C0 (0x0660 - 0x05A0)
class AFireflyLantern final : public ABaseSurvivorCollectable
{
public:
	class UChargerComponent*                      _itemChargerComponent;                             // 0x05A0(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                   _itemChargeableComponent;                          // 0x05A8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5B0[0x50];                                     // 0x05B0(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	class AGenerator*                             _revealedGenerator;                                // 0x0600(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ADBDPlayer>              _destroyingPlayer;                                 // 0x0608(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          _lanternSpawnedFromChest;                          // 0x0610(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_611[0x4F];                                     // 0x0611(0x004F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Cosmetic_OnChestWithLanternOpened();
	void Cosmetic_OnCollectorInLocker(bool inLocker);
	void Cosmetic_OnLanternBeingUsed(bool isBeingUsed);
	void Cosmetic_OnLanternCollected(class ADBDPlayer* Player);
	void Cosmetic_OnLanternDestroyed(class ADBDPlayer* Player);
	void Cosmetic_OnLanternDropped();
	void OnLanternInteractionFinished();
	void OnLanternInteractionStarted();
	void OnRep_DestroyingPlayer();
	void OnRep_LanternSpawnedFromChest();
	void OnRep_RevealedGenerator(class AGenerator* oldGenerator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FireflyLantern">();
	}
	static class AFireflyLantern* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFireflyLantern>();
	}
};

// Class Firefly.FireflyLanternGeneratorComponent
// 0x0170 (0x0228 - 0x00B8)
class UFireflyLanternGeneratorComponent final : public UActorComponent
{
public:
	TSubclassOf<class UInteractionDefinition>     _pickUpLanternFrontInteractionClass;               // 0x00B8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UInteractionDefinition>     _pickUpLanternBackInteractionClass;                // 0x00C0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UInteractionDefinition>     _pickUpLanternLeftRightInteractionClass;           // 0x00C8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UInteractionDefinition>     _putDownLanternFrontInteractionClass;              // 0x00D0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UInteractionDefinition>     _putDownLanternBackInteractionClass;               // 0x00D8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UInteractionDefinition>     _putDownLanternLeftRightInteractionClass;          // 0x00E0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UInteractionDefinition>     _destroyLanternInteractionClass;                   // 0x00E8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                _placedLanternPositionOffset;                      // 0x00F0(0x0018)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                               _placedLanternRotation;                            // 0x0108(0x0018)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _hideGeneratorAuraFromKillerEffect;                // 0x0120(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _placedLanternGeneratorRevealRange;                // 0x0128(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _hideGeneratorAuraFromKillerEffectDuration;        // 0x0150(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _placeLanternScoreEventCooldownDuration;           // 0x0178(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class UStatusEffect*>                  _hideGeneratorAuraFromKillerEffects;               // 0x01A0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class AFireflyLantern*                        _lanternOnGenerator;                               // 0x01B0(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ADBDPlayer>              _placedLanternPlayer;                              // 0x01B8(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class ADBDPlayer*, struct FFastTimer>    _authority_placeLanternScoreTimers;                // 0x01C0(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_210[0x18];                                     // 0x0210(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnLevelReadyToPlay();
	void OnRep_LanternOnGenerator();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FireflyLanternGeneratorComponent">();
	}
	static class UFireflyLanternGeneratorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireflyLanternGeneratorComponent>();
	}
};

// Class Firefly.FireflyLanternInteraction
// 0x0000 (0x08C0 - 0x08C0)
class UFireflyLanternInteraction final : public UChargeableInteractionDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FireflyLanternInteraction">();
	}
	static class UFireflyLanternInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireflyLanternInteraction>();
	}
};

// Class Firefly.FireflyLanternSFXEffect
// 0x0078 (0x0410 - 0x0398)
class UFireflyLanternSFXEffect final : public UStatusEffect
{
public:
	bool                                          _isHoldingLantern;                                 // 0x0398(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_399[0x3];                                      // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _distanceToNearestFireflyLantern;                  // 0x039C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFireflyLantern*                        _nearestFireflyLantern;                            // 0x03A0(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFireflyLantern*                        _heldFireflyLantern;                               // 0x03A8(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AFireflyLantern*>                _authority_trackedFireflyLanterns;                 // 0x03B0(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C0[0x50];                                     // 0x03C0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Cosmetic_OnLanternCollected();
	void Cosmetic_OnLanternDropped();
	void OnRep_HeldFireflyLantern(class AFireflyLantern* oldLantern);
	void OnRep_NearestFireflyLantern(class AFireflyLantern* oldLantern);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FireflyLanternSFXEffect">();
	}
	static class UFireflyLanternSFXEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireflyLanternSFXEffect>();
	}
};

// Class Firefly.FireflySurvivorAnimInstance
// 0x0030 (0x0610 - 0x05E0)
class UFireflySurvivorAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                          _hasFireflyLanternEquipped;                        // 0x05E0(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isUsingFireflyLantern;                            // 0x05E1(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5E2[0x2];                                      // 0x05E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           _asFireflyLanternEquippedTag;                      // 0x05E4(0x000C)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           _asFireflyLanternUseTag;                           // 0x05F0(0x000C)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5FC[0x4];                                      // 0x05FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          _asFireflyLanternCarry;                            // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                          _asFireflyLanternUse;                              // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FireflySurvivorAnimInstance">();
	}
	static class UFireflySurvivorAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireflySurvivorAnimInstance>();
	}
};

// Class Firefly.FireflyUtilities
// 0x0000 (0x0030 - 0x0030)
class UFireflyUtilities final : public UBlueprintFunctionLibrary
{
public:
	static class AFireflyLantern* GetLanternFromPlayer(const class ADBDPlayer* Player);
	static class UFireflyLanternGeneratorComponent* GetLanternGeneratorComponent(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FireflyUtilities">();
	}
	static class UFireflyUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireflyUtilities>();
	}
};

// Class Firefly.PutFireflyLanternOnGeneratorInteraction
// 0x0000 (0x0770 - 0x0770)
class UPutFireflyLanternOnGeneratorInteraction final : public UInteractionDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PutFireflyLanternOnGeneratorInteraction">();
	}
	static class UPutFireflyLanternOnGeneratorInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPutFireflyLanternOnGeneratorInteraction>();
	}
};

}

