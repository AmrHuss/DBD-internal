﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K20

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_K20.WBP_K20_C
// 0x0020 (0x0370 - 0x0350)
class UWBP_K20_C final : public UCorePlayerStatusKillerEffectWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AgonyAnimation;                                    // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              AgonyIcon;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExecutionerStatusData*                 CacheData;                                         // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void SetExecutionerVisibility(bool& IsVisible_0);
	void SetExecutionerData(class UExecutionerStatusData* KillerData);
	void ExecuteUbergraph_WBP_K20(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_K20_C">();
	}
	static class UWBP_K20_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_K20_C>();
	}
};

}

