// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AKWaapiJsonObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAKWaapiJsonObject() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAKWaapiJsonObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAKWaapiJsonObject, Z_Construct_UPackage__Script_AkAudio(), TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAKWaapiJsonObject(FAKWaapiJsonObject::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AKWaapiJsonObject"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AKWaapiJsonObject")),new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAKWaapiJsonObject;
	UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AKWaapiJsonObject"), sizeof(FAKWaapiJsonObject), Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AKWaapiJsonObject.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AKWaapiJsonObject",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAKWaapiJsonObject),
				alignof(FAKWaapiJsonObject),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAKWaapiJsonObject_CRC() { return 2127077822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
