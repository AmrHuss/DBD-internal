﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleStateMachine

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class SimpleStateMachine.SimpleStateMachineBaseState
// 0x0018 (0x0048 - 0x0030)
class USimpleStateMachineBaseState : public UObject
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class USimpleStateMachine*                    _stateMachine;                                     // 0x0040(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleStateMachineBaseState">();
	}
	static class USimpleStateMachineBaseState* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleStateMachineBaseState>();
	}
};

// Class SimpleStateMachine.SimpleStateMachineBaseTransition
// 0x0020 (0x0050 - 0x0030)
class USimpleStateMachineBaseTransition : public UObject
{
public:
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class USimpleStateMachine*                    _stateMachine;                                     // 0x0048(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleStateMachineBaseTransition">();
	}
	static class USimpleStateMachineBaseTransition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleStateMachineBaseTransition>();
	}
};

// Class SimpleStateMachine.SimpleStateMachine
// 0x0320 (0x03D8 - 0x00B8)
class USimpleStateMachine final : public UActorComponent
{
public:
	uint8                                         Pad_B8[0x18];                                      // 0x00B8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class USimpleStateMachineBaseState> _defaultStateClass;                              // 0x00D0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSet<TSubclassOf<class USimpleStateMachineBaseState>> _stateClasses;                             // 0x00D8(0x0050)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSet<TSubclassOf<class USimpleStateMachineBaseTransition>> _transitionsClasses;                  // 0x0128(0x0050)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USimpleStateMachineBaseState*           _defaultState;                                     // 0x0180(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USimpleStateMachineBaseState*           _currentState;                                     // 0x0188(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_190[0x190];                                    // 0x0190(0x0190)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class USimpleStateMachineBaseState*> _states;                                  // 0x0320(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_370[0x60];                                     // 0x0370(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          _debugPrintState;                                  // 0x03D0(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleStateMachine">();
	}
	static class USimpleStateMachine* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleStateMachine>();
	}
};

}

