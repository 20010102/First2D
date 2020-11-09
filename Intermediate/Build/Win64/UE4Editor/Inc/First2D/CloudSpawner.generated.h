// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST2D_CloudSpawner_generated_h
#error "CloudSpawner.generated.h already included, missing '#pragma once' in CloudSpawner.h"
#endif
#define FIRST2D_CloudSpawner_generated_h

#define First2D_Source_First2D_Public_CloudSpawner_h_14_SPARSE_DATA
#define First2D_Source_First2D_Public_CloudSpawner_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	}


#define First2D_Source_First2D_Public_CloudSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	}


#define First2D_Source_First2D_Public_CloudSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACloudSpawner(); \
	friend struct Z_Construct_UClass_ACloudSpawner_Statics; \
public: \
	DECLARE_CLASS(ACloudSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(ACloudSpawner)


#define First2D_Source_First2D_Public_CloudSpawner_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACloudSpawner(); \
	friend struct Z_Construct_UClass_ACloudSpawner_Statics; \
public: \
	DECLARE_CLASS(ACloudSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(ACloudSpawner)


#define First2D_Source_First2D_Public_CloudSpawner_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACloudSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACloudSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACloudSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACloudSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACloudSpawner(ACloudSpawner&&); \
	NO_API ACloudSpawner(const ACloudSpawner&); \
public:


#define First2D_Source_First2D_Public_CloudSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACloudSpawner(ACloudSpawner&&); \
	NO_API ACloudSpawner(const ACloudSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACloudSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACloudSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACloudSpawner)


#define First2D_Source_First2D_Public_CloudSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnArea() { return STRUCT_OFFSET(ACloudSpawner, SpawnArea); } \
	FORCEINLINE static uint32 __PPO__TriggerArea() { return STRUCT_OFFSET(ACloudSpawner, TriggerArea); } \
	FORCEINLINE static uint32 __PPO__DefualtRootComponent() { return STRUCT_OFFSET(ACloudSpawner, DefualtRootComponent); } \
	FORCEINLINE static uint32 __PPO__Cloud() { return STRUCT_OFFSET(ACloudSpawner, Cloud); } \
	FORCEINLINE static uint32 __PPO__InitSpawnAmount() { return STRUCT_OFFSET(ACloudSpawner, InitSpawnAmount); } \
	FORCEINLINE static uint32 __PPO__SpawnSpacing() { return STRUCT_OFFSET(ACloudSpawner, SpawnSpacing); }


#define First2D_Source_First2D_Public_CloudSpawner_h_11_PROLOG
#define First2D_Source_First2D_Public_CloudSpawner_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_CloudSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_CloudSpawner_h_14_SPARSE_DATA \
	First2D_Source_First2D_Public_CloudSpawner_h_14_RPC_WRAPPERS \
	First2D_Source_First2D_Public_CloudSpawner_h_14_INCLASS \
	First2D_Source_First2D_Public_CloudSpawner_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define First2D_Source_First2D_Public_CloudSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_CloudSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_CloudSpawner_h_14_SPARSE_DATA \
	First2D_Source_First2D_Public_CloudSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_CloudSpawner_h_14_INCLASS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_CloudSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST2D_API UClass* StaticClass<class ACloudSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID First2D_Source_First2D_Public_CloudSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
