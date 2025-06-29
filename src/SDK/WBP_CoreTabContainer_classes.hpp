﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreTabContainer

#include "Basic.hpp"

#include "DBDUIViewsCore_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreTabContainer.WBP_CoreTabContainer_C
// 0x00D8 (0x04B0 - 0x03D8)
class UWBP_CoreTabContainer_C final : public UCoreTabContainerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Left;                                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NextInputSwitcherContainer;                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PreviousInputSwitcherContainer;                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Right;                                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                   PreviousTabControllerKey;                          // 0x0400(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                   NextTabControllerKey;                              // 0x0420(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<EControlMode, class UDataTable*>         ControlModeDataMap;                                // 0x0440(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 InputSwitcherClass;                                // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InputSwitcherNudge;                                // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            TabAlignment;                                      // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void CreateInputSwitcher(class UClass* InputSwitcherClass_0, class UCoreInputSwitcherWidget*& OutInputSwitcher, class UPanelWidget* InputSwitcherContainer, ETextJustify Alignment);
	void ExecuteUbergraph_WBP_CoreTabContainer(int32 EntryPoint);
	void InitInputSwitchers();
	void OnControlModeChangedBP(EControlMode controlMode);
	void OnNextInputSwitcherTriggered();
	void OnPreviousInputSwitcherTriggered();
	void PreConstruct(bool IsDesignTime);
	void SetInputSwitcherAlignment();
	void UpdateAlignments();
	void UpdateInputSwitchers();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreTabContainer_C">();
	}
	static class UWBP_CoreTabContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreTabContainer_C>();
	}
};

}

