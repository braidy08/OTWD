// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAsset() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
// End Cross Module References
	void UHoudiniAsset::StaticRegisterNativesUHoudiniAsset()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister()
	{
		return UHoudiniAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniAsset()
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
				{ "IncludePath", "HoudiniAsset.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAsset" },
				{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetFileName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniAsset" },
				{ "ModuleRelativePath", "Public/HoudiniAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileName = { UE4CodeGen_Private::EPropertyClass::Str, "AssetFileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniAsset, AssetFileName), METADATA_PARAMS(NewProp_AssetFileName_MetaData, ARRAY_COUNT(NewProp_AssetFileName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetFileName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHoudiniAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHoudiniAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UHoudiniAsset, 445541536);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAsset(Z_Construct_UClass_UHoudiniAsset, &UHoudiniAsset::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
