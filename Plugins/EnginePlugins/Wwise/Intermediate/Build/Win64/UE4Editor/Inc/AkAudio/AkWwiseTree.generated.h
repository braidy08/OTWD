// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWwiseObjectDetails;
#ifdef AKAUDIO_AkWwiseTree_generated_h
#error "AkWwiseTree.generated.h already included, missing '#pragma once' in AkWwiseTree.h"
#endif
#define AKAUDIO_AkWwiseTree_generated_h

#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSearchText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSearchText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAkWwiseObjectDetails*)Z_Param__Result=this->GetSelectedItem(); \
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


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSearchText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetSearchText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAkWwiseObjectDetails*)Z_Param__Result=this->GetSelectedItem(); \
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


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWwiseTree(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWwiseTree(); \
public: \
	DECLARE_CLASS(UAkWwiseTree, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWwiseTree) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAkWwiseTree(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkWwiseTree(); \
public: \
	DECLARE_CLASS(UAkWwiseTree, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWwiseTree) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWwiseTree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWwiseTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWwiseTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWwiseTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWwiseTree(UAkWwiseTree&&); \
	NO_API UAkWwiseTree(const UAkWwiseTree&); \
public:


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWwiseTree(UAkWwiseTree&&); \
	NO_API UAkWwiseTree(const UAkWwiseTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWwiseTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWwiseTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkWwiseTree)


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_PRIVATE_PROPERTY_OFFSET
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_9_PROLOG
#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_RPC_WRAPPERS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_INCLASS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_INCLASS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
