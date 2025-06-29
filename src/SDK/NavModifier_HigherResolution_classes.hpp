﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavModifier_HigherResolution

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavModifier_HigherResolution.NavModifier_HigherResolution_C
// 0x0010 (0x02B0 - 0x02A0)
class ANavModifier_HigherResolution_C final : public AActor
{
public:
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDNavModifierComponent*               DBDNavModifier;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavModifier_HigherResolution_C">();
	}
	static class ANavModifier_HigherResolution_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavModifier_HigherResolution_C>();
	}
};

}

