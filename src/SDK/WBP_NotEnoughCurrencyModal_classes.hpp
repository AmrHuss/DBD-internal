﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NotEnoughCurrencyModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NotEnoughCurrencyModal.WBP_NotEnoughCurrencyModal_C
// 0x0020 (0x03C8 - 0x03A8)
class UWBP_NotEnoughCurrencyModal_C final : public UNotEnoughCurrencyModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              BG;                                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_NotEnoughCurrencyModal(int32 EntryPoint);
	void SetTooltipData(const struct FNotEnoughCurrencyModalViewData& Data);
	void StartCloseAnimation();
	void StartOpenAnimation();
	void StopCloseAnimation();
	void StopOpenAnimation();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NotEnoughCurrencyModal_C">();
	}
	static class UWBP_NotEnoughCurrencyModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NotEnoughCurrencyModal_C>();
	}
};

}

