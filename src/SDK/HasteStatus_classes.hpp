﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HasteStatus

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HasteStatus.HasteStatus_C
// 0x0008 (0x0350 - 0x0348)
class AHasteStatus_C final : public AModifierBasedStatusView
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HasteStatus_C">();
	}
	static class AHasteStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHasteStatus_C>();
	}
};

}

