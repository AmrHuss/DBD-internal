﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AB_Slasher_SubGraph_LookAt

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_AB_Slasher_SubGraph_LookAt.BPI_AB_Slasher_SubGraph_LookAt_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_AB_Slasher_SubGraph_LookAt_C final
{
public:
	void SetLookAtAnimationFromMainAB(const struct FAset_Slasher_LookAT& LookAtAnimSet);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_AB_Slasher_SubGraph_LookAt_C">();
	}
	static class IBPI_AB_Slasher_SubGraph_LookAt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_AB_Slasher_SubGraph_LookAt_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};

}

