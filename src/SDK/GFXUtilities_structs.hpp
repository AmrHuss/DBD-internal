﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GFXUtilities

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DataTableUtilities_structs.hpp"


namespace SDK
{

// Enum GFXUtilities.EMaterialOverrideParameterCopyType
// NumValues: 0x0005
enum class EMaterialOverrideParameterCopyType : uint8
{
	ChildOverrideOnly                        = 0,
	HierarchyQuickParamOnly                  = 1,
	HierarchyAll                             = 2,
	NoOverride                               = 3,
	EMaterialOverrideParameterCopyType_MAX   = 4,
};

// Enum GFXUtilities.EMaterialOverridePriority
// NumValues: 0x0004
enum class EMaterialOverridePriority : uint8
{
	P0                                       = 0,
	P1                                       = 1,
	P2                                       = 2,
	EMaterialOverridePriority_MAX            = 3,
};

// ScriptStruct GFXUtilities.MaterialMap
// 0x0010 (0x0010 - 0x0000)
struct FMaterialMap final
{
public:
	class UMaterialInterface*                     SrcMaterial;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     DstMaterial;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GFXUtilities.MaterialNamedGroup
// 0x0020 (0x0020 - 0x0000)
struct FMaterialNamedGroup final
{
public:
	class FString                                 GroupName;                                         // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMaterialMap>                   Maps;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GFXUtilities.DBDCullDistanceSizePair
// 0x0008 (0x0008 - 0x0000)
struct FDBDCullDistanceSizePair final
{
public:
	struct FPerPlatformFloat                      Size;                                              // 0x0000(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                      CullDistance;                                      // 0x0004(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GFXUtilities.MaterialHelperOriginalMeshState
// 0x0048 (0x0048 - 0x0000)
struct FMaterialHelperOriginalMeshState final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             _originalMaterials;                                // 0x0008(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             _originalDynamicMaterials;                         // 0x0018(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GFXUtilities.LightMaterialUpdate
// 0x0018 (0x0018 - 0x0000)
struct FLightMaterialUpdate final
{
public:
	class UMaterialHelper*                        Material;                                          // 0x0000(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Multiplier;                                        // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GFXUtilities.LightUpdate
// 0x0010 (0x0010 - 0x0000)
struct FLightUpdate final
{
public:
	class ULightComponent*                        Light;                                             // 0x0000(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Multiplier;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GFXUtilities.MaterialHelperVariantGroup
// 0x0050 (0x0058 - 0x0008)
struct FMaterialHelperVariantGroup final : public FDBDTableRowBase
{
public:
	TMap<TSoftObjectPtr<class UMaterialInterface>, TSoftObjectPtr<class UMaterialInterface>> VariantMaps; // 0x0008(0x0050)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct GFXUtilities.MeshGeneratedMaterialOverride
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FMeshGeneratedMaterialOverride final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GFXUtilities.MeshRecordedMaterialOverrideData
// 0x0088 (0x0088 - 0x0000)
struct alignas(0x08) FMeshRecordedMaterialOverrideData final
{
public:
	uint8                                         Pad_0[0x88];                                       // 0x0000(0x0088)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

