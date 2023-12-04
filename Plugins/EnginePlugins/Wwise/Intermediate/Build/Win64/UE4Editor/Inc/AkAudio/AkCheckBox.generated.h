// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
enum class ECheckBoxState : uint8;
#ifdef AKAUDIO_AkCheckBox_generated_h
#error "AkCheckBox.generated.h already included, missing '#pragma once' in AkCheckBox.h"
#endif
#define AKAUDIO_AkCheckBox_generated_h

#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=this->GetAkItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAkProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheckedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECheckBoxState*)Z_Param__Result=this->GetCheckedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChecked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsChecked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkBoolProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkBoolProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheckedState) \
	{ \
		P_GET_ENUM(ECheckBoxState,Z_Param_InCheckedState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsChecked) \
	{ \
		P_GET_UBOOL(Z_Param_InIsChecked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsChecked(Z_Param_InIsChecked); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkItemId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuid*)Z_Param__Result=this->GetAkItemId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAkProperty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetAkProperty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCheckedState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECheckBoxState*)Z_Param__Result=this->GetCheckedState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChecked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsChecked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkBoolProperty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemProperty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkBoolProperty(Z_Param_ItemProperty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAkItemId) \
	{ \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAkItemId(Z_Param_Out_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCheckedState) \
	{ \
		P_GET_ENUM(ECheckBoxState,Z_Param_InCheckedState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsChecked) \
	{ \
		P_GET_UBOOL(Z_Param_InIsChecked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsChecked(Z_Param_InIsChecked); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkCheckBox(); \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkCheckBox(); \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCheckBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public:


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkCheckBox)


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_PRIVATE_PROPERTY_OFFSET
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_16_PROLOG
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
