// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkItemBoolProperties_generated_h
#error "AkItemBoolProperties.generated.h already included, missing '#pragma once' in AkItemBoolProperties.h"
#endif
#define AKAUDIO_AkItemBoolProperties_generated_h

#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSearchText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSearchText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSelectedProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSearchText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSearchText(Z_Param_NewText); \
		P_NATIVE_END; \
	}


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSearchText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSearchText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSelectedProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSearchText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSearchText(Z_Param_NewText); \
		P_NATIVE_END; \
	}


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemBoolProperties(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemBoolProperties(); \
public: \
	DECLARE_CLASS(UAkItemBoolProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolProperties) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemBoolProperties(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemBoolProperties(); \
public: \
	DECLARE_CLASS(UAkItemBoolProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolProperties) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemBoolProperties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemBoolProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolProperties(UAkItemBoolProperties&&); \
	NO_API UAkItemBoolProperties(const UAkItemBoolProperties&); \
public:


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolProperties(UAkItemBoolProperties&&); \
	NO_API UAkItemBoolProperties(const UAkItemBoolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkItemBoolProperties)


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_PRIVATE_PROPERTY_OFFSET
#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_8_PROLOG
#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_PRIVATE_PROPERTY_OFFSET \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_RPC_WRAPPERS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_INCLASS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_PRIVATE_PROPERTY_OFFSET \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_INCLASS_NO_PURE_DECLS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
