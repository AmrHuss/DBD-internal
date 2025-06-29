﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HideActorInBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HideActorInBox.BP_HideActorInBox_C
// 0x0038 (0x02D8 - 0x02A0)
class ABP_HideActorInBox_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InfluenceBox;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actors_to_Turn_Off;                                // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class FName                                   Tag__;                                             // 0x02C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Fetch_objects();
	void ExecuteUbergraph_BP_HideActorInBox(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HideActorInBox_C">();
	}
	static class ABP_HideActorInBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HideActorInBox_C>();
	}
};

}

