// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkBoolPropertyToControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkBoolPropertyToControl() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkBoolPropertyToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkBoolPropertyToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkBoolPropertyToControl"), sizeof(FAkBoolPropertyToControl), Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkBoolPropertyToControl(FAkBoolPropertyToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkBoolPropertyToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkBoolPropertyToControl")),new UScriptStruct::TCppStructOps<FAkBoolPropertyToControl>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl;
	UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkBoolPropertyToControl"), sizeof(FAkBoolPropertyToControl), Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkBoolPropertyToControl.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkBoolPropertyToControl>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkBoolPropertyToControl" },
				{ "ModuleRelativePath", "Public/AkBoolPropertyToControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProperty = { UE4CodeGen_Private::EPropertyClass::Str, "ItemProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkBoolPropertyToControl, ItemProperty), METADATA_PARAMS(NewProp_ItemProperty_MetaData, ARRAY_COUNT(NewProp_ItemProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemProperty,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkBoolPropertyToControl",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAkBoolPropertyToControl),
				alignof(FAkBoolPropertyToControl),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_CRC() { return 396156697U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
