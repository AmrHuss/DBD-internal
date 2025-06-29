﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreHUD_Objectives

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "DBDUIViewInterfaces_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreHUD_Objectives.WBP_CoreHUD_Objectives_C
// 0x0050 (0x03B8 - 0x0368)
class UWBP_CoreHUD_Objectives_C final : public UCoreHudObjectivesWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Objectives_Exit_C*                 WBP_Objectives_Exit;                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Objectives_Generator_C*            WBP_Objectives_Generator;                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Objectives_Hatch_C*                WBP_Objectives_Hatch;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Objectives_HookCount_C*            WBP_Objectives_HookCount;                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FHudObjectivesViewData                 hudObjectivesData;                                 // 0x0390(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        FocusableChildren;                                 // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void UpdateSpacers();
	void UpdateHatchObjective();
	void UpdateGeneratorsObjective();
	void UpdateExitObjective();
	void SetTutorialHighlight(const bool Show, const EHudComponent& componentId);
	void SetHudObjectiveData(const struct FHudObjectivesViewData& hudObjectiveViewData);
	void SetHookCountVisibility(bool Visible);
	void SetHookCountData(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount, const TSet<int32>& assistedHookIndices, const bool isFinisherMoriAvailable);
	void PlayFocusAnimation();
	void PlayCustomFocusAnimation();
	void InitWidget(const EGameType gameType, const int32 numberOfSegments);
	void InitFocusableChildrenArray();
	void HighlightGeneratorCompleted(const bool isFuelGenerator);
	void ExecuteUbergraph_WBP_CoreHUD_Objectives(int32 EntryPoint);
	void Construct();
	void ClearHookCountData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreHUD_Objectives_C">();
	}
	static class UWBP_CoreHUD_Objectives_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreHUD_Objectives_C>();
	}
};

}

