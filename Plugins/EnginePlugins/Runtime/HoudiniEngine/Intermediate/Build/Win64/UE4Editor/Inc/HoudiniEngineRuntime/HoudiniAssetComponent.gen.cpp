// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAssetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UFunction* Z_Construct_UFunction_UHoudiniAssetComponent_GetAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void UHoudiniAssetComponent::StaticRegisterNativesUHoudiniAssetComponent()
	{
		UClass* Class = UHoudiniAssetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", (Native)&UHoudiniAssetComponent::execGetAssetId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHoudiniAssetComponent_GetAssetId()
	{
		struct HoudiniAssetComponent_eventGetAssetId_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HoudiniAssetComponent_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniAssetComponent, "GetAssetId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(HoudiniAssetComponent_eventGetAssetId_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister()
	{
		return UHoudiniAssetComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniAssetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHoudiniAssetComponent_GetAssetId, "GetAssetId" }, // 2611722067
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "HoudiniAssetComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempCookFolder_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_TempCookFolder = { UE4CodeGen_Private::EPropertyClass::Text, "TempCookFolder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, TempCookFolder), METADATA_PARAMS(NewProp_TempCookFolder_MetaData, ARRAY_COUNT(NewProp_TempCookFolder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_BakeFolder = { UE4CodeGen_Private::EPropertyClass::Text, "BakeFolder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, BakeFolder), METADATA_PARAMS(NewProp_BakeFolder_MetaData, ARRAY_COUNT(NewProp_BakeFolder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedAssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "GeneratedAssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x001004800000000d, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedAssetUserData), METADATA_PARAMS(NewProp_GeneratedAssetUserData_MetaData, ARRAY_COUNT(NewProp_GeneratedAssetUserData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssetUserData_Inner_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedAssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "GeneratedAssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(NewProp_GeneratedAssetUserData_Inner_MetaData, ARRAY_COUNT(NewProp_GeneratedAssetUserData_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedFoliageDefaultSettings_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedFoliageDefaultSettings = { UE4CodeGen_Private::EPropertyClass::Object, "GeneratedFoliageDefaultSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x001204000008000d, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedFoliageDefaultSettings), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(NewProp_GeneratedFoliageDefaultSettings_MetaData, ARRAY_COUNT(NewProp_GeneratedFoliageDefaultSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedStreamingDistanceMultiplier_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedStreamingDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "GeneratedStreamingDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedStreamingDistanceMultiplier), METADATA_PARAMS(NewProp_GeneratedStreamingDistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_GeneratedStreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			auto NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit = [](void* Obj){ ((UHoudiniAssetComponent*)Obj)->bGeneratedUseMaximumStreamingTexelRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedUseMaximumStreamingTexelRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bGeneratedUseMaximumStreamingTexelRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHoudiniAssetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGeneratedUseMaximumStreamingTexelRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData, ARRAY_COUNT(NewProp_bGeneratedUseMaximumStreamingTexelRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapCoordinateIndex_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapCoordinateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GeneratedLightMapCoordinateIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedLightMapCoordinateIndex), METADATA_PARAMS(NewProp_GeneratedLightMapCoordinateIndex_MetaData, ARRAY_COUNT(NewProp_GeneratedLightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedWalkableSlopeOverride_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedWalkableSlopeOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "GeneratedWalkableSlopeOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedWalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(NewProp_GeneratedWalkableSlopeOverride_MetaData, ARRAY_COUNT(NewProp_GeneratedWalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedDistanceFieldResolutionScale_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedDistanceFieldResolutionScale = { UE4CodeGen_Private::EPropertyClass::Float, "GeneratedDistanceFieldResolutionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedDistanceFieldResolutionScale), METADATA_PARAMS(NewProp_GeneratedDistanceFieldResolutionScale_MetaData, ARRAY_COUNT(NewProp_GeneratedDistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLpvBiasMultiplier_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GeneratedLpvBiasMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "GeneratedLpvBiasMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedLpvBiasMultiplier), METADATA_PARAMS(NewProp_GeneratedLpvBiasMultiplier_MetaData, ARRAY_COUNT(NewProp_GeneratedLpvBiasMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedLightMapResolution_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedLightMapResolution = { UE4CodeGen_Private::EPropertyClass::Int, "GeneratedLightMapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedLightMapResolution), METADATA_PARAMS(NewProp_GeneratedLightMapResolution_MetaData, ARRAY_COUNT(NewProp_GeneratedLightMapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedCollisionTraceFlag_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeneratedCollisionTraceFlag = { UE4CodeGen_Private::EPropertyClass::Byte, "GeneratedCollisionTraceFlag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedCollisionTraceFlag), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(NewProp_GeneratedCollisionTraceFlag_MetaData, ARRAY_COUNT(NewProp_GeneratedCollisionTraceFlag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedPhysMaterial_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedPhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GeneratedPhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAssetComponent, GeneratedPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_GeneratedPhysMaterial_MetaData, ARRAY_COUNT(NewProp_GeneratedPhysMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedDoubleSidedGeometry_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetComponent" },
				{ "ModuleRelativePath", "Public/HoudiniAssetComponent.h" },
			};
#endif
			auto NewProp_bGeneratedDoubleSidedGeometry_SetBit = [](void* Obj){ ((UHoudiniAssetComponent*)Obj)->bGeneratedDoubleSidedGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedDoubleSidedGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bGeneratedDoubleSidedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHoudiniAssetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGeneratedDoubleSidedGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGeneratedDoubleSidedGeometry_MetaData, ARRAY_COUNT(NewProp_bGeneratedDoubleSidedGeometry_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TempCookFolder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BakeFolder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedAssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedAssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedFoliageDefaultSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedStreamingDistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGeneratedUseMaximumStreamingTexelRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedLightMapCoordinateIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedWalkableSlopeOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedDistanceFieldResolutionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedLpvBiasMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedLightMapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedCollisionTraceFlag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedPhysMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGeneratedDoubleSidedGeometry,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHoudiniAssetComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHoudiniAssetComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetComponent, 1436061696);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetComponent(Z_Construct_UClass_UHoudiniAssetComponent, &UHoudiniAssetComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
