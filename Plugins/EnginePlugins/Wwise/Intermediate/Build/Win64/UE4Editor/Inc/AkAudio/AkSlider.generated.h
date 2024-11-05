// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FLinearColor;
#ifdef AKAUDIO_AkSlider_generated_h
#error "AkSlider.generated.h already included, missing '#pragma once' in AkSlider.h"
#endif
#define AKAUDIO_AkSlider_generated_h

#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=this->GetAkSliderItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkSliderItemProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAkSliderItemProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndentHandle) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIndentHandle(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLocked(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderBarColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderBarColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderHandleColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStepSize(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_InValue); \
		P_NATIVE_END; \
	}


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=this->GetAkSliderItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkSliderItemProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAkSliderItemProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkSliderItemProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkSliderItemProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndentHandle) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIndentHandle(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocked) \
	{ \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLocked(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderBarColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderBarColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSliderHandleColor(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStepSize(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetValue(Z_Param_InValue); \
		P_NATIVE_END; \
	}


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSlider(); \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSlider(); \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSlider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public:


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkSlider)


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_PRIVATE_PROPERTY_OFFSET
#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_15_PROLOG
#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_PRIVATE_PROPERTY_OFFSET \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_PRIVATE_PROPERTY_OFFSET \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS_NO_PURE_DECLS \
	OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_T2_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
