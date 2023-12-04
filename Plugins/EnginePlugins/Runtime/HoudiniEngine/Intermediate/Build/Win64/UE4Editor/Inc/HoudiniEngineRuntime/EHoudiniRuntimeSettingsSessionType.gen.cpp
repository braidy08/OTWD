// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EHoudiniRuntimeSettingsSessionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRuntimeSettingsSessionType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniRuntimeSettingsSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsSessionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRuntimeSettingsSessionType(EHoudiniRuntimeSettingsSessionType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRuntimeSettingsSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_CRC() { return 1884621022U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRuntimeSettingsSessionType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HRSST_InProcess", (int64)HRSST_InProcess },
				{ "HRSST_Socket", (int64)HRSST_Socket },
				{ "HRSST_NamedPipe", (int64)HRSST_NamedPipe },
				{ "HRSST_MAX", (int64)HRSST_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HRSST_MAX.Hidden", "" },
				{ "ModuleRelativePath", "Public/EHoudiniRuntimeSettingsSessionType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHoudiniRuntimeSettingsSessionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHoudiniRuntimeSettingsSessionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
