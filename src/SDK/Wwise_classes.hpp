﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wwise

#include "Basic.hpp"

#include "AkAudio_classes.hpp"
#include "AudioLinkCore_classes.hpp"


namespace SDK
{

// Class Wwise.WwiseAudioLinkComponent
// 0x0030 (0x0580 - 0x0550)
class UWwiseAudioLinkComponent final : public UAkComponent
{
public:
	uint8                                         Pad_548[0x8];                                      // 0x0548(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UWwiseAudioLinkSettings*                Settings;                                          // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                             Sound;                                             // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoPlay;                                         // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        AudioComponent;                                    // 0x0568(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_570[0x10];                                     // 0x0570(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WwiseAudioLinkComponent">();
	}
	static class UWwiseAudioLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWwiseAudioLinkComponent>();
	}
};

// Class Wwise.WwiseAudioLinkSettings
// 0x0060 (0x00A0 - 0x0040)
class UWwiseAudioLinkSettings final : public UAudioLinkSettingsAbstract
{
public:
	TSoftObjectPtr<class UAkAudioEvent>           StartEvent;                                        // 0x0040(0x0038)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldClearBufferOnReceipt;                       // 0x0078(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ProducerToConsumerBufferRatio;                     // 0x007C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialSilenceFillRatio;                           // 0x0080(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x14];                                      // 0x0084(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          StartEventResolved;                                // 0x0098(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WwiseAudioLinkSettings">();
	}
	static class UWwiseAudioLinkSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWwiseAudioLinkSettings>();
	}
};

}

