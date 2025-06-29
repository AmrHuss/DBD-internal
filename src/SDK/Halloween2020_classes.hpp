﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Halloween2020

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// Class Halloween2020.BlightedSerumAddon
// 0x0078 (0x0378 - 0x0300)
class UBlightedSerumAddon final : public UItemAddon
{
public:
	TSubclassOf<class ACollectable>               _blightedSerumCollectable;                         // 0x0300(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumDashInteraction*          _dashInteraction;                                  // 0x0308(0x0008)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          _blightPowerPickedUp;                              // 0x0310(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _theBlightExtraTokens;                             // 0x0314(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         _numberOfDashesPerEvent;                           // 0x0318(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_31C[0x5C];                                     // 0x031C(0x005C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnBlightedDashEnabledVfxSfx();
	void OnRep_BlightPowerPickedUp();
	void OnRep_DashInteraction();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlightedSerumAddon">();
	}
	static class UBlightedSerumAddon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlightedSerumAddon>();
	}
};

// Class Halloween2020.BlightedSerumCollisionInteraction
// 0x0020 (0x0790 - 0x0770)
class UBlightedSerumCollisionInteraction final : public UInteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*      _cooldownInteraction;                              // 0x0768(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _bounceTime;                                       // 0x0770(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_774[0x1C];                                     // 0x0774(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlightedSerumCollisionInteraction">();
	}
	static class UBlightedSerumCollisionInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlightedSerumCollisionInteraction>();
	}
};

// Class Halloween2020.BlightedSerumCooldownInteraction
// 0x0010 (0x0780 - 0x0770)
class UBlightedSerumCooldownInteraction final : public UInteractionDefinition
{
public:
	float                                         _cooldownTime;                                     // 0x0768(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _cameraPitchRecenterTime;                          // 0x076C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_770[0x10];                                     // 0x0770(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlightedSerumCooldownInteraction">();
	}
	static class UBlightedSerumCooldownInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlightedSerumCooldownInteraction>();
	}
};

// Class Halloween2020.BlightedSerumDashInteraction
// 0x00B0 (0x0820 - 0x0770)
class UBlightedSerumDashInteraction final : public UInteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*      _cooldownInteraction;                              // 0x0768(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumCollisionInteraction*     _collisionInteraction;                             // 0x0770(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                            _dashSpeedCurve;                                   // 0x0778(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                            _lookAngleToTurnRateCurveController;               // 0x0780(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                            _lookAngleToTurnRateCurveMouse;                    // 0x0788(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _dashDuration;                                     // 0x0790(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _vectorInterpToSpeed;                              // 0x0794(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _wallDashAccelerationMultiplier;                   // 0x0798(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _cameraPitchRecenterTime;                          // 0x079C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _lookAngleTurnRateModifier;                        // 0x07A0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _wallDashCollisionRadius;                          // 0x07A4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _wallDashCollisionHeight;                          // 0x07A8(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _wallDashCollisionRange;                           // 0x07AC(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_7B0[0x70];                                     // 0x07B0(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction);
	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlightedSerumDashInteraction">();
	}
	static class UBlightedSerumDashInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlightedSerumDashInteraction>();
	}
};

// Class Halloween2020.ToxinPlantInteractable
// 0x0008 (0x03F0 - 0x03E8)
class AToxinPlantInteractable final : public ASpecialBehaviourInteractable
{
public:
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnSalvageInteractionFinished();
	void OnSalvageInteractionStart();
	void OnToxinPlantComplete();
	void SetToxinPlantComplete(const bool IsComplete);

	bool IsToxinPlantComplete() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ToxinPlantInteractable">();
	}
	static class AToxinPlantInteractable* GetDefaultObj()
	{
		return GetDefaultObjImpl<AToxinPlantInteractable>();
	}
};

}

