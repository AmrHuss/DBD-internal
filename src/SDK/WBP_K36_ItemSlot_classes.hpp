﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_K36_ItemSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_K36_ItemSlot.WBP_K36_ItemSlot_C
// 0x00A8 (0x0350 - 0x02A8)
class UWBP_K36_ItemSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              Background;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              Icon;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              SecondaryIcon;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        BackgroundRotation;                                // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BgActiveColor;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BgInactiveColor;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           VecnaActiveColor;                                  // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           VecnaInactiveColor;                                // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconActiveColor;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconInactiveColor;                                 // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RingEmptyColor;                                    // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             SpellMaterials;                                    // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdateColors(class UMaterialInterface* MaterialInstance, bool IsSlotActive, const struct FLinearColor& IconColor);
	void SetOnlyIcon(class UTexture2D* Texture);
	void SetInative(bool IsVecnaItem, int32 SpellIndex);
	void SetEmpty(bool IsVecnaItem);
	void SetDuoIcon(class UTexture2D* MainIcon, class UTexture2D* SecondaryIcon_0);
	void SetActive(bool IsKiller, bool IsVecnaItem, int32 SpellIndex);
	void PreConstruct(bool IsDesignTime);
	void HideIcons();
	void ExecuteUbergraph_WBP_K36_ItemSlot(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_K36_ItemSlot_C">();
	}
	static class UWBP_K36_ItemSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_K36_ItemSlot_C>();
	}
};

}

