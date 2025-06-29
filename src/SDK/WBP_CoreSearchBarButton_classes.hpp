﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreSearchBarButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C
// 0x0040 (0x0428 - 0x03E8)
class UWBP_CoreSearchBarButton_C final : public UCoreSearchBarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              ClearIcon;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Root;                                              // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        In_Desired_Width;                                  // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultColor;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredColor;                                      // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_CoreSearchBarButton(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void Set_Colors(const struct FLinearColor& IconsColors);
	void Update_Visuals(bool IsHovered_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreSearchBarButton_C">();
	}
	static class UWBP_CoreSearchBarButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreSearchBarButton_C>();
	}
};

}

