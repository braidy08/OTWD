// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkOnCheckBoxComponentStateChangedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkOnCheckBoxComponentStateChangedDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature()
	{
		struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms
		{
			bool bIsChecked;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsChecked_SetBit = [](void* Obj){ ((_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms*)Obj)->bIsChecked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChecked = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsChecked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsChecked_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsChecked,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkOnCheckBoxComponentStateChangedDelegate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, "AkOnCheckBoxComponentStateChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
