﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ProceduralLevel.ProceduralLevel_C
// 0x00D8 (0x0380 - 0x02A8)
class AProceduralLevel_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         KillerIntroCameraPanInTimeline_KillerIntroCameraPanInProgress_90DDCDC0413917EC974D058D1C1E7EB7; // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            KillerIntroCameraPanInTimeline__Direction_90DDCDC0413917EC974D058D1C1E7EB7; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B5[0x3];                                      // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     KillerIntroCameraPanInTimeline;                    // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CameraUpdateTimeline_Rotation_8EB8A9204B1A077AD4878D9169A5E619; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CameraUpdateTimeline__Direction_8EB8A9204B1A077AD4878D9169A5E619; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CameraUpdateTimeline;                              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         FadeInTimeline_fade_510A37DA46429F2572AB1DA832B4246A; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeInTimeline__Direction_510A37DA46429F2572AB1DA832B4246A; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeInTimeline;                                    // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  PlayerPawn;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       PlayerCam;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        OriginalAspectRatio;                               // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKiller;                                          // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayerController*                   PlayerController;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpectator;                                       // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   PlayerCameraManager;                               // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CameraTransformBeforeKillerIntroPanIn;             // 0x0320(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CameraUpdateTimeline__FinishedFunc();
	void CameraUpdateTimeline__UpdateFunc();
	void ExecuteUbergraph_ProceduralLevel(int32 EntryPoint);
	void FadeInTimeline__FinishedFunc();
	void FadeInTimeline__UpdateFunc();
	void FinalizeIntro();
	void GetLocalPlayer(class UCameraComponent** PlayerCam_0, class ADBDPlayer** PlayerPawn_0, class ADBDPlayerController** PlayerController_0, class APlayerCameraManager** PlayerCameraManager_0);
	bool IsLevelReady();
	void KillerIntroCameraPanInTimeline__FinishedFunc();
	void KillerIntroCameraPanInTimeline__UpdateFunc();
	void OnLocalPlayerGameStateChanged(class ADBDPlayerState* PlayerState, EGameState newGameState);
	void OnLocalPlayerStateChanged(const class APlayerState* PlayerState);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetupIntro();
	bool ShouldUpdateCameraPanInTimeline();
	void UpdateCamera(double Yaw);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProceduralLevel_C">();
	}
	static class AProceduralLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProceduralLevel_C>();
	}
};

}

