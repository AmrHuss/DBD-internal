﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClosetExitFast

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LockerExitInteraction_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClosetExitFast.ClosetExitFast_C
// 0x0010 (0x07C0 - 0x07B0)
class UClosetExitFast_C final : public UBP_LockerExitInteraction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnInteractionFinished(class ADBDPlayer* Player, bool hasInteractionStarted);
	void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);
	void ExecuteUbergraph_ClosetExitFast(int32 EntryPoint);

	bool IsInteractionPossibleClient(const class ADBDPlayer* Player, EInputInteractionType interactionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClosetExitFast_C">();
	}
	static class UClosetExitFast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClosetExitFast_C>();
	}
};

}

