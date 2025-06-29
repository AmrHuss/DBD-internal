﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S3Command

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct S3Command.AccessKey
// 0x0020 (0x0020 - 0x0000)
struct FAccessKey final
{
public:
	class FString                                 KeyId;                                             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct S3Command.EmblemTunableItem
// 0x0018 (0x0018 - 0x0000)
struct FEmblemTunableItem final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        Value;                                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct S3Command.EmblemThreshold
// 0x0010 (0x0010 - 0x0000)
struct FEmblemThreshold final
{
public:
	TArray<int32>                                 Thresholds;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct S3Command.EmblemTunableData
// 0x0060 (0x0060 - 0x0000)
struct FEmblemTunableData final
{
public:
	TArray<struct FEmblemTunableItem>             EmblemValues;                                      // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FEmblemThreshold>  EmblemThresholds;                                  // 0x0010(0x0050)(NativeAccessSpecifierPublic)
};

// ScriptStruct S3Command.RankThresholdsData
// 0x0028 (0x0028 - 0x0000)
struct FRankThresholdsData final
{
public:
	TArray<int32>                                 PipsRequired;                                      // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 ResetStartingPips;                                 // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ResetStartingPips_IsSet;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct S3Command.RankGroupData
// 0x0018 (0x0018 - 0x0000)
struct FRankGroupData final
{
public:
	TArray<double>                                EmblemThreshold;                                   // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         RankThreshold;                                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct S3Command.RankGroups
// 0x0020 (0x0020 - 0x0000)
struct FRankGroups final
{
public:
	TArray<struct FRankGroupData>                 KillerRankGroup;                                   // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRankGroupData>                 SurvivorRankGroup;                                 // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct S3Command.RankResetDateData
// 0x0010 (0x0010 - 0x0000)
struct FRankResetDateData final
{
public:
	int32                                         StartYear;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StartMonth;                                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ResetDay;                                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ResetHour;                                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct S3Command.RankGlobalData
// 0x0038 (0x0038 - 0x0000)
struct FRankGlobalData final
{
public:
	int32                                         NoPipLossRankThreshold;                            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NoRankLossThreshold;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BaseTrialPips;                                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPips;                                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         NoPositivePipGameTypes;                            // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          NoPositivePipGameTypes_IsSet;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRankResetDateData>             RankResetDates;                                    // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct S3Command.RankDefinitionData
// 0x0080 (0x0080 - 0x0000)
struct FRankDefinitionData final
{
public:
	struct FRankThresholdsData                    RankThreshold;                                     // 0x0000(0x0028)(NativeAccessSpecifierPublic)
	struct FRankGroups                            RankGroupDefinition;                               // 0x0028(0x0020)(NativeAccessSpecifierPublic)
	struct FRankGlobalData                        GlobalData;                                        // 0x0048(0x0038)(NativeAccessSpecifierPublic)
};

}

