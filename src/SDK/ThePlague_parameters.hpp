﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThePlague

#include "Basic.hpp"


namespace SDK::Params
{

// Function ThePlague.CleanseSickness.OnCleanseComplete
// 0x0008 (0x0008 - 0x0000)
struct CleanseSickness_OnCleanseComplete final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ThePlague.K15Power.OnLinkedVomitInteractionFinished
// 0x0010 (0x0010 - 0x0000)
struct K15Power_OnLinkedVomitInteractionFinished final
{
public:
	class ADBDPlayer*                             interactingPlayer;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          hasInteractionStarted;                             // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ThePlague.LinkedVomitInteraction.Cosmetic_StartVomiting
// 0x0010 (0x0010 - 0x0000)
struct LinkedVomitInteraction_Cosmetic_StartVomiting final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocallyObserved;                                 // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ThePlague.LinkedVomitInteraction.Cosmetic_StopVomiting
// 0x0008 (0x0008 - 0x0000)
struct LinkedVomitInteraction_Cosmetic_StopVomiting final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

