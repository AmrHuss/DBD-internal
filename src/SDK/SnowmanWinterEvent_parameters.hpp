﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SnowmanWinterEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Projectile_structs.hpp"
#include "SnowmanWinterEvent_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StartControllingSnowman
// 0x0008 (0x0008 - 0x0000)
struct HideInSnowmanInteraction_Multicast_StartControllingSnowman final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StopControllingSnowman
// 0x0008 (0x0008 - 0x0000)
struct HideInSnowmanInteraction_Multicast_StopControllingSnowman final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowballProjectile.Cosmetic_OnCollisionHit
// 0x0050 (0x0050 - 0x0000)
struct SnowballProjectile_Cosmetic_OnCollisionHit final
{
public:
	class AActor*                                 hitActor;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactInfo                            ImpactInfo;                                        // 0x0008(0x0048)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowballProjectile.Cosmetic_OnPlayerHit
// 0x0050 (0x0050 - 0x0000)
struct SnowballProjectile_Cosmetic_OnPlayerHit final
{
public:
	class ADBDPlayer*                             hitPlayer;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactInfo                            ImpactInfo;                                        // 0x0008(0x0048)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowballProjectile.Cosmetic_OnSnowballThrown
// 0x0020 (0x0020 - 0x0000)
struct SnowballProjectile_Cosmetic_OnSnowballThrown final
{
public:
	struct FVector                                launchDirection;                                   // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         launchSpeed;                                       // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function SnowmanWinterEvent.SnowballProjectile.OnCollisionComponentHit
// 0x0120 (0x0120 - 0x0000)
struct SnowballProjectile_OnCollisionComponentHit final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComponent;                                    // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             HitResult;                                         // 0x0030(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowballProjectile.OnPlayerDetectorHit
// 0x00F8 (0x00F8 - 0x0000)
struct SnowballProjectile_OnPlayerDetectorHit final
{
public:
	class UPrimitiveComponent*                    PrimitiveComponent;                                // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             HitResult;                                         // 0x0008(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowmanBase.Cosmetic_SetSnowmanMaterialVariant
// 0x0004 (0x0004 - 0x0000)
struct SnowmanBase_Cosmetic_SetSnowmanMaterialVariant final
{
public:
	int32                                         materialVariantIndex;                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapBegin
// 0x0110 (0x0110 - 0x0000)
struct Snowman_Authority_OnSnowmanHandOverlapBegin final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapEnd
// 0x0020 (0x0020 - 0x0000)
struct Snowman_Authority_OnSnowmanHandOverlapEnd final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnAdditionalActorHidden
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnAdditionalActorHidden final
{
public:
	class AActor*                                 actorToHide;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller final
{
public:
	class AKiller*                                killerAttackingSnowman;                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor final
{
public:
	class ASurvivor*                              survivorUsingSnowman;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnKillerFinishTransitionOutOfSnowman
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnKillerFinishTransitionOutOfSnowman final
{
public:
	const class AKiller*                          Killer;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled
// 0x0010 (0x0010 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled final
{
public:
	class ASurvivor*                              survivorUsingSnowman;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKiller*                                killerAttackingSnowman;                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty final
{
public:
	class AKiller*                                killerAttackingSnowman;                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerAttackExit
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanDestroyedByKillerAttackExit final
{
public:
	class AKiller*                                killerUsingSnowman;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByNonDamagingAttackWhileControlled
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanDestroyedByNonDamagingAttackWhileControlled final
{
public:
	class ADBDPlayer*                             playerUsingThisSnowman;                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit final
{
public:
	class ASurvivor*                              survivorUsingSnowman;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanHighFive
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanHighFive final
{
public:
	class ASnowman*                               otherSnowman;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledByKiller
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanStartBeingControlledByKiller final
{
public:
	class AKiller*                                killerUsingSnowman;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor final
{
public:
	class ASurvivor*                              survivorUsingSnowman;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedByKiller
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanStartBeingUsedByKiller final
{
public:
	class AKiller*                                killerUsingSnowman;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor final
{
public:
	class ASurvivor*                              survivorUsingSnowman;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledByKiller
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Multicast_OnSnowmanStartBeingControlledByKiller final
{
public:
	class AKiller*                                killerUsingSnowman;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Multicast_OnSnowmanStartBeingControlledBySurvivor final
{
public:
	class ASurvivor*                              survivorUsingSnowman;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedByKiller
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Multicast_OnSnowmanStartBeingUsedByKiller final
{
public:
	class AKiller*                                killerUsingSnowman;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor
// 0x0008 (0x0008 - 0x0000)
struct Snowman_Multicast_OnSnowmanStartBeingUsedBySurvivor final
{
public:
	class ASurvivor*                              survivorUsingSnowman;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Multicast_StartSnowmanDestruction
// 0x0010 (0x0010 - 0x0000)
struct Snowman_Multicast_StartSnowmanDestruction final
{
public:
	ESnowmanDestructionType                       snowmanDestructionType;                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          unlockRequirementsSatisfiedForSurvivor;            // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          unlockRequirementsSatisfiedForKiller;              // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             playerInSnowman;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.OnFinishedPlaying
// 0x0040 (0x0040 - 0x0000)
struct Snowman_OnFinishedPlaying final
{
public:
	struct FGameplayTag                           gameEventType;                                     // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.OnTransitionBackToKillerFinished
// 0x0008 (0x0008 - 0x0000)
struct Snowman_OnTransitionBackToKillerFinished final
{
public:
	const class AKiller*                          Killer;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.Snowman.Multicast_DrawDebugCollisionCheck
// 0x0020 (0x0020 - 0x0000)
struct Snowman_Multicast_DrawDebugCollisionCheck final
{
public:
	struct FVector                                BoxExtent;                                         // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         debugLifetime;                                     // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function SnowmanWinterEvent.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent
// 0x0001 (0x0001 - 0x0000)
struct SnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent final
{
public:
	ESnowmanDestructionType                       snowmanDestructionType;                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowmanKillerPerspectiveChangeComponent.SetFirstPersonTargetData
// 0x0008 (0x0008 - 0x0000)
struct SnowmanKillerPerspectiveChangeComponent_SetFirstPersonTargetData final
{
public:
	const class AKiller*                          Killer;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks
// 0x0004 (0x0004 - 0x0000)
struct SnowmanWinterEventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks final
{
public:
	float                                         numberOfSeconds;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021VisualizeCalculatedSpawnData
// 0x0004 (0x0004 - 0x0000)
struct SnowmanWinterEventComponent_DBD_Winter2021VisualizeCalculatedSpawnData final
{
public:
	float                                         numberOfSeconds;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Authority_OnDamageStateChanged
// 0x0002 (0x0002 - 0x0000)
struct SurvivorHideInSnowmanInteraction_Authority_OnDamageStateChanged final
{
public:
	EHealthState                                  oldDamageState;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHealthState                                  currentDamageState;                                // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Cosmetic_OnSurvivorScreamFromExit
// 0x0008 (0x0008 - 0x0000)
struct SurvivorHideInSnowmanInteraction_Cosmetic_OnSurvivorScreamFromExit final
{
public:
	class ADBDPlayer*                             playerExiting;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

