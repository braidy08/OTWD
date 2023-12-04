// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkItemBoolPropertiesConv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemBoolPropertiesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText();
// End Cross Module References
	void UAkItemBoolPropertiesConv::StaticRegisterNativesUAkItemBoolPropertiesConv()
	{
		UClass* Class = UAkItemBoolPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkBoolPropertyToControlToString", (Native)&UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString },
			{ "Conv_FAkBoolPropertyToControlToText", (Native)&UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString()
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkBoolPropertyToControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(NewProp_INAkBoolPropertyToControl_MetaData, ARRAY_COUNT(NewProp_INAkBoolPropertyToControl_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkBoolPropertyToControl,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, "Conv_FAkBoolPropertyToControlToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText()
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkBoolPropertyToControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(NewProp_INAkBoolPropertyToControl_MetaData, ARRAY_COUNT(NewProp_INAkBoolPropertyToControl_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkBoolPropertyToControl,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, "Conv_FAkBoolPropertyToControlToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString, "Conv_FAkBoolPropertyToControlToString" }, // 2439222646
				{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText, "Conv_FAkBoolPropertyToControlToText" }, // 732765710
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkItemBoolPropertiesConv.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkItemBoolPropertiesConv>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkItemBoolPropertiesConv::StaticClass,
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
	IMPLEMENT_CLASS(UAkItemBoolPropertiesConv, 3528296111);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemBoolPropertiesConv(Z_Construct_UClass_UAkItemBoolPropertiesConv, &UAkItemBoolPropertiesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemBoolPropertiesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolPropertiesConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
