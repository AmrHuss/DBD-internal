﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSortButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreSortButton.WBP_CoreSortButton_C
// 0x0058 (0x0508 - 0x04B0)
class UWBP_CoreSortButton_C final : public UCoreButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              IconIMG;                                           // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           DefaultColor;                                      // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PressedColor;                                      // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredColor;                                      // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DisabledColor;                                     // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Background_IMG_Dynamic_Material;                   // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_CoreSortButton(int32 EntryPoint);
	void OnEnabledChanged(bool IsEnabled_0);
	void OnHovered();
	void OnPressed();
	void OnReleased();
	void OnUnhovered();
	void SetColors(const struct FLinearColor& BackgroundColor, const struct FLinearColor& IconColor);
	void UpdateVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreSortButton_C">();
	}
	static class UWBP_CoreSortButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreSortButton_C>();
	}
};

}

