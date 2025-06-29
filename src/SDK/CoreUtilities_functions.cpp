﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreUtilities

#include "Basic.hpp"

#include "CoreUtilities_classes.hpp"
#include "CoreUtilities_parameters.hpp"


namespace SDK
{

// Function CoreUtilities.CoreUtilities.GetGameInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameInstance*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameInstance* UCoreUtilities::GetGameInstance(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CoreUtilities", "GetGameInstance");

	Params::CoreUtilities_GetGameInstance Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CoreUtilities.CoreUtilities.GetGlobalWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UCoreUtilities::GetGlobalWorld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CoreUtilities", "GetGlobalWorld");

	Params::CoreUtilities_GetGlobalWorld Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CoreUtilities.CoreUtilities.GetRandomValuesFromArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const TArray<int32>&                    Values                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// const int32                             numberOfDesiredValues                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UCoreUtilities::GetRandomValuesFromArray(const TArray<int32>& Values, const int32 numberOfDesiredValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CoreUtilities", "GetRandomValuesFromArray");

	Params::CoreUtilities_GetRandomValuesFromArray Parms{};

	Parms.Values = std::move(Values);
	Parms.numberOfDesiredValues = numberOfDesiredValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CoreUtilities.CoreUtilities.GetWorldFromContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UCoreUtilities::GetWorldFromContext(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CoreUtilities", "GetWorldFromContext");

	Params::CoreUtilities_GetWorldFromContext Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CoreUtilities.PropertyParser.CopyProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*                  Dest                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UActorComponent*            Origin                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    copyTransform                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TArray<class FName>&              propertiesToExclude                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPropertyParser::CopyProperties(class UActorComponent* Dest, const class UActorComponent* Origin, bool copyTransform, const TArray<class FName>& propertiesToExclude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PropertyParser", "CopyProperties");

	Params::PropertyParser_CopyProperties Parms{};

	Parms.Dest = Dest;
	Parms.Origin = Origin;
	Parms.copyTransform = copyTransform;
	Parms.propertiesToExclude = std::move(propertiesToExclude);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

