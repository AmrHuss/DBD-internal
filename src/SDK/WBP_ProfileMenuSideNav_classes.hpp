﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ProfileMenuSideNav

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ProfileMenuSideNav.WBP_ProfileMenuSideNav_C
// 0x0008 (0x03E0 - 0x03D8)
class UWBP_ProfileMenuSideNav_C final : public UCoreTabContainerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_ProfileMenuSideNav(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ProfileMenuSideNav_C">();
	}
	static class UWBP_ProfileMenuSideNav_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ProfileMenuSideNav_C>();
	}
};

}

