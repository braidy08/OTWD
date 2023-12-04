// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkWaapiSubscriptionId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiSubscriptionId() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkWaapiSubscriptionId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiSubscriptionId"), sizeof(FAkWaapiSubscriptionId), Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiSubscriptionId(FAkWaapiSubscriptionId::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiSubscriptionId"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiSubscriptionId")),new UScriptStruct::TCppStructOps<FAkWaapiSubscriptionId>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiSubscriptionId;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiSubscriptionId"), sizeof(FAkWaapiSubscriptionId), Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkWaapiSubscriptionId.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiSubscriptionId>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkWaapiSubscriptionId",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkWaapiSubscriptionId),
				alignof(FAkWaapiSubscriptionId),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiSubscriptionId_CRC() { return 1789830468U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
