﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreInputPrompt

#include "Basic.hpp"

#include "DBDUIViewsCore_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreInputPrompt.WBP_CoreInputPrompt_C
// 0x00E8 (0x0460 - 0x0378)
class UWBP_CoreInputPrompt_C final : public UCoreInputPromptWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               BetaFeatureOverlay;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          BetaFeatureTB;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               GlobalSizeBox;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              HighlightIMG;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                LeftSpacerForRect;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              PromptIcon;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                RightSpacerForRect;                                // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          TextLabel;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EControlMode, class UDataTable*>         ControlModeDataMap;                                // 0x03C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsPromptFound;                                     // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             DefaultMouseKBIcon;                                // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          PaddingAlignment;                                  // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421[0x7];                                      // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PaddingValue;                                      // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>      WideIcons;                                         // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              IconSizeWide;                                      // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSizeSquare;                                    // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void DisplayPrompt();
	void ExecuteUbergraph_WBP_CoreInputPrompt(int32 EntryPoint);
	void GetDataTable(class UDataTable** DataTable, bool* IsFound);
	void HandlePromptDataRow(struct FInputPromptDataRow& PromptDataRow);
	void HandleUnfoundPrompt();
	void OnEnabledChanged(bool IsEnabled_0);
	void SetBetaFeatureOverlayVisible(bool IsVisible_0);
	void SetIconTexture(TSoftObjectPtr<class UTexture2D>& iconTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreInputPrompt_C">();
	}
	static class UWBP_CoreInputPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreInputPrompt_C>();
	}
};

}

