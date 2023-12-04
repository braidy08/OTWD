// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkPropertyToControl;
#ifdef AKAUDIO_AkItemPropertiesConv_generated_h
#error "AkItemPropertiesConv.generated.h already included, missing '#pragma once' in AkItemPropertiesConv.h"
#endif
#define AKAUDIO_AkItemPropertiesConv_generated_h

#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToString) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToText) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToString) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToText) \
	{ \
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemPropertiesConv(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemPropertiesConv(); \
public: \
	DECLARE_CLASS(UAkItemPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemPropertiesConv) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemPropertiesConv(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkItemPropertiesConv(); \
public: \
	DECLARE_CLASS(UAkItemPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemPropertiesConv) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemPropertiesConv(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemPropertiesConv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemPropertiesConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemPropertiesConv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemPropertiesConv(UAkItemPropertiesConv&&); \
	NO_API UAkItemPropertiesConv(const UAkItemPropertiesConv&); \
public:


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemPropertiesConv(UAkItemPropertiesConv&&); \
	NO_API UAkItemPropertiesConv(const UAkItemPropertiesConv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemPropertiesConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemPropertiesConv); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkItemPropertiesConv)


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_PRIVATE_PROPERTY_OFFSET
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_7_PROLOG
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_RPC_WRAPPERS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_INCLASS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_INCLASS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemPropertiesConv_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
