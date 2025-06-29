﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreInputPrompt_PressButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreInputPrompt_PressButton.WBP_CoreInputPrompt_PressButton_C
// 0x0008 (0x03E0 - 0x03D8)
class UWBP_CoreInputPrompt_PressButton_C final : public UCoreInteractionPromptActionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CoreInputPrompt_PressButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreInputPrompt_PressButton_C">();
	}
	static class UWBP_CoreInputPrompt_PressButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreInputPrompt_PressButton_C>();
	}
};

}

