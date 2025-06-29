﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeEngine

#include "Basic.hpp"

#include "InterchangeCore_structs.hpp"
#include "InterchangeEngine_structs.hpp"


namespace SDK::Params
{

// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_ScriptExtractDisplayLabels final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_ScriptExtractFilenames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_ScriptGetFirstFilename final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
// 0x0050 (0x0050 - 0x0000)
struct InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType final
{
public:
	EInterchangeTranslatorAssetType               TranslatorAssetType;                               // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInterchangeFilePickerParameters       Parameters;                                        // 0x0008(0x0030)(Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<class FString>                         OutFilenames;                                      // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
// 0x0050 (0x0050 - 0x0000)
struct InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType final
{
public:
	EInterchangeTranslatorType                    TranslatorType;                                    // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInterchangeFilePickerParameters       Parameters;                                        // 0x0008(0x0030)(Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<class FString>                         OutFilenames;                                      // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
// 0x0030 (0x0030 - 0x0000)
struct InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog final
{
public:
	TArray<struct FInterchangeStackInfo>          PipelineStacks;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>       OutPipelines;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 SourceData;                                        // 0x0020(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
// 0x0030 (0x0030 - 0x0000)
struct InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog final
{
public:
	TArray<struct FInterchangeStackInfo>          PipelineStacks;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>       OutPipelines;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 SourceData;                                        // 0x0020(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
// 0x0030 (0x0030 - 0x0000)
struct InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog final
{
public:
	TArray<struct FInterchangeStackInfo>          PipelineStacks;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>       OutPipelines;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 SourceData;                                        // 0x0020(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangeManager.CreateSourceData
// 0x0018 (0x0018 - 0x0000)
struct InterchangeManager_CreateSourceData final
{
public:
	class FString                                 InFilename;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
// 0x0008 (0x0008 - 0x0000)
struct InterchangeManager_GetInterchangeManagerScripted final
{
public:
	class UInterchangeManager*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function InterchangeEngine.InterchangeManager.ExportAsset
// 0x0010 (0x0010 - 0x0000)
struct InterchangeManager_ExportAsset final
{
public:
	const class UObject*                          Asset;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAutomated;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangeManager.ExportScene
// 0x0010 (0x0010 - 0x0000)
struct InterchangeManager_ExportScene final
{
public:
	const class UObject*                          World;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAutomated;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangeManager.ImportAsset
// 0x00E0 (0x00E0 - 0x0000)
struct InterchangeManager_ImportAsset final
{
public:
	class FString                                 ContentPath;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UInterchangeSourceData*           SourceData;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImportAssetParameters                 ImportAssetParameters;                             // 0x0018(0x00C0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangeManager.ImportScene
// 0x00E0 (0x00E0 - 0x0000)
struct InterchangeManager_ImportScene final
{
public:
	class FString                                 ContentPath;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UInterchangeSourceData*           SourceData;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImportAssetParameters                 ImportAssetParameters;                             // 0x0018(0x00C0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
// 0x0010 (0x0010 - 0x0000)
struct InterchangeManager_GetRegisteredFactoryClass final
{
public:
	const class UClass*                           ClassToMake;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UClass*                           ReturnValue;                                       // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

