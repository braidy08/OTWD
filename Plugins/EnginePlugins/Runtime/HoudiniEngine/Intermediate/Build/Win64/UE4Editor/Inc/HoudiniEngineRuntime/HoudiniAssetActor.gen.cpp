// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAssetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
// End Cross Module References
	void AHoudiniAssetActor::StaticRegisterNativesAHoudiniAssetActor()
	{
	}
	UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister()
	{
		return AHoudiniAssetActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AHoudiniAssetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "HoudiniAssetActor.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetComponent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAssetActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HoudiniAssetComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(AHoudiniAssetActor, HoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(NewProp_HoudiniAssetComponent_MetaData, ARRAY_COUNT(NewProp_HoudiniAssetComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoudiniAssetComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHoudiniAssetActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHoudiniAssetActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AHoudiniAssetActor, 2714729292);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoudiniAssetActor(Z_Construct_UClass_AHoudiniAssetActor, &AHoudiniAssetActor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("AHoudiniAssetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniAssetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
