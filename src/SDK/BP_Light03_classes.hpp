﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Light03

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Light03.BP_Light03_C
// 0x0010 (0x02B0 - 0x02A0)
class ABP_Light03_C final : public AActor
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lamp01;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Light03_C">();
	}
	static class ABP_Light03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Light03_C>();
	}
};

}

