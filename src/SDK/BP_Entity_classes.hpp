﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Entity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Entity.BP_Entity_C
// 0x0048 (0x0308 - 0x02C0)
class ABP_Entity_C final : public AEntity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialHelper*                        MaterialHelper;                                    // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDSkeletalMeshComponentBudgeted*      MeatHookSpider;                                    // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USleepingSkinnedMeshRegisterer*         SleepingSkinnedMeshRegisterer;                     // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak_Audio_TheEntity;                                // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMontagePlayer*                         MontagePlayer;                                     // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_SacrificeEnd;                                   // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimationMontageSlave*                 MontageFollower;                                   // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetAnimationStrugglePercent(float Percent);
	void SetAnimationIsStruggling(bool isStruggling);
	void ReceiveBeginPlay();
	void OnReactionStart();
	void InitEntity(class AMeatHook* MeatHook);
	void HideEntity();
	class UEntityAnimInstance* GetAnimInstance();
	void ExecuteUbergraph_BP_Entity(int32 EntryPoint);
	void CompleteSacrifice(bool isBasementHook);
	void ChangeToStruggleState();
	void ChangeToSacrificeState();
	void ChangeToIdleState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Entity_C">();
	}
	static class ABP_Entity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Entity_C>();
	}
};

}

