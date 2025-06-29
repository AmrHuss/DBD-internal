﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_NiagaraHandler

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_NiagaraHandler.PDA_NiagaraHandler_C
// 0x0058 (0x0090 - 0x0038)
class UPDA_NiagaraHandler_C final : public UPrimaryDataAsset
{
public:
	class FText                                   Description;                                       // 0x0038(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNiagaraSystem*                         Niagara_System;                                    // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Niagara_System_Looping;                         // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Attach_System_to_Owner_Reference;                  // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Attach_Point_Name;                                 // 0x005C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_Offset;                                   // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EPlayerRole>                           Visible_by;                                        // 0x0080(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_NiagaraHandler_C">();
	}
	static class UPDA_NiagaraHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_NiagaraHandler_C>();
	}
};

}

