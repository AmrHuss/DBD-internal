﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FXWidget

#include "Basic.hpp"

#include "FXWidget_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class FXWidget.FXUserWidgetBase
// 0x0060 (0x0308 - 0x02A8)
class UFXUserWidgetBase : public UUserWidget
{
public:
	class UNiagaraSystem*                         NiagaraSystem;                                     // 0x02A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          isFillingWidget;                                   // 0x02B0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B1[0x17];                                     // 0x02B1(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFXWidgetPlayer                        _particlePlayer;                                   // 0x02C8(0x0010)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2D8[0x30];                                     // 0x02D8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UNiagaraComponent* GetNiagaraFX();

	void PlayParticle(float StartAtTime, int32 NumLoopsToPlay) const;
	void StopParticle() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FXUserWidgetBase">();
	}
	static class UFXUserWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFXUserWidgetBase>();
	}
};

}

