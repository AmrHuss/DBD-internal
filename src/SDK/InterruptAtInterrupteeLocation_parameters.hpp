﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterruptAtInterrupteeLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function InterruptAtInterrupteeLocation.InterruptAtInterrupteeLocation_C.GetInterruptionSnapPointRotationForInterruptor
// 0x0070 (0x0070 - 0x0000)
struct InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor final
{
public:
	const class ADBDPlayer*                       interruptor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       interruptee;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue;              // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue_1;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InterruptAtInterrupteeLocation.InterruptAtInterrupteeLocation_C.GetInterruptionSnapPointPositionForInterruptor
// 0x0078 (0x0078 - 0x0000)
struct InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor final
{
public:
	const class ADBDPlayer*                       interruptor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       interruptee;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue;              // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue_1;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetClosestPointOnOrbit_ReturnValue;       // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnOrbit_distance_ImplicitCast; // 0x0070(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

