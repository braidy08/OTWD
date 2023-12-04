// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlayFabRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabRuntimeSettings() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	void UPlayFabRuntimeSettings::StaticRegisterNativesUPlayFabRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister()
	{
		return UPlayFabRuntimeSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayFabRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "PlayFabRuntimeSettings.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperSecretKey_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "PlayFabRuntimeSettings" },
				{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeveloperSecretKey = { UE4CodeGen_Private::EPropertyClass::Str, "DeveloperSecretKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UPlayFabRuntimeSettings, DeveloperSecretKey), METADATA_PARAMS(NewProp_DeveloperSecretKey_MetaData, ARRAY_COUNT(NewProp_DeveloperSecretKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "PlayFabRuntimeSettings" },
				{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleId = { UE4CodeGen_Private::EPropertyClass::Str, "TitleId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UPlayFabRuntimeSettings, TitleId), METADATA_PARAMS(NewProp_TitleId_MetaData, ARRAY_COUNT(NewProp_TitleId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductionEnvironmentURL_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "PlayFabRuntimeSettings" },
				{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductionEnvironmentURL = { UE4CodeGen_Private::EPropertyClass::Str, "ProductionEnvironmentURL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UPlayFabRuntimeSettings, ProductionEnvironmentURL), METADATA_PARAMS(NewProp_ProductionEnvironmentURL_MetaData, ARRAY_COUNT(NewProp_ProductionEnvironmentURL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevelopmentEnvironmentURL_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "PlayFabRuntimeSettings" },
				{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevelopmentEnvironmentURL = { UE4CodeGen_Private::EPropertyClass::Str, "DevelopmentEnvironmentURL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UPlayFabRuntimeSettings, DevelopmentEnvironmentURL), METADATA_PARAMS(NewProp_DevelopmentEnvironmentURL_MetaData, ARRAY_COUNT(NewProp_DevelopmentEnvironmentURL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDevelopmentEnvironment_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "PlayFabRuntimeSettings" },
				{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
			};
#endif
			auto NewProp_bUseDevelopmentEnvironment_SetBit = [](void* Obj){ ((UPlayFabRuntimeSettings*)Obj)->bUseDevelopmentEnvironment = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDevelopmentEnvironment = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDevelopmentEnvironment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPlayFabRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDevelopmentEnvironment_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDevelopmentEnvironment_MetaData, ARRAY_COUNT(NewProp_bUseDevelopmentEnvironment_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeveloperSecretKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TitleId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProductionEnvironmentURL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DevelopmentEnvironmentURL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDevelopmentEnvironment,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlayFabRuntimeSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlayFabRuntimeSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabRuntimeSettings, 3995633348);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabRuntimeSettings(Z_Construct_UClass_UPlayFabRuntimeSettings, &UPlayFabRuntimeSettings::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
