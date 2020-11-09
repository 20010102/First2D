// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST2D_GameCamera_generated_h
#error "GameCamera.generated.h already included, missing '#pragma once' in GameCamera.h"
#endif
#define FIRST2D_GameCamera_generated_h

#define First2D_Source_First2D_Public_GameCamera_h_12_SPARSE_DATA
#define First2D_Source_First2D_Public_GameCamera_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSureFalling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSureFalling(); \
		P_NATIVE_END; \
	}


#define First2D_Source_First2D_Public_GameCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSureFalling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSureFalling(); \
		P_NATIVE_END; \
	}


#define First2D_Source_First2D_Public_GameCamera_h_12_EVENT_PARMS
#define First2D_Source_First2D_Public_GameCamera_h_12_CALLBACK_WRAPPERS
#define First2D_Source_First2D_Public_GameCamera_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCamera(); \
	friend struct Z_Construct_UClass_AGameCamera_Statics; \
public: \
	DECLARE_CLASS(AGameCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(AGameCamera)


#define First2D_Source_First2D_Public_GameCamera_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameCamera(); \
	friend struct Z_Construct_UClass_AGameCamera_Statics; \
public: \
	DECLARE_CLASS(AGameCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(AGameCamera)


#define First2D_Source_First2D_Public_GameCamera_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCamera(AGameCamera&&); \
	NO_API AGameCamera(const AGameCamera&); \
public:


#define First2D_Source_First2D_Public_GameCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCamera(AGameCamera&&); \
	NO_API AGameCamera(const AGameCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCamera)


#define First2D_Source_First2D_Public_GameCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AGameCamera, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__DestroyArea() { return STRUCT_OFFSET(AGameCamera, DestroyArea); } \
	FORCEINLINE static uint32 __PPO__bFollowPlayer() { return STRUCT_OFFSET(AGameCamera, bFollowPlayer); }


#define First2D_Source_First2D_Public_GameCamera_h_9_PROLOG \
	First2D_Source_First2D_Public_GameCamera_h_12_EVENT_PARMS


#define First2D_Source_First2D_Public_GameCamera_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_GameCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_GameCamera_h_12_SPARSE_DATA \
	First2D_Source_First2D_Public_GameCamera_h_12_RPC_WRAPPERS \
	First2D_Source_First2D_Public_GameCamera_h_12_CALLBACK_WRAPPERS \
	First2D_Source_First2D_Public_GameCamera_h_12_INCLASS \
	First2D_Source_First2D_Public_GameCamera_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define First2D_Source_First2D_Public_GameCamera_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_GameCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_GameCamera_h_12_SPARSE_DATA \
	First2D_Source_First2D_Public_GameCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_GameCamera_h_12_CALLBACK_WRAPPERS \
	First2D_Source_First2D_Public_GameCamera_h_12_INCLASS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_GameCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST2D_API UClass* StaticClass<class AGameCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID First2D_Source_First2D_Public_GameCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
