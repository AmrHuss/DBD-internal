﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_COM_ExitGate_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_COM_ExitGate_01.BP_COM_ExitGate_01_C
// 0x00B8 (0x0358 - 0x02A0)
class ABP_COM_ExitGate_01_C : public AActor
{
public:
	class UBP_Clipper_C*                          BP_Clipper;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Ind_ExitBuilding01_Beams;                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Ind_ExitBuilding01_Lights;                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Ind_ExitBuilding01_Draps;                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Ind_ExitBuilding01_Ornament;                    // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Ind_ExitBuilding01_WoodStructure;               // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight1;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_Light3;                                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WoodPlank03;                                    // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ST_ExitBuilding01_Ropes1;                       // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Ind_ExitBuilding01;                             // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_WL_Br_2mStraight01_2;                           // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_WL_Br_Cross01_1;                                // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_WL_Br_2mCap01_1;                                // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_WL_Br_4mStraight01_2;                           // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_WL_Br_2mStraight01_1;                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_WL_Br_4mStraight01_1;                           // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        OOB;                                               // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          ISM_SM_WallPipeMetal02;                            // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          ISM_SM_WallPipeMetal01;                            // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_COM_ExitGate_01_C">();
	}
	static class ABP_COM_ExitGate_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_COM_ExitGate_01_C>();
	}
};

}

