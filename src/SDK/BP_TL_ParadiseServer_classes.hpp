﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TL_ParadiseServer

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TL_ParadiseServer.BP_TL_ParadiseServer_C
// 0x0028 (0x04A8 - 0x0480)
class ABP_TL_ParadiseServer_C final : public ABorderTile
{
public:
	class UDBDInstancedFoliageComponent*          InstancedFoliageActor1;                            // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDInstancedFoliageComponent*          InstancedFoliageActor1_0;                          // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Tile_16x16_01;                              // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root_0;                                            // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TL_ParadiseServer_C">();
	}
	static class ABP_TL_ParadiseServer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TL_ParadiseServer_C>();
	}
};

}

