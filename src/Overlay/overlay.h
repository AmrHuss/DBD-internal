#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <imgui.h>

namespace overlay
{

	inline bool flightAndNoclip;
	inline bool serverSideSpeed;
	inline float speedMultiplier;
	inline float teleportCrosshairDistance;

	-
	inline bool selfHeal;       
	inline bool selfUnhook;       
	inline bool applyHasteEffect; 
	inline float hasteDuration;

	inline bool forceCompleteGenerators;
	inline bool forceOpenGates;        
	inline bool forceEndMatch;          


	extern bool perfectSkillChecks;
	extern bool forceCancelInteraction;

	extern bool rapidCrouchSpam;

	extern bool forceLungeState;


	extern bool serverSideSpeedEnabled;


	extern float serverSideSpeedMultiplier; 
	
	extern bool flightAndNoclipEnabled; 


	extern bool speedHackEnabled;
	extern float speedHackMultiplier;

	extern float teleportDistance;


	extern	bool instantHealSelf;
	extern	bool instantUnhookSelf;
	extern	bool instantOpenExitGates;
	extern	bool instantCompleteGenerators;
	extern	bool revealAllTotems;


	extern bool useCustomMovementMode;
	extern int customMovementMode; 

	extern bool forceLungeSpeed;

	extern bool useSpeedStatModifier;
	extern float speedStatMultiplier;
	extern bool useServerTeleport;
	extern float teleportDistance;


	extern bool enabled;
	extern bool superSpeedEnabled;
		extern bool noClipEnabled;

		
		extern bool aimbotEnabled;
	extern int aimbotKey;
	extern bool superJumpEnabled;
		extern bool noGravityEnabled;
		extern bool highAirControlEnabled;


		

	extern bool forceShowKillerAuras;
	extern bool espEnabled;
	extern bool mainEspBoxEnabled;
	extern bool cornerEspBoxEnabled;
	extern bool boneEspEnabled;
	extern bool nameEspEnabled;
	extern bool healthBarEnabled;
	extern bool healthTextEnabled;
	extern bool distanceEspEnabled;
	extern bool snaplinesEnabled;
	extern bool headDotEnabled;

	extern bool killerEspEnabled;
	extern bool survivorEspEnabled;
	extern bool zombieEspEnabled;
	extern bool generatorEspEnabled;
	extern bool trapEspEnabled;

	extern ImU32 survivorEspColor;
	extern ImU32 zombieEspColor;
	extern ImU32 generatorEspColor; 
	extern ImU32 trapEspColor; 

	extern bool fovCircleEnabled;
	extern bool lineToClosestEnemyEnabled;
	extern bool radarEnabled;

	extern float healthBarWidth;
	extern float mainEspBoxColor[3];
	extern ImU32 textEspColor;
	extern float cornerEspBoxColor[3];
	extern float headDotRadius;
	extern ImU32 lineToEnemyColor;
	extern float cornerEspBoxThickness;
	extern ImU32 fovCircleColor;
	extern float mainEspBoxThickness;
	extern float cornerFraction;
	extern ImVec2 snaplineOrigin;
	extern ImU32 headDotColor;
	extern float aimbotFov;
	extern float aimbotSmoothness;

	extern bool  rainbowModeEnabled ;
	extern float rainbowSpeed;

	extern ImU32 gadgetEspColor;
	extern bool autoRepairGenerators;

	extern bool palletEspEnabled;
	extern bool windowEspEnabled;
	extern bool chestEspEnabled;
	extern bool totemEspEnabled;
	extern bool meatHookEspEnabled;
	extern bool hatchEspEnabled;
	extern bool exitGateEspEnabled;



	
	extern bool instantActionsEnabled;
	extern float instantActionSpeedMultiplier;
	extern bool perfectSkillChecksEnabled;
	extern bool forceShowKillerAura;

	extern bool forceShowAuras;
	extern bool forceShowSurvivorAuras;
	extern bool forceShowGeneratorAuras;
	extern bool forceShowTotemAuras;
	extern bool forceShowTrapAuras  ;
	extern bool forceShowChestAuras;
	extern bool forceShowPalletAuras;
	extern bool forceShowHookAuras;
	extern bool forceShowExitGateAuras;
		extern bool forceShowHatchAuras;



	extern ImU32 killerEspColor;
	extern ImU32 survivorEspColor;
	extern ImU32 zombieEspColor;
	extern ImU32 generatorEspColor;
	extern ImU32 trapEspColor;

	extern ImU32 healthBarHighColor;
	extern ImU32 healthBarMidColor;
	extern ImU32 healthBarLowColor;
	extern ImU32 friendlyEspColor;
	extern ImU32 espVisibleColor;
	extern ImU32 espOccludedColor;
	extern ImU32 snaplineColor;

	extern float actionSpeedMultiplier; 


	extern bool forceRunState;
	extern float teleportDistance;
	extern char perk1_ID[64];
	extern char perk2_ID[64];
	extern char perk3_ID[64];
	extern char perk4_ID[64];
	extern char itemToGive[64];
	extern bool triggerInjectPerks;
	extern bool triggerGiveItem;
	extern bool triggerForceObjectives;
	extern bool triggerEndGame;
	extern bool triggerLeaveGame;
	extern bool triggerInstantHeal;
	extern bool triggerInstantUnhook;

	void InitializeColors();
	void draw_gui();
	void render(bool* pRunning);

}
