﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CamperMale01

#include "Basic.hpp"

#include "BP_Camper_Character_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CamperMale01.BP_CamperMale01_C
// 0x0000 (0x2260 - 0x2260)
class ABP_CamperMale01_C final : public ABP_Camper_Character_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CamperMale01_C;                  // 0x2258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_CamperMale01(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CamperMale01_C">();
	}
	static class ABP_CamperMale01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CamperMale01_C>();
	}
};

}

