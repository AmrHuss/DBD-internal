﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBDGamma

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class DBDGamma.GammaSubsystem
// 0x0018 (0x0050 - 0x0038)
class UGammaSubsystem final : public UGameInstanceSubsystem
{
public:
	float                                         _gammaInterpSpeed;                                 // 0x0038(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C[0x14];                                      // 0x003C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GammaSubsystem">();
	}
	static class UGammaSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGammaSubsystem>();
	}
};

}

