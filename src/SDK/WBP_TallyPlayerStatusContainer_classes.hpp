﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TallyPlayerStatusContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "DBDSharedTypes_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TallyPlayerStatusContainer.WBP_TallyPlayerStatusContainer_C
// 0x0090 (0x0688 - 0x05F8)
class UWBP_TallyPlayerStatusContainer_C final : public UCoreTallyPlayerStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CorePlayerCardContainer_C*         Badge;                                             // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePlayerCardContainer_C*         Banner;                                            // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              BotLabelIcon;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreMenuPerk_C*                    CorePerk_1;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreMenuPerk_C*                    CorePerk_2;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreMenuPerk_C*                    CorePerk_3;                                        // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreMenuPerk_C*                    CorePerk_4;                                        // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              CrossplayIcon;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              KillerLoadoutBlockerBG;                            // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PerksItemsContainer;                               // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              PlayerStatusIcon;                                  // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePrestigeWidget_C*              PrestigeIcon;                                      // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDImage*                              StatusBackground;                                  // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             BackgroundKiller;                                  // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             BackgroundLocalPlayer;                             // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     PlayerStateIcon;                                   // 0x0678(0x0010)(Edit, BlueprintVisible)

public:
	void TryGetAnimatedWidget(const struct FPlayerCardViewData& ViewData, class UWBP_CorePlayerCardContainer_C* parentWidget, bool* Success);
	void SetVisualIsPlayer(bool IsPlayer);
	void SetReportButtonOpacity(const float Opacity);
	void SetPlayerCards(const struct FPlayerCardViewData& Banner_0, const struct FPlayerCardViewData& Badge_0);
	void SetPlayerCardAnimation(const bool IsAnimationPlaying_0);
	void SetKillerLoadoutBlocked(const bool IsBlocked);
	void SetData(const struct FTallyPlayerStatusViewData& ViewData, EGameType gameType, bool isUsingCharacterClass);
	void SetBackground(bool IsKiller, bool IsPlayer);
	void ExecuteUbergraph_WBP_TallyPlayerStatusContainer(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TallyPlayerStatusContainer_C">();
	}
	static class UWBP_TallyPlayerStatusContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TallyPlayerStatusContainer_C>();
	}
};

}

