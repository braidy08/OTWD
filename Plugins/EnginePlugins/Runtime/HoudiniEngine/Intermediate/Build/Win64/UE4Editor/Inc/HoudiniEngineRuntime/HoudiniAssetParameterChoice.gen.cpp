// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAssetParameterChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetParameterChoice() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameterChoice_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameterChoice();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniAssetParameterChoice::StaticRegisterNativesUHoudiniAssetParameterChoice()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetParameterChoice_NoRegister()
	{
		return UHoudiniAssetParameterChoice::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniAssetParameterChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UHoudiniAssetParameter,
				(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "HoudiniAssetParameterChoice.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetParameterChoice.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHoudiniAssetParameterChoice>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHoudiniAssetParameterChoice::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetParameterChoice, 1526971737);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetParameterChoice(Z_Construct_UClass_UHoudiniAssetParameterChoice, &UHoudiniAssetParameterChoice::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetParameterChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetParameterChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
