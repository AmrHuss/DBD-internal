﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsAndMessagesCommon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// Enum NewsAndMessagesCommon.ENewsAndMessagesSectionType
// NumValues: 0x0007
enum class ENewsAndMessagesSectionType : uint8
{
	None                                     = 0,
	Header                                   = 1,
	Text                                     = 2,
	Image                                    = 3,
	QRCode                                   = 4,
	ItemShowcase                             = 5,
	ENewsAndMessagesSectionType_MAX          = 6,
};

// Enum NewsAndMessagesCommon.ENewsAndMessagesShowcasedItemType
// NumValues: 0x0005
enum class ENewsAndMessagesShowcasedItemType : uint8
{
	Character                                = 0,
	Customization                            = 1,
	Outfit                                   = 2,
	Currency                                 = 3,
	ENewsAndMessagesShowcasedItemType_MAX    = 4,
};

// Enum NewsAndMessagesCommon.ENewsAndMessagesIconType
// NumValues: 0x0005
enum class ENewsAndMessagesIconType : uint8
{
	None                                     = 0,
	News                                     = 1,
	Message                                  = 2,
	Reward                                   = 3,
	ENewsAndMessagesIconType_MAX             = 4,
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesRuntimeShowcasedItem
// 0x0028 (0x0028 - 0x0000)
struct FNewsAndMessagesRuntimeShowcasedItem final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0010(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Amount;                                            // 0x0020(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesShowcasedItem
// 0x0040 (0x0040 - 0x0000)
struct FNewsAndMessagesShowcasedItem final
{
public:
	ENewsAndMessagesShowcasedItemType             Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 customizationId;                                   // 0x0018(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutfitId;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECurrencyType                                 currencyId;                                        // 0x0038(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Amount;                                            // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesSection
// 0x0070 (0x0070 - 0x0000)
struct FNewsAndMessagesSection final
{
public:
	ENewsAndMessagesSectionType                   Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                 QRCodeUri;                                         // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          QRCodeIsApprovedOnSwitch;                          // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        Image;                                             // 0x0038(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNewsAndMessagesShowcasedItem>  ShowcasedItems;                                    // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesImage
// 0x0030 (0x0030 - 0x0000)
struct FNewsAndMessagesImage final
{
public:
	class FString                                 Uri;                                               // 0x0000(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PackagedPath;                                      // 0x0010(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ContentVersion;                                    // 0x0020(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesRuntimeSection
// 0x0088 (0x0088 - 0x0000)
struct FNewsAndMessagesRuntimeSection final
{
public:
	ENewsAndMessagesSectionType                   Type;                                              // 0x0000(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0008(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Text_IsSet;                                        // 0x0018(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNewsAndMessagesImage                  Image;                                             // 0x0020(0x0030)(Transient, NativeAccessSpecifierPublic)
	bool                                          Image_IsSet;                                       // 0x0050(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNewsAndMessagesRuntimeShowcasedItem> Rewards;                                     // 0x0058(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                          Rewards_IsSet;                                     // 0x0068(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 QRCode;                                            // 0x0070(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          QRCode_IsSet;                                      // 0x0080(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SwitchKillSwitch;                                  // 0x0081(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SwitchKillSwitch_IsSet;                            // 0x0082(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_83[0x5];                                       // 0x0083(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesCallToAction
// 0x0038 (0x0038 - 0x0000)
struct FNewsAndMessagesCallToAction final
{
public:
	class FString                                 Link;                                              // 0x0000(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Text;                                              // 0x0010(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExtraText;                                         // 0x0020(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ExtraText_IsSet;                                   // 0x0030(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShouldPresentAsQRCode;                             // 0x0031(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          QRCodeIsApprovedOnSwitch;                          // 0x0032(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesBodyRuntimeData
// 0x0088 (0x0088 - 0x0000)
struct FNewsAndMessagesBodyRuntimeData final
{
public:
	TArray<struct FNewsAndMessagesRuntimeSection> Sections;                                          // 0x0000(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FNewsAndMessagesCallToAction           CallToAction;                                      // 0x0010(0x0038)(Transient, NativeAccessSpecifierPublic)
	bool                                          CallToAction_IsSet;                                // 0x0048(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNewsAndMessagesImage                  Image;                                             // 0x0050(0x0030)(Transient, NativeAccessSpecifierPublic)
	bool                                          Image_IsSet;                                       // 0x0080(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NewsAndMessagesCommon.NewsAndMessagesBodyData
// 0x0010 (0x0010 - 0x0000)
struct FNewsAndMessagesBodyData final
{
public:
	TArray<struct FNewsAndMessagesSection>        Sections;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

