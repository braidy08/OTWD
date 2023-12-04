// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkItemBoolProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemBoolProperties() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature();
// End Cross Module References
	void UAkItemBoolProperties::StaticRegisterNativesUAkItemBoolProperties()
	{
		UClass* Class = UAkItemBoolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSearchText", (Native)&UAkItemBoolProperties::execGetSearchText },
			{ "GetSelectedProperty", (Native)&UAkItemBoolProperties::execGetSelectedProperty },
			{ "SetSearchText", (Native)&UAkItemBoolProperties::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText()
	{
		struct AkItemBoolProperties_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkItemBoolProperties_eventGetSearchText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, "GetSearchText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020409, sizeof(AkItemBoolProperties_eventGetSearchText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty()
	{
		struct AkItemBoolProperties_eventGetSelectedProperty_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkItemBoolProperties_eventGetSelectedProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, "GetSelectedProperty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020409, sizeof(AkItemBoolProperties_eventGetSelectedProperty_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText()
	{
		struct AkItemBoolProperties_eventSetSearchText_Parms
		{
			FString NewText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewText = { UE4CodeGen_Private::EPropertyClass::Str, "NewText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkItemBoolProperties_eventSetSearchText_Parms, NewText), METADATA_PARAMS(NewProp_NewText_MetaData, ARRAY_COUNT(NewProp_NewText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, "SetSearchText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkItemBoolProperties_eventSetSearchText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister()
	{
		return UAkItemBoolProperties::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkItemBoolProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText, "GetSearchText" }, // 1804344301
				{ &Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty, "GetSelectedProperty" }, // 2003997712
				{ &Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText, "SetSearchText" }, // 3478923312
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkItemBoolProperties.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDragged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkItemBoolProperties" },
				{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDragged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPropertyDragged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAkItemBoolProperties, OnPropertyDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature, METADATA_PARAMS(NewProp_OnPropertyDragged_MetaData, ARRAY_COUNT(NewProp_OnPropertyDragged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkItemBoolProperties" },
				{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAkItemBoolProperties, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnSelectionChanged_MetaData, ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPropertyDragged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSelectionChanged,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkItemBoolProperties>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkItemBoolProperties::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00082u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAkItemBoolProperties, 1089460164);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemBoolProperties(Z_Construct_UClass_UAkItemBoolProperties, &UAkItemBoolProperties::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemBoolProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
