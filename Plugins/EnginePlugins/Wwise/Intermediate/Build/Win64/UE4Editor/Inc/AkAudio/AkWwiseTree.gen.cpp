// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkWwiseTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseTree() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTree_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTree();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSearchText();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkWwiseTree_SetSearchText();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature();
// End Cross Module References
	void UAkWwiseTree::StaticRegisterNativesUAkWwiseTree()
	{
		UClass* Class = UAkWwiseTree::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSearchText", (Native)&UAkWwiseTree::execGetSearchText },
			{ "GetSelectedItem", (Native)&UAkWwiseTree::execGetSelectedItem },
			{ "SetSearchText", (Native)&UAkWwiseTree::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSearchText()
	{
		struct AkWwiseTree_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkWwiseTree_eventGetSearchText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkWwiseTree.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWwiseTree, "GetSearchText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020409, sizeof(AkWwiseTree_eventGetSearchText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem()
	{
		struct AkWwiseTree_eventGetSelectedItem_Parms
		{
			FAkWwiseObjectDetails ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkWwiseTree_eventGetSelectedItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FAkWwiseObjectDetails, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkWwiseTree.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWwiseTree, "GetSelectedItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020409, sizeof(AkWwiseTree_eventGetSelectedItem_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkWwiseTree_SetSearchText()
	{
		struct AkWwiseTree_eventSetSearchText_Parms
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
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewText = { UE4CodeGen_Private::EPropertyClass::Str, "NewText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkWwiseTree_eventSetSearchText_Parms, NewText), METADATA_PARAMS(NewProp_NewText_MetaData, ARRAY_COUNT(NewProp_NewText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkWwiseTree.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWwiseTree, "SetSearchText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkWwiseTree_eventSetSearchText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWwiseTree_NoRegister()
	{
		return UAkWwiseTree::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkWwiseTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkWwiseTree_GetSearchText, "GetSearchText" }, // 3372330825
				{ &Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem, "GetSelectedItem" }, // 4186318860
				{ &Z_Construct_UFunction_UAkWwiseTree_SetSearchText, "SetSearchText" }, // 1839696166
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkWwiseTree.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkWwiseTree.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDragged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWwiseTree" },
				{ "ModuleRelativePath", "Public/AkWwiseTree.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDragged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnItemDragged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAkWwiseTree, OnItemDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature, METADATA_PARAMS(NewProp_OnItemDragged_MetaData, ARRAY_COUNT(NewProp_OnItemDragged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkWwiseTree" },
				{ "ModuleRelativePath", "Public/AkWwiseTree.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAkWwiseTree, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnSelectionChanged_MetaData, ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnItemDragged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSelectionChanged,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkWwiseTree>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkWwiseTree::StaticClass,
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
	IMPLEMENT_CLASS(UAkWwiseTree, 2168854710);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWwiseTree(Z_Construct_UClass_UAkWwiseTree, &UAkWwiseTree::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWwiseTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWwiseTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
