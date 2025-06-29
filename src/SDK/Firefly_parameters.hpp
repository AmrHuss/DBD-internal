﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Firefly

#include "Basic.hpp"


namespace SDK::Params
{

// Function Firefly.FireflyCosmeticStatusEffect.OnRep_HeldFireflyLantern
// 0x0008 (0x0008 - 0x0000)
struct FireflyCosmeticStatusEffect_OnRep_HeldFireflyLantern final
{
public:
	class AFireflyLantern*                        oldLantern;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyLantern.Cosmetic_OnCollectorInLocker
// 0x0001 (0x0001 - 0x0000)
struct FireflyLantern_Cosmetic_OnCollectorInLocker final
{
public:
	bool                                          inLocker;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyLantern.Cosmetic_OnLanternBeingUsed
// 0x0001 (0x0001 - 0x0000)
struct FireflyLantern_Cosmetic_OnLanternBeingUsed final
{
public:
	bool                                          isBeingUsed;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyLantern.Cosmetic_OnLanternCollected
// 0x0008 (0x0008 - 0x0000)
struct FireflyLantern_Cosmetic_OnLanternCollected final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyLantern.Cosmetic_OnLanternDestroyed
// 0x0008 (0x0008 - 0x0000)
struct FireflyLantern_Cosmetic_OnLanternDestroyed final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyLantern.OnRep_RevealedGenerator
// 0x0008 (0x0008 - 0x0000)
struct FireflyLantern_OnRep_RevealedGenerator final
{
public:
	class AGenerator*                             oldGenerator;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyLanternSFXEffect.OnRep_HeldFireflyLantern
// 0x0008 (0x0008 - 0x0000)
struct FireflyLanternSFXEffect_OnRep_HeldFireflyLantern final
{
public:
	class AFireflyLantern*                        oldLantern;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyLanternSFXEffect.OnRep_NearestFireflyLantern
// 0x0008 (0x0008 - 0x0000)
struct FireflyLanternSFXEffect_OnRep_NearestFireflyLantern final
{
public:
	class AFireflyLantern*                        oldLantern;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyUtilities.GetLanternFromPlayer
// 0x0010 (0x0010 - 0x0000)
struct FireflyUtilities_GetLanternFromPlayer final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFireflyLantern*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Firefly.FireflyUtilities.GetLanternGeneratorComponent
// 0x0010 (0x0010 - 0x0000)
struct FireflyUtilities_GetLanternGeneratorComponent final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFireflyLanternGeneratorComponent*      ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

