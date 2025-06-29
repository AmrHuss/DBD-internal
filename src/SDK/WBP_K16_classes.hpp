﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K16

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_K16.WBP_K16_C
// 0x0030 (0x0380 - 0x0350)
class UWBP_K16_C final : public UCorePlayerStatusKillerEffectWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StalkingGhostOnlyIntro;                            // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StalkingExposedIntro;                              // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              StalkingFill;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              StalkingLines;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               StalkingOverlay;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void SetGhostVisibility(bool isLocalKiller, bool IsExposed, bool IsVisible_0);
	void SetGhostData(bool isLocalKiller, class UGhostfaceStatusData* KillerData);
	void ExecuteUbergraph_WBP_K16(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_K16_C">();
	}
	static class UWBP_K16_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_K16_C>();
	}
};

}

