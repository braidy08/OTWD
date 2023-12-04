// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkWaapiUriConv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiUriConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText();
// End Cross Module References
	void UAkWaapiUriConv::StaticRegisterNativesUAkWaapiUriConv()
	{
		UClass* Class = UAkWaapiUriConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkWaapiUriToString", (Native)&UAkWaapiUriConv::execConv_FAkWaapiUriToString },
			{ "Conv_FAkWaapiUriToText", (Native)&UAkWaapiUriConv::execConv_FAkWaapiUriToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString()
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiUri_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiUri = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkWaapiUri", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms, INAkWaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(NewProp_INAkWaapiUri_MetaData, ARRAY_COUNT(NewProp_INAkWaapiUri_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkWaapiUri,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkWaapiUriConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiUriConv, "Conv_FAkWaapiUriToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText()
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiUri_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiUri = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkWaapiUri", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms, INAkWaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(NewProp_INAkWaapiUri_MetaData, ARRAY_COUNT(NewProp_INAkWaapiUri_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkWaapiUri,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkWaapiUriConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiUriConv, "Conv_FAkWaapiUriToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister()
	{
		return UAkWaapiUriConv::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWaapiUriConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString, "Conv_FAkWaapiUriToString" }, // 1198301071
				{ &Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText, "Conv_FAkWaapiUriToText" }, // 2014232382
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkWaapiUriConv.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkWaapiUriConv.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkWaapiUriConv>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkWaapiUriConv::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAkWaapiUriConv, 410914094);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiUriConv(Z_Construct_UClass_UAkWaapiUriConv, &UAkWaapiUriConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiUriConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiUriConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
