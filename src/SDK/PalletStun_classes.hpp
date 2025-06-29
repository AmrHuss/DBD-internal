﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PalletStun

#include "Basic.hpp"

#include "GenericStun_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PalletStun.PalletStun_C
// 0x0010 (0x0790 - 0x0780)
class UPalletStun_C final : public UGenericStun_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_PalletStun(int32 EntryPoint);
	void DispatchStunEvent(class ADBDPlayer* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PalletStun_C">();
	}
	static class UPalletStun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPalletStun_C>();
	}
};

}

