// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UAkSettings::StaticRegisterNativesUAkSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkSettings_NoRegister()
	{
		return UAkSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkSettings.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryBudget_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MemoryBudget = { UE4CodeGen_Private::EPropertyClass::UInt32, "MemoryBudget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, MemoryBudget), METADATA_PARAMS(NewProp_MemoryBudget_MetaData, ARRAY_COUNT(NewProp_MemoryBudget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerEngineMemPoolThreshold_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerEngineMemPoolThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LowerEngineMemPoolThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, LowerEngineMemPoolThreshold), METADATA_PARAMS(NewProp_LowerEngineMemPoolThreshold_MetaData, ARRAY_COUNT(NewProp_LowerEngineMemPoolThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMemPoolThreshold_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMemPoolThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultMemPoolThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, DefaultMemPoolThreshold), METADATA_PARAMS(NewProp_DefaultMemPoolThreshold_MetaData, ARRAY_COUNT(NewProp_DefaultMemPoolThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMemPoolSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultMemPoolSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "DefaultMemPoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, DefaultMemPoolSize), METADATA_PARAMS(NewProp_DefaultMemPoolSize_MetaData, ARRAY_COUNT(NewProp_DefaultMemPoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandQueueMemPoolSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CommandQueueMemPoolSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "CommandQueueMemPoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, CommandQueueMemPoolSize), METADATA_PARAMS(NewProp_CommandQueueMemPoolSize_MetaData, ARRAY_COUNT(NewProp_CommandQueueMemPoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerEngineMemPoolSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LowerEngineMemPoolSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "LowerEngineMemPoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, LowerEngineMemPoolSize), METADATA_PARAMS(NewProp_LowerEngineMemPoolSize_MetaData, ARRAY_COUNT(NewProp_LowerEngineMemPoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorMemPoolSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MonitorMemPoolSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "MonitorMemPoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, MonitorMemPoolSize), METADATA_PARAMS(NewProp_MonitorMemPoolSize_MetaData, ARRAY_COUNT(NewProp_MonitorMemPoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorQueueMemPoolSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MonitorQueueMemPoolSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "MonitorQueueMemPoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, MonitorQueueMemPoolSize), METADATA_PARAMS(NewProp_MonitorQueueMemPoolSize_MetaData, ARRAY_COUNT(NewProp_MonitorQueueMemPoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOMemPoolSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IOMemPoolSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "IOMemPoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, IOMemPoolSize), METADATA_PARAMS(NewProp_IOMemPoolSize_MetaData, ARRAY_COUNT(NewProp_IOMemPoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamMemPoolSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_StreamMemPoolSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "StreamMemPoolSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, StreamMemPoolSize), METADATA_PARAMS(NewProp_StreamMemPoolSize_MetaData, ARRAY_COUNT(NewProp_StreamMemPoolSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressWwiseProjectPathWarnings_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			auto NewProp_SuppressWwiseProjectPathWarnings_SetBit = [](void* Obj){ ((UAkSettings*)Obj)->SuppressWwiseProjectPathWarnings = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuppressWwiseProjectPathWarnings = { UE4CodeGen_Private::EPropertyClass::Bool, "SuppressWwiseProjectPathWarnings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SuppressWwiseProjectPathWarnings_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SuppressWwiseProjectPathWarnings_MetaData, ARRAY_COUNT(NewProp_SuppressWwiseProjectPathWarnings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			auto NewProp_bAutoConnectToWAAPI_SetBit = [](void* Obj){ ((UAkSettings*)Obj)->bAutoConnectToWAAPI = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoConnectToWAAPI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoConnectToWAAPI_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoConnectToWAAPI_MetaData, ARRAY_COUNT(NewProp_bAutoConnectToWAAPI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath = { UE4CodeGen_Private::EPropertyClass::Struct, "WwiseMacInstallationPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, WwiseMacInstallationPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_WwiseMacInstallationPath_MetaData, ARRAY_COUNT(NewProp_WwiseMacInstallationPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath = { UE4CodeGen_Private::EPropertyClass::Struct, "WwiseWindowsInstallationPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, WwiseWindowsInstallationPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_WwiseWindowsInstallationPath_MetaData, ARRAY_COUNT(NewProp_WwiseWindowsInstallationPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseProjectPath = { UE4CodeGen_Private::EPropertyClass::Struct, "WwiseProjectPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, WwiseProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_WwiseProjectPath_MetaData, ARRAY_COUNT(NewProp_WwiseProjectPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousReverbVolumes_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousReverbVolumes = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxSimultaneousReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, MaxSimultaneousReverbVolumes), nullptr, METADATA_PARAMS(NewProp_MaxSimultaneousReverbVolumes_MetaData, ARRAY_COUNT(NewProp_MaxSimultaneousReverbVolumes_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemoryBudget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowerEngineMemPoolThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultMemPoolThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultMemPoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommandQueueMemPoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowerEngineMemPoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MonitorMemPoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MonitorQueueMemPoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IOMemPoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamMemPoolSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuppressWwiseProjectPathWarnings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoConnectToWAAPI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WwiseMacInstallationPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WwiseWindowsInstallationPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WwiseProjectPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimultaneousReverbVolumes,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSettings, 4098524356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSettings(Z_Construct_UClass_UAkSettings, &UAkSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
