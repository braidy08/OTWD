// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRuntimeSettings() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniTool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsAxisImport();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
// End Cross Module References
	void UHoudiniRuntimeSettings::StaticRegisterNativesUHoudiniRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "HoudiniRuntimeSettings.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDsoSearchPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioDsoSearchPath = { UE4CodeGen_Private::EPropertyClass::Str, "AudioDsoSearchPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, AudioDsoSearchPath), METADATA_PARAMS(NewProp_AudioDsoSearchPath_MetaData, ARRAY_COUNT(NewProp_AudioDsoSearchPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageDsoSearchPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageDsoSearchPath = { UE4CodeGen_Private::EPropertyClass::Str, "ImageDsoSearchPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, ImageDsoSearchPath), METADATA_PARAMS(NewProp_ImageDsoSearchPath_MetaData, ARRAY_COUNT(NewProp_ImageDsoSearchPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DsoSearchPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DsoSearchPath = { UE4CodeGen_Private::EPropertyClass::Str, "DsoSearchPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, DsoSearchPath), METADATA_PARAMS(NewProp_DsoSearchPath_MetaData, ARRAY_COUNT(NewProp_DsoSearchPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtlSearchPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtlSearchPath = { UE4CodeGen_Private::EPropertyClass::Str, "OtlSearchPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, OtlSearchPath), METADATA_PARAMS(NewProp_OtlSearchPath_MetaData, ARRAY_COUNT(NewProp_OtlSearchPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniEnvironmentFiles_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniEnvironmentFiles = { UE4CodeGen_Private::EPropertyClass::Str, "HoudiniEnvironmentFiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, HoudiniEnvironmentFiles), METADATA_PARAMS(NewProp_HoudiniEnvironmentFiles_MetaData, ARRAY_COUNT(NewProp_HoudiniEnvironmentFiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingThreadStackSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookingThreadStackSize = { UE4CodeGen_Private::EPropertyClass::Int, "CookingThreadStackSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, CookingThreadStackSize), METADATA_PARAMS(NewProp_CookingThreadStackSize_MetaData, ARRAY_COUNT(NewProp_CookingThreadStackSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniTools_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomHoudiniTools = { UE4CodeGen_Private::EPropertyClass::Array, "CustomHoudiniTools", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniTools), METADATA_PARAMS(NewProp_CustomHoudiniTools_MetaData, ARRAY_COUNT(NewProp_CustomHoudiniTools_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniTools_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomHoudiniTools", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniTool, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePlacementModeHoudiniTools_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bHidePlacementModeHoudiniTools_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bHidePlacementModeHoudiniTools = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlacementModeHoudiniTools = { UE4CodeGen_Private::EPropertyClass::Bool, "bHidePlacementModeHoudiniTools", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHidePlacementModeHoudiniTools_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHidePlacementModeHoudiniTools_MetaData, ARRAY_COUNT(NewProp_bHidePlacementModeHoudiniTools_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHoudiniLocation_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHoudiniLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomHoudiniLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, CustomHoudiniLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_CustomHoudiniLocation_MetaData, ARRAY_COUNT(NewProp_CustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomHoudiniLocation_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bUseCustomHoudiniLocation_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bUseCustomHoudiniLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomHoudiniLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomHoudiniLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCustomHoudiniLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCustomHoudiniLocation_MetaData, ARRAY_COUNT(NewProp_bUseCustomHoudiniLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bBuildAdjacencyBuffer_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bBuildAdjacencyBuffer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer = { UE4CodeGen_Private::EPropertyClass::Bool, "bBuildAdjacencyBuffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBuildAdjacencyBuffer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBuildAdjacencyBuffer_MetaData, ARRAY_COUNT(NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bUseMikkTSpace_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bUseMikkTSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMikkTSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMikkTSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseMikkTSpace_MetaData, ARRAY_COUNT(NewProp_bUseMikkTSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecomputeTangentsFlag_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecomputeTangentsFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "RecomputeTangentsFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeTangentsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(NewProp_RecomputeTangentsFlag_MetaData, ARRAY_COUNT(NewProp_RecomputeTangentsFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecomputeNormalsFlag_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecomputeNormalsFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "RecomputeNormalsFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, RecomputeNormalsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(NewProp_RecomputeNormalsFlag_MetaData, ARRAY_COUNT(NewProp_RecomputeNormalsFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateLightmapUVsFlag_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenerateLightmapUVsFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "GenerateLightmapUVsFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, GenerateLightmapUVsFlag), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, METADATA_PARAMS(NewProp_GenerateLightmapUVsFlag_MetaData, ARRAY_COUNT(NewProp_GenerateLightmapUVsFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bRemoveDegenerates_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bRemoveDegenerates = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemoveDegenerates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemoveDegenerates_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRemoveDegenerates_MetaData, ARRAY_COUNT(NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution = { UE4CodeGen_Private::EPropertyClass::Int, "MinLightmapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MinLightmapResolution), METADATA_PARAMS(NewProp_MinLightmapResolution_MetaData, ARRAY_COUNT(NewProp_MinLightmapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DstLightmapIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, DstLightmapIndex), METADATA_PARAMS(NewProp_DstLightmapIndex_MetaData, ARRAY_COUNT(NewProp_DstLightmapIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SrcLightmapIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, SrcLightmapIndex), METADATA_PARAMS(NewProp_SrcLightmapIndex_MetaData, ARRAY_COUNT(NewProp_SrcLightmapIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bUseFullPrecisionUVs_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bUseFullPrecisionUVs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFullPrecisionUVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFullPrecisionUVs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFullPrecisionUVs_MetaData, ARRAY_COUNT(NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x001004800000000d, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageDefaultSettings_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageDefaultSettings = { UE4CodeGen_Private::EPropertyClass::Object, "FoliageDefaultSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x001204000008000d, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, FoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(NewProp_FoliageDefaultSettings_MetaData, ARRAY_COUNT(NewProp_FoliageDefaultSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StreamingDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, StreamingDistanceMultiplier), METADATA_PARAMS(NewProp_StreamingDistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaximumStreamingTexelRatio_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bUseMaximumStreamingTexelRatio_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bUseMaximumStreamingTexelRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaximumStreamingTexelRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMaximumStreamingTexelRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMaximumStreamingTexelRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseMaximumStreamingTexelRatio_MetaData, ARRAY_COUNT(NewProp_bUseMaximumStreamingTexelRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LightMapCoordinateIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapCoordinateIndex), METADATA_PARAMS(NewProp_LightMapCoordinateIndex_MetaData, ARRAY_COUNT(NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "WalkableSlopeOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(NewProp_WalkableSlopeOverride_MetaData, ARRAY_COUNT(NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedDistanceFieldResolutionScale_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedDistanceFieldResolutionScale = { UE4CodeGen_Private::EPropertyClass::Float, "GeneratedDistanceFieldResolutionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, GeneratedDistanceFieldResolutionScale), METADATA_PARAMS(NewProp_GeneratedDistanceFieldResolutionScale_MetaData, ARRAY_COUNT(NewProp_GeneratedDistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "LpvBiasMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, LpvBiasMultiplier), METADATA_PARAMS(NewProp_LpvBiasMultiplier_MetaData, ARRAY_COUNT(NewProp_LpvBiasMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution = { UE4CodeGen_Private::EPropertyClass::Int, "LightMapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, LightMapResolution), METADATA_PARAMS(NewProp_LightMapResolution_MetaData, ARRAY_COUNT(NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionTraceFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, CollisionTraceFlag), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(NewProp_CollisionTraceFlag_MetaData, ARRAY_COUNT(NewProp_CollisionTraceFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_PhysMaterial_MetaData, ARRAY_COUNT(NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bDoubleSidedGeometry_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bDoubleSidedGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoubleSidedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoubleSidedGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoubleSidedGeometry_MetaData, ARRAY_COUNT(NewProp_bDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportAxis_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "ImportAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, ImportAxis), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsAxisImport, METADATA_PARAMS(NewProp_ImportAxis_MetaData, ARRAY_COUNT(NewProp_ImportAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformScaleFactor_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransformScaleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TransformScaleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, TransformScaleFactor), METADATA_PARAMS(NewProp_TransformScaleFactor_MetaData, ARRAY_COUNT(NewProp_TransformScaleFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedGeometryScaleFactor_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedGeometryScaleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "GeneratedGeometryScaleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, GeneratedGeometryScaleFactor), METADATA_PARAMS(NewProp_GeneratedGeometryScaleFactor_MetaData, ARRAY_COUNT(NewProp_GeneratedGeometryScaleFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMaxValue_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "MarshallingLandscapesForcedMaxValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMaxValue), METADATA_PARAMS(NewProp_MarshallingLandscapesForcedMaxValue_MetaData, ARRAY_COUNT(NewProp_MarshallingLandscapesForcedMaxValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForcedMinValue_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingLandscapesForcedMinValue = { UE4CodeGen_Private::EPropertyClass::Float, "MarshallingLandscapesForcedMinValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingLandscapesForcedMinValue), METADATA_PARAMS(NewProp_MarshallingLandscapesForcedMinValue_MetaData, ARRAY_COUNT(NewProp_MarshallingLandscapesForcedMinValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesForceMinMaxValues_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_MarshallingLandscapesForceMinMaxValues_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesForceMinMaxValues = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesForceMinMaxValues = { UE4CodeGen_Private::EPropertyClass::Bool, "MarshallingLandscapesForceMinMaxValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MarshallingLandscapesForceMinMaxValues_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MarshallingLandscapesForceMinMaxValues_MetaData, ARRAY_COUNT(NewProp_MarshallingLandscapesForceMinMaxValues_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingLandscapesUseFullResolution_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_MarshallingLandscapesUseFullResolution_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->MarshallingLandscapesUseFullResolution = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarshallingLandscapesUseFullResolution = { UE4CodeGen_Private::EPropertyClass::Bool, "MarshallingLandscapesUseFullResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MarshallingLandscapesUseFullResolution_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MarshallingLandscapesUseFullResolution_MetaData, ARRAY_COUNT(NewProp_MarshallingLandscapesUseFullResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingSplineResolution_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarshallingSplineResolution = { UE4CodeGen_Private::EPropertyClass::Float, "MarshallingSplineResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingSplineResolution), METADATA_PARAMS(NewProp_MarshallingSplineResolution_MetaData, ARRAY_COUNT(NewProp_MarshallingSplineResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeInputSourceFile_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeInputSourceFile = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeInputSourceFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeInputSourceFile), METADATA_PARAMS(NewProp_MarshallingAttributeInputSourceFile_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeInputSourceFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeInputMeshName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeInputMeshName = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeInputMeshName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeInputMeshName), METADATA_PARAMS(NewProp_MarshallingAttributeInputMeshName_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeInputMeshName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeGeneratedMeshName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeGeneratedMeshName = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeGeneratedMeshName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeGeneratedMeshName), METADATA_PARAMS(NewProp_MarshallingAttributeGeneratedMeshName_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeGeneratedMeshName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeLightmapResolution_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeLightmapResolution = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeLightmapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeLightmapResolution), METADATA_PARAMS(NewProp_MarshallingAttributeLightmapResolution_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeLightmapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeFaceSmoothingMask_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeFaceSmoothingMask = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeFaceSmoothingMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeFaceSmoothingMask), METADATA_PARAMS(NewProp_MarshallingAttributeFaceSmoothingMask_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeFaceSmoothingMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeInstanceOverride_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeInstanceOverride = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeInstanceOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeInstanceOverride), METADATA_PARAMS(NewProp_MarshallingAttributeInstanceOverride_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeInstanceOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeMaterialHole_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeMaterialHole = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeMaterialHole", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeMaterialHole), METADATA_PARAMS(NewProp_MarshallingAttributeMaterialHole_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeMaterialHole_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarshallingAttributeMaterial_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarshallingAttributeMaterial = { UE4CodeGen_Private::EPropertyClass::Str, "MarshallingAttributeMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, MarshallingAttributeMaterial), METADATA_PARAMS(NewProp_MarshallingAttributeMaterial_MetaData, ARRAY_COUNT(NewProp_MarshallingAttributeMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleRenderedCollisionGroupNamePrefix_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SimpleRenderedCollisionGroupNamePrefix = { UE4CodeGen_Private::EPropertyClass::Str, "SimpleRenderedCollisionGroupNamePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, SimpleRenderedCollisionGroupNamePrefix), METADATA_PARAMS(NewProp_SimpleRenderedCollisionGroupNamePrefix_MetaData, ARRAY_COUNT(NewProp_SimpleRenderedCollisionGroupNamePrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionGroupNamePrefix_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SimpleCollisionGroupNamePrefix = { UE4CodeGen_Private::EPropertyClass::Str, "SimpleCollisionGroupNamePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, SimpleCollisionGroupNamePrefix), METADATA_PARAMS(NewProp_SimpleCollisionGroupNamePrefix_MetaData, ARRAY_COUNT(NewProp_SimpleCollisionGroupNamePrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UCXRenderedCollisionGroupNamePrefix_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UCXRenderedCollisionGroupNamePrefix = { UE4CodeGen_Private::EPropertyClass::Str, "UCXRenderedCollisionGroupNamePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, UCXRenderedCollisionGroupNamePrefix), METADATA_PARAMS(NewProp_UCXRenderedCollisionGroupNamePrefix_MetaData, ARRAY_COUNT(NewProp_UCXRenderedCollisionGroupNamePrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UCXCollisionGroupNamePrefix_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UCXCollisionGroupNamePrefix = { UE4CodeGen_Private::EPropertyClass::Str, "UCXCollisionGroupNamePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, UCXCollisionGroupNamePrefix), METADATA_PARAMS(NewProp_UCXCollisionGroupNamePrefix_MetaData, ARRAY_COUNT(NewProp_UCXCollisionGroupNamePrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderedCollisionGroupNamePrefix_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderedCollisionGroupNamePrefix = { UE4CodeGen_Private::EPropertyClass::Str, "RenderedCollisionGroupNamePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, RenderedCollisionGroupNamePrefix), METADATA_PARAMS(NewProp_RenderedCollisionGroupNamePrefix_MetaData, ARRAY_COUNT(NewProp_RenderedCollisionGroupNamePrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionGroupNamePrefix_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollisionGroupNamePrefix = { UE4CodeGen_Private::EPropertyClass::Str, "CollisionGroupNamePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, CollisionGroupNamePrefix), METADATA_PARAMS(NewProp_CollisionGroupNamePrefix_MetaData, ARRAY_COUNT(NewProp_CollisionGroupNamePrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatRampParametersAsMultiparms_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bTreatRampParametersAsMultiparms_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bTreatRampParametersAsMultiparms = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatRampParametersAsMultiparms = { UE4CodeGen_Private::EPropertyClass::Bool, "bTreatRampParametersAsMultiparms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTreatRampParametersAsMultiparms_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTreatRampParametersAsMultiparms_MetaData, ARRAY_COUNT(NewProp_bTreatRampParametersAsMultiparms_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemporaryCookFolder_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_TemporaryCookFolder = { UE4CodeGen_Private::EPropertyClass::Text, "TemporaryCookFolder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, TemporaryCookFolder), METADATA_PARAMS(NewProp_TemporaryCookFolder_MetaData, ARRAY_COUNT(NewProp_TemporaryCookFolder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookCurvesOnMouseRelease_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bCookCurvesOnMouseRelease_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bCookCurvesOnMouseRelease = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookCurvesOnMouseRelease = { UE4CodeGen_Private::EPropertyClass::Bool, "bCookCurvesOnMouseRelease", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCookCurvesOnMouseRelease_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCookCurvesOnMouseRelease_MetaData, ARRAY_COUNT(NewProp_bCookCurvesOnMouseRelease_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplaySlateCookingNotifications_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bDisplaySlateCookingNotifications_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bDisplaySlateCookingNotifications = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplaySlateCookingNotifications = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplaySlateCookingNotifications", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplaySlateCookingNotifications_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplaySlateCookingNotifications_MetaData, ARRAY_COUNT(NewProp_bDisplaySlateCookingNotifications_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransformChangeTriggersCooks_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bTransformChangeTriggersCooks_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bTransformChangeTriggersCooks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformChangeTriggersCooks = { UE4CodeGen_Private::EPropertyClass::Bool, "bTransformChangeTriggersCooks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTransformChangeTriggersCooks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTransformChangeTriggersCooks_MetaData, ARRAY_COUNT(NewProp_bTransformChangeTriggersCooks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUploadTransformsToHoudiniEngine_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bUploadTransformsToHoudiniEngine_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bUploadTransformsToHoudiniEngine = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUploadTransformsToHoudiniEngine = { UE4CodeGen_Private::EPropertyClass::Bool, "bUploadTransformsToHoudiniEngine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUploadTransformsToHoudiniEngine_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUploadTransformsToHoudiniEngine_MetaData, ARRAY_COUNT(NewProp_bUploadTransformsToHoudiniEngine_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCooking_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bEnableCooking_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bEnableCooking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCooking = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCooking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCooking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCooking_MetaData, ARRAY_COUNT(NewProp_bEnableCooking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMultiAssetDialog_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bShowMultiAssetDialog_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bShowMultiAssetDialog = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMultiAssetDialog = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowMultiAssetDialog", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowMultiAssetDialog_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowMultiAssetDialog_MetaData, ARRAY_COUNT(NewProp_bShowMultiAssetDialog_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticServerTimeout_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutomaticServerTimeout = { UE4CodeGen_Private::EPropertyClass::Float, "AutomaticServerTimeout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, AutomaticServerTimeout), METADATA_PARAMS(NewProp_AutomaticServerTimeout_MetaData, ARRAY_COUNT(NewProp_AutomaticServerTimeout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAutomaticServer_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			auto NewProp_bStartAutomaticServer_SetBit = [](void* Obj){ ((UHoudiniRuntimeSettings*)Obj)->bStartAutomaticServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAutomaticServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartAutomaticServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHoudiniRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStartAutomaticServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStartAutomaticServer_MetaData, ARRAY_COUNT(NewProp_bStartAutomaticServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPipeName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPipeName = { UE4CodeGen_Private::EPropertyClass::Str, "ServerPipeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPipeName), METADATA_PARAMS(NewProp_ServerPipeName_MetaData, ARRAY_COUNT(NewProp_ServerPipeName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPort = { UE4CodeGen_Private::EPropertyClass::Int, "ServerPort", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerPort), METADATA_PARAMS(NewProp_ServerPort_MetaData, ARRAY_COUNT(NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerHost_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerHost = { UE4CodeGen_Private::EPropertyClass::Str, "ServerHost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, ServerHost), METADATA_PARAMS(NewProp_ServerHost_MetaData, ARRAY_COUNT(NewProp_ServerHost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniRuntimeSettings" },
				{ "ModuleRelativePath", "Public/HoudiniRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType = { UE4CodeGen_Private::EPropertyClass::Byte, "SessionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044005, 1, nullptr, STRUCT_OFFSET(UHoudiniRuntimeSettings, SessionType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, METADATA_PARAMS(NewProp_SessionType_MetaData, ARRAY_COUNT(NewProp_SessionType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioDsoSearchPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageDsoSearchPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DsoSearchPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtlSearchPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoudiniEnvironmentFiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CookingThreadStackSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomHoudiniTools,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomHoudiniTools_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHidePlacementModeHoudiniTools,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomHoudiniLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCustomHoudiniLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBuildAdjacencyBuffer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMikkTSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RecomputeTangentsFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RecomputeNormalsFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GenerateLightmapUVsFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemoveDegenerates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinLightmapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DstLightmapIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SrcLightmapIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFullPrecisionUVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageDefaultSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingDistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMaximumStreamingTexelRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightMapCoordinateIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WalkableSlopeOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedDistanceFieldResolutionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LpvBiasMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightMapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionTraceFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoubleSidedGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformScaleFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedGeometryScaleFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingLandscapesForcedMaxValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingLandscapesForcedMinValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingLandscapesForceMinMaxValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingLandscapesUseFullResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingSplineResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeInputSourceFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeInputMeshName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeGeneratedMeshName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeLightmapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeFaceSmoothingMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeInstanceOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeMaterialHole,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarshallingAttributeMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimpleRenderedCollisionGroupNamePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimpleCollisionGroupNamePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UCXRenderedCollisionGroupNamePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UCXCollisionGroupNamePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderedCollisionGroupNamePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionGroupNamePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTreatRampParametersAsMultiparms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TemporaryCookFolder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCookCurvesOnMouseRelease,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplaySlateCookingNotifications,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTransformChangeTriggersCooks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUploadTransformsToHoudiniEngine,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCooking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowMultiAssetDialog,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutomaticServerTimeout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStartAutomaticServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerPipeName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerPort,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerHost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHoudiniRuntimeSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHoudiniRuntimeSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900086u,
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
	IMPLEMENT_CLASS(UHoudiniRuntimeSettings, 3435948213);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniRuntimeSettings(Z_Construct_UClass_UHoudiniRuntimeSettings, &UHoudiniRuntimeSettings::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
