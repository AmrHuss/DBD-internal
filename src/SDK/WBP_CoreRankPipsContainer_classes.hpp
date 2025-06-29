﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreRankPipsContainer

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreRankPipsContainer.WBP_CoreRankPipsContainer_C
// 0x0028 (0x02D0 - 0x02A8)
class UWBP_CoreRankPipsContainer_C final : public UUserWidget
{
public:
	class UWBP_CoreRankPip_C*                     WBP_CoreRankPip;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreRankPip_C*                     WBP_CoreRankPip_1;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreRankPip_C*                     WBP_CoreRankPip_2;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreRankPip_C*                     WBP_CoreRankPip_3;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreRankPip_C*                     WBP_CoreRankPip_4;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetPipsState(int32 RankPipsCount, int32 ActivePipsCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreRankPipsContainer_C">();
	}
	static class UWBP_CoreRankPipsContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreRankPipsContainer_C>();
	}
};

}

