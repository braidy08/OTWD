// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkWaapiFieldNames.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiFieldNames() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkWaapiFieldNames::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiFieldNames, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiFieldNames"), sizeof(FAkWaapiFieldNames), Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiFieldNames(FAkWaapiFieldNames::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiFieldNames"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiFieldNames")),new UScriptStruct::TCppStructOps<FAkWaapiFieldNames>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiFieldNames;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiFieldNames"), sizeof(FAkWaapiFieldNames), Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkWaapiFieldNames.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiFieldNames>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWaapiFieldNames" },
				{ "ModuleRelativePath", "Public/AkWaapiFieldNames.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName = { UE4CodeGen_Private::EPropertyClass::Str, "FieldName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkWaapiFieldNames, FieldName), METADATA_PARAMS(NewProp_FieldName_MetaData, ARRAY_COUNT(NewProp_FieldName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FieldName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkWaapiFieldNames",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkWaapiFieldNames),
				alignof(FAkWaapiFieldNames),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiFieldNames_CRC() { return 1109254146U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
