﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreAntiCampSelfUnhookMeter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreAntiCampSelfUnhookMeter.WBP_CoreAntiCampSelfUnhookMeter_C
// 0x0080 (0x03E0 - 0x0360)
class UWBP_CoreAntiCampSelfUnhookMeter_C final : public UCoreTimedEffectMeterWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       barFadeOutAnim;                                    // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       barFadeInAnim;                                     // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       barFullGlowAnim;                                   // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       barStoppedAnim;                                    // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              BarBG;                                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BarGlow;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ProgressBar;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ProgressBarContainer;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              ProgressBarMarker;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           DefaultLeftColor;                                  // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultRightColor;                                 // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FullColor;                                         // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StopBarStoppedAnim();
	void SetVisualState(const ETimedEffectMeterState newState);
	void SetProgress(const float Progress);
	void SetIsFull();
	void Set_Marker_Position(double Progress);
	void Reset();
	void PreConstruct(bool IsDesignTime);
	void Finished_18B58D7D4EE358FC44EC139A48F433DF();
	void ExecuteUbergraph_WBP_CoreAntiCampSelfUnhookMeter(int32 EntryPoint);
	void Event_Play_Show_Animation(bool shouldBeVisible);
	void Event_Play_Hide_Animation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreAntiCampSelfUnhookMeter_C">();
	}
	static class UWBP_CoreAntiCampSelfUnhookMeter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreAntiCampSelfUnhookMeter_C>();
	}
};

}

