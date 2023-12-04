// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SAkWaapiFieldNamesConv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAkWaapiFieldNamesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	AKAUDIO_API UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText();
// End Cross Module References
	void USAkWaapiFieldNamesConv::StaticRegisterNativesUSAkWaapiFieldNamesConv()
	{
		UClass* Class = USAkWaapiFieldNamesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkWaapiFieldNamesToString", (Native)&USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString },
			{ "Conv_FAkWaapiFieldNamesToText", (Native)&USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString()
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkWaapiFieldNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(NewProp_INAkWaapiFieldNames_MetaData, ARRAY_COUNT(NewProp_INAkWaapiFieldNames_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkWaapiFieldNames,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, "Conv_FAkWaapiFieldNamesToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText()
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkWaapiFieldNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(NewProp_INAkWaapiFieldNames_MetaData, ARRAY_COUNT(NewProp_INAkWaapiFieldNames_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkWaapiFieldNames,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, "Conv_FAkWaapiFieldNamesToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString, "Conv_FAkWaapiFieldNamesToString" }, // 750273199
				{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText, "Conv_FAkWaapiFieldNamesToText" }, // 1145716388
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SAkWaapiFieldNamesConv.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USAkWaapiFieldNamesConv>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USAkWaapiFieldNamesConv::StaticClass,
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
	IMPLEMENT_CLASS(USAkWaapiFieldNamesConv, 263409569);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAkWaapiFieldNamesConv(Z_Construct_UClass_USAkWaapiFieldNamesConv, &USAkWaapiFieldNamesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("USAkWaapiFieldNamesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAkWaapiFieldNamesConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
