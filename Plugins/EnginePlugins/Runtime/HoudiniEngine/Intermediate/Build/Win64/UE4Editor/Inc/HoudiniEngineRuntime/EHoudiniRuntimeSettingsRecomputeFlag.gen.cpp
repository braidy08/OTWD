// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EHoudiniRuntimeSettingsRecomputeFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRuntimeSettingsRecomputeFlag() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static UEnum* EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsRecomputeFlag"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRuntimeSettingsRecomputeFlag(EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRuntimeSettingsRecomputeFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_CRC() { return 2233083447U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRuntimeSettingsRecomputeFlag"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HRSRF_Always", (int64)HRSRF_Always },
				{ "HRSRF_OnlyIfMissing", (int64)HRSRF_OnlyIfMissing },
				{ "HRSRF_Nothing", (int64)HRSRF_Nothing },
				{ "HRSRF_MAX", (int64)HRSRF_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HRSRF_MAX.Hidden", "" },
				{ "ModuleRelativePath", "Public/EHoudiniRuntimeSettingsRecomputeFlag.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHoudiniRuntimeSettingsRecomputeFlag",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHoudiniRuntimeSettingsRecomputeFlag",
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
