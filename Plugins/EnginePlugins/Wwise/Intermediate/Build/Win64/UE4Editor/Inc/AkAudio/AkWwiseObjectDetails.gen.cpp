// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkWwiseObjectDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseObjectDetails() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkWwiseObjectDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseObjectDetails, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseObjectDetails(FAkWwiseObjectDetails::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseObjectDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWwiseObjectDetails")),new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseObjectDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseObjectDetails"), sizeof(FAkWwiseObjectDetails), Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWwiseObjectDetails" },
				{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId = { UE4CodeGen_Private::EPropertyClass::Str, "ItemId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemId), METADATA_PARAMS(NewProp_ItemId_MetaData, ARRAY_COUNT(NewProp_ItemId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWwiseObjectDetails" },
				{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPath = { UE4CodeGen_Private::EPropertyClass::Str, "ItemPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemPath), METADATA_PARAMS(NewProp_ItemPath_MetaData, ARRAY_COUNT(NewProp_ItemPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWwiseObjectDetails" },
				{ "ModuleRelativePath", "Public/AkWwiseObjectDetails.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName = { UE4CodeGen_Private::EPropertyClass::Str, "ItemName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemName), METADATA_PARAMS(NewProp_ItemName_MetaData, ARRAY_COUNT(NewProp_ItemName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkWwiseObjectDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkWwiseObjectDetails),
				alignof(FAkWwiseObjectDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseObjectDetails_CRC() { return 3987045550U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
