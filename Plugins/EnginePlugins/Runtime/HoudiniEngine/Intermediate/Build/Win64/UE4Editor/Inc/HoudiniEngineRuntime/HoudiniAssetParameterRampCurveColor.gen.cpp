// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAssetParameterRampCurveColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetParameterRampCurveColor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameterRampCurveColor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetParameterRampCurveColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniAssetParameterRampCurveColor::StaticRegisterNativesUHoudiniAssetParameterRampCurveColor()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetParameterRampCurveColor_NoRegister()
	{
		return UHoudiniAssetParameterRampCurveColor::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniAssetParameterRampCurveColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCurveLinearColor,
				(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "HoudiniAssetParameterRampCurveColor.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniAssetParameterRampCurveColor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHoudiniAssetParameterRampCurveColor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHoudiniAssetParameterRampCurveColor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UHoudiniAssetParameterRampCurveColor, 671218504);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetParameterRampCurveColor(Z_Construct_UClass_UHoudiniAssetParameterRampCurveColor, &UHoudiniAssetParameterRampCurveColor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetParameterRampCurveColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetParameterRampCurveColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
