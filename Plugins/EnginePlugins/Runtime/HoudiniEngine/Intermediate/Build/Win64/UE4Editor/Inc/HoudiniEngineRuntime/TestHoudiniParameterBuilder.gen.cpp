// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TestHoudiniParameterBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestHoudiniParameterBuilder() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTestHoudiniParameterBuilder_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTestHoudiniParameterBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UTestHoudiniParameterBuilder::StaticRegisterNativesUTestHoudiniParameterBuilder()
	{
	}
	UClass* Z_Construct_UClass_UTestHoudiniParameterBuilder_NoRegister()
	{
		return UTestHoudiniParameterBuilder::StaticClass();
	}
	UClass* Z_Construct_UClass_UTestHoudiniParameterBuilder()
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
				{ "IncludePath", "TestHoudiniParameterBuilder.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TestHoudiniParameterBuilder.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTestHoudiniParameterBuilder>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTestHoudiniParameterBuilder::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UTestHoudiniParameterBuilder, 3836008003);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestHoudiniParameterBuilder(Z_Construct_UClass_UTestHoudiniParameterBuilder, &UTestHoudiniParameterBuilder::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UTestHoudiniParameterBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestHoudiniParameterBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
