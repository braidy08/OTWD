// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAcousticPortal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticPortal() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal();
	AKAUDIO_API UFunction* Z_Construct_UFunction_AAkAcousticPortal_SetExtent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void AAkAcousticPortal::StaticRegisterNativesAAkAcousticPortal()
	{
		UClass* Class = AAkAcousticPortal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePortal", (Native)&AAkAcousticPortal::execClosePortal },
			{ "GetCurrentState", (Native)&AAkAcousticPortal::execGetCurrentState },
			{ "OpenPortal", (Native)&AAkAcousticPortal::execOpenPortal },
			{ "SetExtent", (Native)&AAkAcousticPortal::execSetExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal()
	{
		struct AkAcousticPortal_eventClosePortal_Parms
		{
			bool bForceClose;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceClose_SetBit = [](void* Obj){ ((AkAcousticPortal_eventClosePortal_Parms*)Obj)->bForceClose = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceClose = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceClose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkAcousticPortal_eventClosePortal_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceClose_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceClose,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, "ClosePortal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkAcousticPortal_eventClosePortal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState()
	{
		struct AkAcousticPortal_eventGetCurrentState_Parms
		{
			AkAcousticPortalState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkAcousticPortal_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, "GetCurrentState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AkAcousticPortal_eventGetCurrentState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal()
	{
		struct AkAcousticPortal_eventOpenPortal_Parms
		{
			bool bForceOpen;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceOpen_SetBit = [](void* Obj){ ((AkAcousticPortal_eventOpenPortal_Parms*)Obj)->bForceOpen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkAcousticPortal_eventOpenPortal_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceOpen_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceOpen,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, "OpenPortal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkAcousticPortal_eventOpenPortal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_SetExtent()
	{
		struct AkAcousticPortal_eventSetExtent_Parms
		{
			FVector Extent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent = { UE4CodeGen_Private::EPropertyClass::Struct, "Extent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkAcousticPortal_eventSetExtent_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Extent_MetaData, ARRAY_COUNT(NewProp_Extent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, "SetExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AkAcousticPortal_eventSetExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister()
	{
		return AAkAcousticPortal::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkAcousticPortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAkAcousticPortal_ClosePortal, "ClosePortal" }, // 3097721172
				{ &Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState, "GetCurrentState" }, // 971377950
				{ &Z_Construct_UFunction_AAkAcousticPortal_OpenPortal, "OpenPortal" }, // 4180681496
				{ &Z_Construct_UFunction_AAkAcousticPortal_SetExtent, "SetExtent" }, // 3107810511
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "AkAcousticPortal.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstructionCollisionChannel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAcousticPortal" },
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObstructionCollisionChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "ObstructionCollisionChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkAcousticPortal, ObstructionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_ObstructionCollisionChannel_MetaData, ARRAY_COUNT(NewProp_ObstructionCollisionChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstructionRefreshInterval_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAcousticPortal" },
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObstructionRefreshInterval = { UE4CodeGen_Private::EPropertyClass::Float, "ObstructionRefreshInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkAcousticPortal, ObstructionRefreshInterval), METADATA_PARAMS(NewProp_ObstructionRefreshInterval_MetaData, ARRAY_COUNT(NewProp_ObstructionRefreshInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAcousticPortal" },
				{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialState = { UE4CodeGen_Private::EPropertyClass::Enum, "InitialState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkAcousticPortal, InitialState), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(NewProp_InitialState_MetaData, ARRAY_COUNT(NewProp_InitialState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObstructionCollisionChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObstructionRefreshInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialState_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAkAcousticPortal>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAkAcousticPortal::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAkAcousticPortal, 482025816);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAcousticPortal(Z_Construct_UClass_AAkAcousticPortal, &AAkAcousticPortal::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAcousticPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAcousticPortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
