// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniInstancedActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInstancedActorComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UHoudiniInstancedActorComponent::StaticRegisterNativesUHoudiniInstancedActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister()
	{
		return UHoudiniInstancedActorComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "HoudiniInstancedActorComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/HoudiniInstancedActorComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniInstancedActorComponent" },
				{ "ModuleRelativePath", "Public/HoudiniInstancedActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Instances = { UE4CodeGen_Private::EPropertyClass::Array, "Instances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0090000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniInstancedActorComponent, Instances), METADATA_PARAMS(NewProp_Instances_MetaData, ARRAY_COUNT(NewProp_Instances_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Instances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedAsset_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "HoudiniInstancedActorComponent" },
				{ "ModuleRelativePath", "Public/HoudiniInstancedActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedAsset = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0090000000000005, 1, nullptr, STRUCT_OFFSET(UHoudiniInstancedActorComponent, InstancedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_InstancedAsset_MetaData, ARRAY_COUNT(NewProp_InstancedAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instances_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedAsset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHoudiniInstancedActorComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHoudiniInstancedActorComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UHoudiniInstancedActorComponent, 720936829);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInstancedActorComponent(Z_Construct_UClass_UHoudiniInstancedActorComponent, &UHoudiniInstancedActorComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInstancedActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInstancedActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
