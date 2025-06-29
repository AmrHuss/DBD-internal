﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QRCodeGenerator

#include "Basic.hpp"

#include "QRCodeGenerator_structs.hpp"


namespace SDK::Params
{

// Function QRCodeGenerator.QRCodeGeneratorSubsystem.GenerateQrCode
// 0x0038 (0x0038 - 0x0000)
struct QRCodeGeneratorSubsystem_GenerateQrCode final
{
public:
	class FString                                 stringToEncode;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQRCodeGenerationParams                params;                                            // 0x0010(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

