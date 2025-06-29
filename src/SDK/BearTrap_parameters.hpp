﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BearTrap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BearTrap.BearTrap_C.SetIndicatorActiveStateToTrappedPlayer
// 0x0020 (0x0020 - 0x0000)
struct BearTrap_C_SetIndicatorActiveStateToTrappedPlayer final
{
public:
	bool                                          TrapIndicatorActive;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             CallFunc_GetTrappedPlayer_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USurvivorOutlineUpdateStrategy*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.PlayTrapSoundEvent
// 0x0038 (0x0038 - 0x0000)
struct BearTrap_C_PlayTrapSoundEvent final
{
public:
	class FName                                   SoundEventTunable;                                 // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             instigatingPlayer;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.OnPlayerTrapped
// 0x0008 (0x0008 - 0x0000)
struct BearTrap_C_OnPlayerTrapped final
{
public:
	class ADBDPlayer*                             trappedPlayer;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.OnDropped
// 0x0008 (0x0008 - 0x0000)
struct BearTrap_C_OnDropped final
{
public:
	class ADBDPlayer*                             droppingPlayer;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.OnCollectorSet
// 0x0008 (0x0008 - 0x0000)
struct BearTrap_C_OnCollectorSet final
{
public:
	class ADBDPlayer*                             collector;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.ForceOpen
// 0x0008 (0x0008 - 0x0000)
struct BearTrap_C_ForceOpen final
{
public:
	class ADBDPlayer*                             instigatingPlayer;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.ExecuteUbergraph_BearTrap
// 0x0180 (0x0180 - 0x0000)
struct BearTrap_C_ExecuteUbergraph_BearTrap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_trappedPlayer;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_Success_1;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_Bonus_1;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_ComponentBoundEvent_Player_1;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_TriggerLoudNoise_1;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_hadInput_1;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillCheckCustomType                         K2Node_ComponentBoundEvent_type_1;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x1];                                       // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_ChargeChange_1;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_Success;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_Bonus;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_ComponentBoundEvent_Player;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_TriggerLoudNoise;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_hadInput;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillCheckCustomType                         K2Node_ComponentBoundEvent_type;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_ChargeChange;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             CallFunc_GetTrappedPlayer_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_droppingPlayer;                       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_collector;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerInteractionHandler*              CallFunc_GetPlayerInteractionHandler_ReturnValue;  // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerInteractionHandler*              CallFunc_GetPlayerInteractionHandler_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_CustomEvent_InstigatingPlayer;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable; // 0x0080(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             CallFunc_GetTrappedPlayer_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivor*                              K2Node_DynamicCast_AsSurvivor;                     // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1; // 0x00B4(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCanScreamAndPreventNextScreamIfNeeded_ReturnValue; // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanSeeLoudNoise_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Effect_BearTrapIndicator_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_KillerHasBearTrapNoDamageModifier_return; // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             CallFunc_GetTrappedPlayer_ReturnValue_2;           // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.BndEvt__UntrapChargeable_K2Node_ComponentBoundEvent_114_ChargeableSkillCheckResponse__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BearTrap_C_BndEvt__UntrapChargeable_K2Node_ComponentBoundEvent_114_ChargeableSkillCheckResponse__DelegateSignature final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Bonus;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             Player;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          TriggerLoudNoise;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          hadInput;                                          // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillCheckCustomType                         Type;                                              // 0x0012(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ChargeChange;                                      // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.BndEvt__EscapeChargeable_K2Node_ComponentBoundEvent_242_ChargeableSkillCheckResponse__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BearTrap_C_BndEvt__EscapeChargeable_K2Node_ComponentBoundEvent_242_ChargeableSkillCheckResponse__DelegateSignature final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Bonus;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             Player;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          TriggerLoudNoise;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          hadInput;                                          // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillCheckCustomType                         Type;                                              // 0x0012(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ChargeChange;                                      // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.KillerHasBearTrapNoDamageModifier
// 0x0018 (0x0018 - 0x0000)
struct BearTrap_C_KillerHasBearTrapNoDamageModifier final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          hasBearTrapNoDamageModifier;                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkManager*                           CallFunc_GetPerkManager_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPerkFlag_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BearTrap.BearTrap_C.GetAkAudioComponent
// 0x0008 (0x0008 - 0x0000)
struct BearTrap_C_GetAkAudioComponent final
{
public:
	class UAkComponent*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}

