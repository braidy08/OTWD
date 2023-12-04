// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OnItemDragDetectedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnItemDragDetectedDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature()
	{
		struct _Script_AkAudio_eventOnItemDragDetected_Parms
		{
			FGuid ItemDraggedID;
			FString ItemDraggedName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDraggedName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemDraggedName = { UE4CodeGen_Private::EPropertyClass::Str, "ItemDraggedName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDragDetected_Parms, ItemDraggedName), METADATA_PARAMS(NewProp_ItemDraggedName_MetaData, ARRAY_COUNT(NewProp_ItemDraggedName_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDraggedID = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemDraggedID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDragDetected_Parms, ItemDraggedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemDraggedName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemDraggedID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/OnItemDragDetectedDelegate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, "OnItemDragDetected__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_AkAudio_eventOnItemDragDetected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
