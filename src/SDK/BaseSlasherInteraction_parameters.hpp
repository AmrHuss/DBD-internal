﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseSlasherInteraction

#include "Basic.hpp"


namespace SDK::Params
{

// Function BaseSlasherInteraction.BaseSlasherInteraction_C.GetSlasher
// 0x0020 (0x0020 - 0x0000)
struct BaseSlasherInteraction_C_GetSlasher final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AKiller*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class AKiller*                                K2Node_DynamicCast_AsKiller;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseSlasherInteraction.BaseSlasherInteraction_C.GetCamperInteractable
// 0x0020 (0x0020 - 0x0000)
struct BaseSlasherInteraction_C_GetCamperInteractable final
{
public:
	class ASurvivorInteractable*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class AInteractable*                          CallFunc_GetInteractable_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivorInteractable*                  K2Node_DynamicCast_AsSurvivor_Interactable;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseSlasherInteraction.BaseSlasherInteraction_C.GetCamper
// 0x0018 (0x0018 - 0x0000)
struct BaseSlasherInteraction_C_GetCamper final
{
public:
	class ASurvivor*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class ASurvivorInteractable*                  CallFunc_GetCamperInteractable_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivor*                              CallFunc_GetOwningSurvivor_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

