// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWaapiUri;
#ifdef AKAUDIO_AkWaapiUriConv_generated_h
#error "AkWaapiUriConv.generated.h already included, missing '#pragma once' in AkWaapiUriConv.h"
#endif
#define AKAUDIO_AkWaapiUriConv_generated_h

#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToString(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToText(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToString) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToString(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkWaapiUriToText) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToText(Z_Param_Out_INAkWaapiUri); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWaapiUriConv(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWaapiUriConv(); \
public: \
	DECLARE_CLASS(UAkWaapiUriConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiUriConv) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAkWaapiUriConv(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWaapiUriConv(); \
public: \
	DECLARE_CLASS(UAkWaapiUriConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiUriConv) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiUriConv(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiUriConv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiUriConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiUriConv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiUriConv(UAkWaapiUriConv&&); \
	NO_API UAkWaapiUriConv(const UAkWaapiUriConv&); \
public:


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiUriConv(UAkWaapiUriConv&&); \
	NO_API UAkWaapiUriConv(const UAkWaapiUriConv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiUriConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiUriConv); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkWaapiUriConv)


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_PRIVATE_PROPERTY_OFFSET
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_7_PROLOG
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_RPC_WRAPPERS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_INCLASS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_INCLASS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiUriConv_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
