// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkItemPropertiesConv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemPropertiesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText();
// End Cross Module References
	void UAkItemPropertiesConv::StaticRegisterNativesUAkItemPropertiesConv()
	{
		UClass* Class = UAkItemPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkPropertyToControlToString", (Native)&UAkItemPropertiesConv::execConv_FAkPropertyToControlToString },
			{ "Conv_FAkPropertyToControlToText", (Native)&UAkItemPropertiesConv::execConv_FAkPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString()
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkPropertyToControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(NewProp_INAkPropertyToControl_MetaData, ARRAY_COUNT(NewProp_INAkPropertyToControl_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkPropertyToControl,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, "Conv_FAkPropertyToControlToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText()
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl = { UE4CodeGen_Private::EPropertyClass::Struct, "INAkPropertyToControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(NewProp_INAkPropertyToControl_MetaData, ARRAY_COUNT(NewProp_INAkPropertyToControl_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_INAkPropertyToControl,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, "Conv_FAkPropertyToControlToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkItemPropertiesConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString, "Conv_FAkPropertyToControlToString" }, // 592964582
				{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText, "Conv_FAkPropertyToControlToText" }, // 3673920075
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkItemPropertiesConv.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkItemPropertiesConv.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkItemPropertiesConv>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkItemPropertiesConv::StaticClass,
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
	IMPLEMENT_CLASS(UAkItemPropertiesConv, 742112922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkItemPropertiesConv(Z_Construct_UClass_UAkItemPropertiesConv, &UAkItemPropertiesConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkItemPropertiesConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemPropertiesConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
