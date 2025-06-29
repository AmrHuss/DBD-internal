﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Customization

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct Customization.CharacterCustomization
// 0x0024 (0x0024 - 0x0000)
struct FCharacterCustomization final
{
public:
	class FName                                   Head;                                              // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TorsoOrBody;                                       // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   LegsOrWeapon;                                      // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Customization.CharmIdSlot
// 0x0010 (0x0010 - 0x0000)
struct FCharmIdSlot final
{
public:
	int8                                          slotIndex;                                         // 0x0000(0x0001)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CharmId;                                           // 0x0004(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Customization.EquippedPlayerCustomization
// 0x0038 (0x0038 - 0x0000)
struct FEquippedPlayerCustomization final
{
public:
	struct FCharacterCustomization                _equippedCustomization;                            // 0x0000(0x0024)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCharmIdSlot>                   _equippedCharms;                                   // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}

