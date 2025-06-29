﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS37

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class TheS37.S37P01
// 0x0058 (0x04B8 - 0x0460)
class US37P01 final : public UPerk
{
public:
	float                                         _killerRevealedTime[0x3];                          // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _chaseLingeringTimer[0x3];                         // 0x046C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _revealKillerStatusEffectClass;                    // 0x0478(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _revealGeneratorStatusEffectClass;                 // 0x0480(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _revealGeneratorStatusEffect;                      // 0x0488(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_490[0x28];                                     // 0x0490(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetChaseLingeringTimerAtLevel() const;
	float GetKillerRevealedTimeAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S37P01">();
	}
	static class US37P01* GetDefaultObj()
	{
		return GetDefaultObjImpl<US37P01>();
	}
};

// Class TheS37.S37P02
// 0x0030 (0x0490 - 0x0460)
class US37P02 final : public UPerk
{
public:
	TSubclassOf<class UStatusEffect>              _enduranceStatusEffect;                            // 0x0460(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _hasteStatusEffect;                                // 0x0468(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _enduranceEffectTimer[0x3];                        // 0x0470(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _hasteSpeedAmount[0x3];                            // 0x047C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_488[0x8];                                      // 0x0488(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetEnduranceEffectTimerAtLevel() const;
	float GetHasteSpeedAmountAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S37P02">();
	}
	static class US37P02* GetDefaultObj()
	{
		return GetDefaultObjImpl<US37P02>();
	}
};

// Class TheS37.S37P03
// 0x0040 (0x04A0 - 0x0460)
class US37P03 final : public UPerk
{
public:
	int32                                         _maxTokens;                                        // 0x0460(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         _repairSpeedDebuffTime[0x3];                       // 0x0464(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _repairSpeedDebuffAmount;                          // 0x0470(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UStatusEffect>              _allowSearchChestForToolboxEffectClass;            // 0x0478(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _repairSpeedDebuffEffectClass;                     // 0x0480(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                          _allowSearchChestForToolboxEffect;                 // 0x0488(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_490[0x10];                                     // 0x0490(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetRepairSpeedDebuffAmount() const;
	float GetRepairSpeedDebuffTimeAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S37P03">();
	}
	static class US37P03* GetDefaultObj()
	{
		return GetDefaultObjImpl<US37P03>();
	}
};

}

