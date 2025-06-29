﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IndLightMed

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IndLightMed.BP_IndLightMed_C
// 0x0010 (0x02B0 - 0x02A0)
class ABP_IndLightMed_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_StoreHouse01_Light01_Medium;                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IndLightMed_C">();
	}
	static class ABP_IndLightMed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IndLightMed_C>();
	}
};

}

