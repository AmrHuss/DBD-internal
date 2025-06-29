﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BearTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TheTrapper_classes.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BearTrap.BearTrap_C
// 0x00B0 (0x0860 - 0x07B0)
class ABearTrap_C : public ABearTrap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UZoneComponent*                         ZoneComponent;                                     // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDSkeletalMeshComponentBudgeted*      FxOutlineBIG;                                      // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          DisarmZone;                                        // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       UntrapZone;                                        // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpherePlayerOverlapComponent*          PickTrapZone;                                      // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractor*                            MainInteractor;                                    // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCollectBearTrap_C*                     CollectBearTrap;                                   // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UResetTrap_C*                           ResetTrapChargeable;                               // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDisarm_C*                              Disarm_Trap;                                       // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USetTrap_C*                             SetTrap;                                           // 0x0800(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUntrap_C*                              UntrapOrbit;                                       // 0x0808(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USlashedOutOfTrap_C*                    SlashedOutOfTrap;                                  // 0x0810(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEscapeTrap_C*                          EscapeTrap;                                        // 0x0818(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTrapCamper_C*                          TrapCamper;                                        // 0x0820(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTrapKiller_C*                          TrapKiller;                                        // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   SetTrapChargeable;                                 // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   DisarmChargeable;                                  // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   EscapeChargeable;                                  // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   UntrapChargeable;                                  // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak_Audio_BearTrap;                                 // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void SetIndicatorActiveStateToTrappedPlayer(bool TrapIndicatorActive);
	void ReceiveBeginPlay();
	void PlayTrapSoundEvent(class FName SoundEventTunable, class ADBDPlayer* instigatingPlayer);
	void OnTrappedVFX();
	void OnTrappedSFX();
	void OnPlayerTrapped(class ADBDPlayer* trappedPlayer);
	void OnDropped(class ADBDPlayer* droppingPlayer);
	void OnCollectorSet(class ADBDPlayer* collector);
	void ForceOpen(class ADBDPlayer* instigatingPlayer);
	void ExecuteUbergraph_BearTrap(int32 EntryPoint);
	void BndEvt__UntrapChargeable_K2Node_ComponentBoundEvent_114_ChargeableSkillCheckResponse__DelegateSignature(bool Success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);
	void BndEvt__EscapeChargeable_K2Node_ComponentBoundEvent_242_ChargeableSkillCheckResponse__DelegateSignature(bool Success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);

	void KillerHasBearTrapNoDamageModifier(bool* Return) const;
	class UAkComponent* GetAkAudioComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BearTrap_C">();
	}
	static class ABearTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABearTrap_C>();
	}
};

}

