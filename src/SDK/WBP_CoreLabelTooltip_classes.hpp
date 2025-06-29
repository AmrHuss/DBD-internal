﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreLabelTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreLabelTooltip.WBP_CoreLabelTooltip_C
// 0x0010 (0x0348 - 0x0338)
class UWBP_CoreLabelTooltip_C final : public ULabelTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              BG;                                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CoreLabelTooltip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreLabelTooltip_C">();
	}
	static class UWBP_CoreLabelTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreLabelTooltip_C>();
	}
};

}

