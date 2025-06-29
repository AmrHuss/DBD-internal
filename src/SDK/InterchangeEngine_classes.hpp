﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "InterchangeCore_structs.hpp"
#include "InterchangeCore_classes.hpp"
#include "InterchangeEngine_structs.hpp"


namespace SDK
{

// Class InterchangeEngine.InterchangeAssetImportData
// 0x0028 (0x0058 - 0x0030)
class UInterchangeAssetImportData final : public UAssetImportData
{
public:
	class UInterchangeBaseNodeContainer*          NodeContainer;                                     // 0x0030(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NodeUniqueID;                                      // 0x0038(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        Pipelines;                                         // 0x0048(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	TArray<class FString> ScriptExtractDisplayLabels() const;
	TArray<class FString> ScriptExtractFilenames() const;
	class FString ScriptGetFirstFilename() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeAssetImportData">();
	}
	static class UInterchangeAssetImportData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeAssetImportData>();
	}
};

// Class InterchangeEngine.InterchangeBlueprintPipelineBase
// 0x0000 (0x00B0 - 0x00B0)
class UInterchangeBlueprintPipelineBase final : public UBlueprint
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeBlueprintPipelineBase">();
	}
	static class UInterchangeBlueprintPipelineBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeBlueprintPipelineBase>();
	}
};

// Class InterchangeEngine.InterchangeFilePickerBase
// 0x0000 (0x0030 - 0x0030)
class UInterchangeFilePickerBase final : public UObject
{
public:
	bool ScriptedFilePickerForTranslatorAssetType(const EInterchangeTranslatorAssetType TranslatorAssetType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);
	bool ScriptedFilePickerForTranslatorType(const EInterchangeTranslatorType TranslatorType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeFilePickerBase">();
	}
	static class UInterchangeFilePickerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeFilePickerBase>();
	}
};

// Class InterchangeEngine.InterchangePipelineConfigurationBase
// 0x0000 (0x0030 - 0x0030)
class UInterchangePipelineConfigurationBase final : public UObject
{
public:
	EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePipelineConfigurationBase">();
	}
	static class UInterchangePipelineConfigurationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePipelineConfigurationBase>();
	}
};

// Class InterchangeEngine.InterchangeProjectSettings
// 0x0258 (0x02A0 - 0x0048)
class UInterchangeProjectSettings final : public UDeveloperSettings
{
public:
	struct FInterchangeContentImportSettings      ContentImportSettings;                             // 0x0048(0x0140)(Edit, Config, NativeAccessSpecifierPublic)
	struct FInterchangeImportSettings             SceneImportSettings;                               // 0x0188(0x00A0)(Edit, Config, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   FilePickerClass;                                   // 0x0228(0x0038)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x0260(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   GenericPipelineClass;                              // 0x0268(0x0038)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeProjectSettings">();
	}
	static class UInterchangeProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeProjectSettings>();
	}
};

// Class InterchangeEngine.InterchangePythonPipelineBase
// 0x0000 (0x00F0 - 0x00F0)
class UInterchangePythonPipelineBase final : public UInterchangePipelineBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePythonPipelineBase">();
	}
	static class UInterchangePythonPipelineBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePythonPipelineBase>();
	}
};

// Class InterchangeEngine.InterchangePythonPipelineAsset
// 0x0050 (0x0080 - 0x0030)
class UInterchangePythonPipelineAsset final : public UObject
{
public:
	TSoftClassPtr<class UClass>                   PythonClass;                                       // 0x0030(0x0038)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangePythonPipelineBase*         GeneratedPipeline;                                 // 0x0068(0x0008)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 JsonDefaultProperties;                             // 0x0070(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePythonPipelineAsset">();
	}
	static class UInterchangePythonPipelineAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePythonPipelineAsset>();
	}
};

// Class InterchangeEngine.InterchangePipelineStackOverride
// 0x0010 (0x0040 - 0x0030)
class UInterchangePipelineStackOverride final : public UObject
{
public:
	TArray<class UInterchangePipelineBase*>       OverridePipelines;                                 // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePipelineStackOverride">();
	}
	static class UInterchangePipelineStackOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePipelineStackOverride>();
	}
};

// Class InterchangeEngine.InterchangeManager
// 0x01A0 (0x01D0 - 0x0030)
class alignas(0x10) UInterchangeManager final : public UObject
{
public:
	uint8                                         Pad_30[0xA8];                                      // 0x0030(0x00A8)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<TSubclassOf<class UObject>>              RegisteredTranslatorsClass;                        // 0x00D8(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, TSubclassOf<class UObject>> RegisteredFactoryClasses;           // 0x0128(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, class UInterchangeWriterBase*> RegisteredWriters;               // 0x0178(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C8[0x8];                                      // 0x01C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UInterchangeSourceData* CreateSourceData(const class FString& InFilename);
	static class UInterchangeManager* GetInterchangeManagerScripted();

	bool ExportAsset(const class UObject* Asset, bool bIsAutomated);
	bool ExportScene(const class UObject* World, bool bIsAutomated);
	bool ImportAsset(const class FString& ContentPath, const class UInterchangeSourceData* SourceData, const struct FImportAssetParameters& ImportAssetParameters);
	bool ImportScene(const class FString& ContentPath, const class UInterchangeSourceData* SourceData, const struct FImportAssetParameters& ImportAssetParameters);

	const class UClass* GetRegisteredFactoryClass(const class UClass* ClassToMake) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeManager">();
	}
	static class UInterchangeManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeManager>();
	}
};

// Class InterchangeEngine.InterchangeMeshUtilities
// 0x0000 (0x0030 - 0x0030)
class UInterchangeMeshUtilities final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeMeshUtilities">();
	}
	static class UInterchangeMeshUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeMeshUtilities>();
	}
};

}

