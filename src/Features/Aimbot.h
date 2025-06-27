#pragma once
#include "../SDK.hpp"

namespace Aimbot {
    inline SDK::AActor* Target = nullptr; 
    inline SDK::FVector TargetHeadPosition; 
    inline SDK::FRotator TargetRotation;

    void FindClosestTarget();
    void RunAimbot();
}