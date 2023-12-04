// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VirtualCursorFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCursorFunctionLibrary() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor();
// End Cross Module References
	void UVirtualCursorFunctionLibrary::StaticRegisterNativesUVirtualCursorFunctionLibrary()
	{
		UClass* Class = UVirtualCursorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableVirtualCursor", (Native)&UVirtualCursorFunctionLibrary::execDisableVirtualCursor },
			{ "EnableVirtualCursor", (Native)&UVirtualCursorFunctionLibrary::execEnableVirtualCursor },
			{ "IsCursorOverInteractableWidget", (Native)&UVirtualCursorFunctionLibrary::execIsCursorOverInteractableWidget },
			{ "IsEnabled", (Native)&UVirtualCursorFunctionLibrary::execIsEnabled },
			{ "IsMoving", (Native)&UVirtualCursorFunctionLibrary::execIsMoving },
			{ "IsUsingAnalogCursor", (Native)&UVirtualCursorFunctionLibrary::execIsUsingAnalogCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor()
	{
		struct VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC = { UE4CodeGen_Private::EPropertyClass::Object, "PC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "DisableVirtualCursor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor()
	{
		struct VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC = { UE4CodeGen_Private::EPropertyClass::Object, "PC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "EnableVirtualCursor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget()
	{
		struct VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "IsCursorOverInteractableWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled()
	{
		struct VirtualCursorFunctionLibrary_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VirtualCursorFunctionLibrary_eventIsEnabled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventIsEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventIsEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving()
	{
		struct VirtualCursorFunctionLibrary_eventIsMoving_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VirtualCursorFunctionLibrary_eventIsMoving_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventIsMoving_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "IsMoving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventIsMoving_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor()
	{
		struct VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "IsUsingAnalogCursor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventIsUsingAnalogCursor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister()
	{
		return UVirtualCursorFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_GamepadUMGPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor, "DisableVirtualCursor" }, // 4018468047
				{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor, "EnableVirtualCursor" }, // 1432200315
				{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget, "IsCursorOverInteractableWidget" }, // 1450237154
				{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsEnabled, "IsEnabled" }, // 3289212945
				{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsMoving, "IsMoving" }, // 2326543558
				{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsUsingAnalogCursor, "IsUsingAnalogCursor" }, // 3248976201
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "VirtualCursorFunctionLibrary.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVirtualCursorFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVirtualCursorFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UVirtualCursorFunctionLibrary, 618686880);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualCursorFunctionLibrary(Z_Construct_UClass_UVirtualCursorFunctionLibrary, &UVirtualCursorFunctionLibrary::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UVirtualCursorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCursorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
