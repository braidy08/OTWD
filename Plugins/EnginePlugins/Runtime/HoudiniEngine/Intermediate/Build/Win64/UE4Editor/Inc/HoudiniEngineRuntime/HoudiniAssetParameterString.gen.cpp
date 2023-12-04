// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAssetParameterString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetParameterString() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameterString_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameterString();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameter();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniAssetParameterString::StaticRegisterNativesUHoudiniAssetParameterString()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetParameterString_NoRegister()
	{
		return UHoudiniAssetParameterString::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniAssetParameterString()
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
				{ "IncludePath", "HoudiniAssetParameterString.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetParameterString.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHoudiniAssetParameterString>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHoudiniAssetParameterString::StaticClass,
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
	IMPLEMENT_CLASS(UHoudiniAssetParameterString, 954876373);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetParameterString(Z_Construct_UClass_UHoudiniAssetParameterString, &UHoudiniAssetParameterString::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetParameterString"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetParameterString);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
