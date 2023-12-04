// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniTool() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniTool();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
class UScriptStruct* FHoudiniTool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniTool_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniTool, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniTool"), sizeof(FHoudiniTool), Get_Z_Construct_UScriptStruct_FHoudiniTool_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniTool(FHoudiniTool::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniTool"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniTool
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniTool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HoudiniTool")),new UScriptStruct::TCppStructOps<FHoudiniTool>);
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniTool;
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniTool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniTool_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniTool"), sizeof(FHoudiniTool), Get_Z_Construct_UScriptStruct_FHoudiniTool_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/HoudiniTool.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniTool>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpURL_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniTool" },
				{ "ModuleRelativePath", "Public/HoudiniTool.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpURL = { UE4CodeGen_Private::EPropertyClass::Str, "HelpURL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHoudiniTool, HelpURL), METADATA_PARAMS(NewProp_HelpURL_MetaData, ARRAY_COUNT(NewProp_HelpURL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniTool" },
				{ "ModuleRelativePath", "Public/HoudiniTool.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HoudiniAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "HoudiniAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHoudiniTool, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(NewProp_HoudiniAsset_MetaData, ARRAY_COUNT(NewProp_HoudiniAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniTool" },
				{ "ModuleRelativePath", "Public/HoudiniTool.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconPath = { UE4CodeGen_Private::EPropertyClass::Struct, "IconPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHoudiniTool, IconPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_IconPath_MetaData, ARRAY_COUNT(NewProp_IconPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniTool" },
				{ "ModuleRelativePath", "Public/HoudiniTool.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip = { UE4CodeGen_Private::EPropertyClass::Str, "Tooltip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHoudiniTool, Tooltip), METADATA_PARAMS(NewProp_Tooltip_MetaData, ARRAY_COUNT(NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniTool" },
				{ "ModuleRelativePath", "Public/HoudiniTool.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHoudiniTool, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HelpURL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoudiniAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IconPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tooltip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HoudiniTool",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHoudiniTool),
				alignof(FHoudiniTool),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniTool_CRC() { return 3245099321U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
