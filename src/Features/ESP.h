#pragma once
#include "../SDK.hpp"
#include "imgui.h" 

namespace ESP {

    void RenderESP(ImDrawList* drawList);
    void RenderCharacterESP(ImDrawList* drawList, SDK::ACharacter* character, const SDK::FVector& localPlayerLocation);
    void  RenderActorESP(ImDrawList* drawList, SDK::AActor* actor, const char* displayName, ImU32 color, const SDK::FVector& localPlayerLocation);

    }
struct BoneConnection {
    const char* bone1_name;
    const char* bone2_name;
};

static const BoneConnection skeletonConnections[] = {

    { "joint_Head_01", "joint_NeckA_01" },
    { "joint_NeckA_01", "joint_TorsoC_01" },     
    { "joint_TorsoC_01", "joint_TorsoB_01" },   
    { "joint_TorsoB_01", "joint_TorsoA_01" },   
    { "joint_TorsoA_01", "joint_Pelvis_01" },   


    { "joint_TorsoC_01", "joint_ClavicleLT_01" },
    { "joint_ClavicleLT_01", "joint_ShoulderLT_01" },
    { "joint_ShoulderLT_01", "joint_ElbowLT_01" },
    { "joint_ElbowLT_01", "joint_HandLT_01" },

    { "joint_TorsoC_01", "joint_ClavicleRT_01" },
    { "joint_ClavicleRT_01", "joint_ShoulderRT_01" },
    { "joint_ShoulderRT_01", "joint_ElbowRT_01" },
    { "joint_ElbowRT_01", "joint_HandRT_01" },

 
    { "joint_Pelvis_01", "joint_HipLT_01" },
    { "joint_HipLT_01", "joint_KneeLT_01" },
    { "joint_KneeLT_01", "joint_FootLT_01" },
    { "joint_FootLT_01", "joint_ToeLT_01" },

  
    { "joint_Pelvis_01", "joint_HipRT_01" },
    { "joint_HipRT_01", "joint_KneeRT_01" },
    { "joint_KneeRT_01", "joint_FootRT_01" },
    { "joint_FootRT_01", "joint_ToeRT_01" }
}; 
static const size_t numSkeletonConnections = sizeof(skeletonConnections) / sizeof(BoneConnection);
