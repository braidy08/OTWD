// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkWwiseTreeSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseTreeSelector() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature();
// End Cross Module References
	void UAkWwiseTreeSelector::StaticRegisterNativesUAkWwiseTreeSelector()
	{
	}
	UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister()
	{
		return UAkWwiseTreeSelector::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWwiseTreeSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkWwiseTreeSelector.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkWwiseTreeSelector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDragged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWwiseTreeSelector" },
				{ "ModuleRelativePath", "Public/AkWwiseTreeSelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDragged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnItemDragged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAkWwiseTreeSelector, OnItemDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature, METADATA_PARAMS(NewProp_OnItemDragged_MetaData, ARRAY_COUNT(NewProp_OnItemDragged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWwiseTreeSelector" },
				{ "ModuleRelativePath", "Public/AkWwiseTreeSelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAkWwiseTreeSelector, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnSelectionChanged_MetaData, ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnItemDragged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSelectionChanged,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkWwiseTreeSelector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkWwiseTreeSelector::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00082u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Editor",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWwiseTreeSelector, 4118919762);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWwiseTreeSelector(Z_Construct_UClass_UAkWwiseTreeSelector, &UAkWwiseTreeSelector::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWwiseTreeSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWwiseTreeSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
