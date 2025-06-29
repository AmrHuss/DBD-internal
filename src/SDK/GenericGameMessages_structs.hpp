﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericGameMessages

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct GenericGameMessages.OpenCurrentCalendarMessage
// 0x0004 (0x0004 - 0x0000)
struct FOpenCurrentCalendarMessage final
{
public:
	int32                                         RemainingDailyRewards;                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.LoginMessage
// 0x0010 (0x0010 - 0x0000)
struct FLoginMessage final
{
public:
	class FString                                 MirrorsId;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.PatchStartMessage
// 0x0001 (0x0001 - 0x0000)
struct FPatchStartMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.PatchEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FPatchEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.PatchFailMessage
// 0x0001 (0x0001 - 0x0000)
struct FPatchFailMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.SDKUIMessage
// 0x0001 (0x0001 - 0x0000)
struct FSDKUIMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.SDKEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FSDKEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.LoadStartMessage
// 0x0001 (0x0001 - 0x0000)
struct FLoadStartMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.LoadEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FLoadEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.LoginJsonMessage
// 0x0038 (0x0038 - 0x0000)
struct FLoginJsonMessage final
{
public:
	class FString                                 LoginJson;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LoginType;                                         // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RoleID;                                            // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNewAccount;                                      // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.TutorialEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FTutorialEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.PlayerLevelMessage
// 0x0008 (0x0008 - 0x0000)
struct FPlayerLevelMessage final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalXp;                                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.RoleUnlockMessage
// 0x0001 (0x0001 - 0x0000)
struct FRoleUnlockMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.MatchEndMessage
// 0x0001 (0x0001 - 0x0000)
struct FMatchEndMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.GameVersionMessage
// 0x0010 (0x0010 - 0x0000)
struct FGameVersionMessage final
{
public:
	class FString                                 Version;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.PlayerNameMessage
// 0x0010 (0x0010 - 0x0000)
struct FPlayerNameMessage final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.LanguageMessage
// 0x0010 (0x0010 - 0x0000)
struct FLanguageMessage final
{
public:
	class FString                                 Language;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.FAQMessage
// 0x0001 (0x0001 - 0x0000)
struct FFAQMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.BuyCurrencyMessage
// 0x0010 (0x0010 - 0x0000)
struct FBuyCurrencyMessage final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.OrderDoneMessage
// 0x0028 (0x0028 - 0x0000)
struct FOrderDoneMessage final
{
public:
	int32                                         Code;                                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OrderId;                                           // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OrderChannel;                                      // 0x0018(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.BuyTipsMessage
// 0x0004 (0x0004 - 0x0000)
struct FBuyTipsMessage final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.SkuDetailsMessage
// 0x0050 (0x0050 - 0x0000)
struct FSkuDetailsMessage final
{
public:
	TMap<class FString, class FString>            BundlePrices;                                      // 0x0000(0x0050)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct GenericGameMessages.ForceLogoutMessage
// 0x0001 (0x0001 - 0x0000)
struct FForceLogoutMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.UserCenterMessage
// 0x0001 (0x0001 - 0x0000)
struct FUserCenterMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GenericGameMessages.RateAppMessage
// 0x0001 (0x0001 - 0x0000)
struct FRateAppMessage final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

