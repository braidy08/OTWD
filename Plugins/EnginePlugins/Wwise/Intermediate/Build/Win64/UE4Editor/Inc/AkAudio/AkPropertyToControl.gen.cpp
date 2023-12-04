// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkPropertyToControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPropertyToControl() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkPropertyToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPropertyToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPropertyToControl"), sizeof(FAkPropertyToControl), Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPropertyToControl(FAkPropertyToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPropertyToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPropertyToControl")),new UScriptStruct::TCppStructOps<FAkPropertyToControl>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl;
	UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPropertyToControl"), sizeof(FAkPropertyToControl), Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkPropertyToControl.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPropertyToControl>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkPropertyToControl" },
				{ "ModuleRelativePath", "Public/AkPropertyToControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProperty = { UE4CodeGen_Private::EPropertyClass::Str, "ItemProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkPropertyToControl, ItemProperty), METADATA_PARAMS(NewProp_ItemProperty_MetaData, ARRAY_COUNT(NewProp_ItemProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemProperty,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkPropertyToControl",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkPropertyToControl),
				alignof(FAkPropertyToControl),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_CRC() { return 4159321693U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
