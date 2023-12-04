// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkWaapiUri.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiUri() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkWaapiUri::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiUri, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiUri(FAkWaapiUri::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiUri"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiUri")),new UScriptStruct::TCppStructOps<FAkWaapiUri>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkWaapiUri.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiUri>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWaapiUri" },
				{ "ModuleRelativePath", "Public/AkWaapiUri.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Uri = { UE4CodeGen_Private::EPropertyClass::Str, "Uri", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkWaapiUri, Uri), METADATA_PARAMS(NewProp_Uri_MetaData, ARRAY_COUNT(NewProp_Uri_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Uri,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkWaapiUri",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkWaapiUri),
				alignof(FAkWaapiUri),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_CRC() { return 759674845U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
