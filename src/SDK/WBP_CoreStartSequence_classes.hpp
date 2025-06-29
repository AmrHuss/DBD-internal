﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreStartSequence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreStartSequence.WBP_CoreStartSequence_C
// 0x0058 (0x0448 - 0x03F0)
class UWBP_CoreStartSequence_C final : public UCoreStartSequenceWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDBDImage*                              FakeImage;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_2;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Blue;                                              // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Green;                                             // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Yellow;                                            // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void HideStartSequence();
	void TURN_OFF();
	void ExecuteUbergraph_WBP_CoreStartSequence(int32 EntryPoint);
	void ShowStartSequence(const struct FStartSequenceViewData& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreStartSequence_C">();
	}
	static class UWBP_CoreStartSequence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreStartSequence_C>();
	}
};

}

