﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CollisionTool

#include "Basic.hpp"

#include "BP_CollisionTool_classes.hpp"
#include "BP_CollisionTool_parameters.hpp"


namespace SDK
{

// Function BP_CollisionTool.BP_CollisionTool_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CollisionTool_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollisionTool_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CollisionTool.BP_CollisionTool_C.ReceiveActorOnReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FKey&                      ButtonReleased                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CollisionTool_C::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollisionTool_C", "ReceiveActorOnReleased");

	Params::BP_CollisionTool_C_ReceiveActorOnReleased Parms{};

	Parms.ButtonReleased = std::move(ButtonReleased);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CollisionTool.BP_CollisionTool_C.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FKey&                      ButtonPressed                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CollisionTool_C::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollisionTool_C", "ReceiveActorOnClicked");

	Params::BP_CollisionTool_C_ReceiveActorOnClicked Parms{};

	Parms.ButtonPressed = std::move(ButtonPressed);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CollisionTool.BP_CollisionTool_C.ExecuteUbergraph_BP_CollisionTool
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CollisionTool_C::ExecuteUbergraph_BP_CollisionTool(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollisionTool_C", "ExecuteUbergraph_BP_CollisionTool");

	Params::BP_CollisionTool_C_ExecuteUbergraph_BP_CollisionTool Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CollisionTool.BP_CollisionTool_C.Assign collision channels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Primitive_component_reference                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CollisionTool_C::Assign_collision_channels(class UPrimitiveComponent* Primitive_component_reference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollisionTool_C", "Assign collision channels");

	Params::BP_CollisionTool_C_Assign_collision_channels Parms{};

	Parms.Primitive_component_reference = Primitive_component_reference;

	UObject::ProcessEvent(Func, &Parms);
}

}

