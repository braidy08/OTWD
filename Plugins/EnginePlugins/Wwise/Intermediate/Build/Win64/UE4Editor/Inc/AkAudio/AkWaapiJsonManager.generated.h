// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAKWaapiJsonObject;
struct FAkWaapiFieldNames;
#ifdef AKAUDIO_AkWaapiJsonManager_generated_h
#error "AkWaapiJsonManager.generated.h already included, missing '#pragma once' in AkWaapiJsonManager.h"
#endif
#define AKAUDIO_AkWaapiJsonManager_generated_h

#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToString) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToText) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrayField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAKWaapiJsonObject>*)Z_Param__Result=UAkWaapiJsonManager::GetArrayField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiJsonManager::GetBoolField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntegerField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiJsonManager::GetIntegerField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAkWaapiJsonManager::GetNumberField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::GetObjectField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::GetStringField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayObjectFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FAKWaapiJsonObject,Z_Param_Out_FieldObjectValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayObjectFields(Z_Param_Out_FieldName,Z_Param_Out_FieldObjectValues,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayStringFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldStringValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayStringFields(Z_Param_Out_FieldName,Z_Param_Out_FieldStringValues,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_UBOOL(Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetBoolField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetNumberField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetObjectField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetStringField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	}


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToString) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_FAKWaapiJsonObjectToText) \
	{ \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(Z_Param_INAKWaapiJsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArrayField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FAKWaapiJsonObject>*)Z_Param__Result=UAkWaapiJsonManager::GetArrayField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAkWaapiJsonManager::GetBoolField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntegerField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAkWaapiJsonManager::GetIntegerField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAkWaapiJsonManager::GetNumberField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::GetObjectField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::GetStringField(Z_Param_Out_FieldName,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayObjectFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FAKWaapiJsonObject,Z_Param_Out_FieldObjectValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayObjectFields(Z_Param_Out_FieldName,Z_Param_Out_FieldObjectValues,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrayStringFields) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldStringValues); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayStringFields(Z_Param_Out_FieldName,Z_Param_Out_FieldStringValues,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_UBOOL(Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetBoolField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetNumberField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetObjectField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetObjectField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringField) \
	{ \
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FieldValue); \
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetStringField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target); \
		P_NATIVE_END; \
	}


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWaapiJsonManager(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWaapiJsonManager(); \
public: \
	DECLARE_CLASS(UAkWaapiJsonManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiJsonManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAkWaapiJsonManager(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWaapiJsonManager(); \
public: \
	DECLARE_CLASS(UAkWaapiJsonManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWaapiJsonManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWaapiJsonManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWaapiJsonManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiJsonManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiJsonManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiJsonManager(UAkWaapiJsonManager&&); \
	NO_API UAkWaapiJsonManager(const UAkWaapiJsonManager&); \
public:


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWaapiJsonManager(UAkWaapiJsonManager&&); \
	NO_API UAkWaapiJsonManager(const UAkWaapiJsonManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWaapiJsonManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWaapiJsonManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkWaapiJsonManager)


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_PRIVATE_PROPERTY_OFFSET
#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_8_PROLOG
#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_PRIVATE_PROPERTY_OFFSET \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_RPC_WRAPPERS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_INCLASS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_PRIVATE_PROPERTY_OFFSET \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_INCLASS_NO_PURE_DECLS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
