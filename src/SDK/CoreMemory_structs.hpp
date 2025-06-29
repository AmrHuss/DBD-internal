﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreMemory

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct CoreMemory.CoreMemoryFragmentSpawnData
// 0x0018 (0x0018 - 0x0000)
struct FCoreMemoryFragmentSpawnData final
{
public:
	TSubclassOf<class ACoreMemoryFragment>        FragmentClass;                                     // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TriggerZoneRadiusDistance;                         // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnDistanceFromPlayer;                           // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnDistanceFromOtherFragments;                   // 0x0010(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HeightDistance;                                    // 0x0014(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct CoreMemory.CoreMemoryStatusEffectDetails
// 0x0030 (0x0030 - 0x0000)
struct FCoreMemoryStatusEffectDetails final
{
public:
	TSubclassOf<class UStatusEffect>              _statusEffect;                                     // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 _effectDurationParamKey;                           // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 _customEffectParamKey;                             // 0x0018(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _effectDuration;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _customEffectParam;                                // 0x002C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

