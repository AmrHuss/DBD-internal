﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DBDProceduralMode

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DBDProceduralMode.BP_DBDProceduralMode_C
// 0x0008 (0x0630 - 0x0628)
class ABP_DBDProceduralMode_C final : public ADBDGameMode
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DBDProceduralMode_C">();
	}
	static class ABP_DBDProceduralMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DBDProceduralMode_C>();
	}
};

}

