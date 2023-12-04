// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef GAMEPADUMGPLUGIN_VirtualCursorFunctionLibrary_generated_h
#error "VirtualCursorFunctionLibrary.generated.h already included, missing '#pragma once' in VirtualCursorFunctionLibrary.h"
#endif
#define GAMEPADUMGPLUGIN_VirtualCursorFunctionLibrary_generated_h

#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCursorOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUsingAnalogCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsUsingAnalogCursor(); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCursorOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUsingAnalogCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsUsingAnalogCursor(); \
		P_NATIVE_END; \
	}


#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCursorFunctionLibrary(); \
	friend GAMEPADUMGPLUGIN_API class UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GamepadUMGPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCursorFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualCursorFunctionLibrary(); \
	friend GAMEPADUMGPLUGIN_API class UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GamepadUMGPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCursorFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCursorFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCursorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCursorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCursorFunctionLibrary(UVirtualCursorFunctionLibrary&&); \
	NO_API UVirtualCursorFunctionLibrary(const UVirtualCursorFunctionLibrary&); \
public:


#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCursorFunctionLibrary(UVirtualCursorFunctionLibrary&&); \
	NO_API UVirtualCursorFunctionLibrary(const UVirtualCursorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCursorFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVirtualCursorFunctionLibrary)


#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_PRIVATE_PROPERTY_OFFSET
#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_8_PROLOG
#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_RPC_WRAPPERS \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_INCLASS \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_INCLASS_NO_PURE_DECLS \
	OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OTWD_Plugins_EnginePlugins_UE4GamepadUMG_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
