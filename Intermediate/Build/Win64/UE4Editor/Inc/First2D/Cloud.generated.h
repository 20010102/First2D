// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST2D_Cloud_generated_h
#error "Cloud.generated.h already included, missing '#pragma once' in Cloud.h"
#endif
#define FIRST2D_Cloud_generated_h

#define First2D_Source_First2D_Public_Cloud_h_15_SPARSE_DATA
#define First2D_Source_First2D_Public_Cloud_h_15_RPC_WRAPPERS
#define First2D_Source_First2D_Public_Cloud_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define First2D_Source_First2D_Public_Cloud_h_15_EVENT_PARMS
#define First2D_Source_First2D_Public_Cloud_h_15_CALLBACK_WRAPPERS
#define First2D_Source_First2D_Public_Cloud_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACloud(); \
	friend struct Z_Construct_UClass_ACloud_Statics; \
public: \
	DECLARE_CLASS(ACloud, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(ACloud)


#define First2D_Source_First2D_Public_Cloud_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACloud(); \
	friend struct Z_Construct_UClass_ACloud_Statics; \
public: \
	DECLARE_CLASS(ACloud, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(ACloud)


#define First2D_Source_First2D_Public_Cloud_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACloud(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACloud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACloud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACloud(ACloud&&); \
	NO_API ACloud(const ACloud&); \
public:


#define First2D_Source_First2D_Public_Cloud_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACloud(ACloud&&); \
	NO_API ACloud(const ACloud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACloud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACloud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACloud)


#define First2D_Source_First2D_Public_Cloud_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(ACloud, BoxCollision); } \
	FORCEINLINE static uint32 __PPO__CloudPlane() { return STRUCT_OFFSET(ACloud, CloudPlane); } \
	FORCEINLINE static uint32 __PPO__RainPlane() { return STRUCT_OFFSET(ACloud, RainPlane); } \
	FORCEINLINE static uint32 __PPO__Textures() { return STRUCT_OFFSET(ACloud, Textures); } \
	FORCEINLINE static uint32 __PPO__MatInstance() { return STRUCT_OFFSET(ACloud, MatInstance); } \
	FORCEINLINE static uint32 __PPO__ScoreText() { return STRUCT_OFFSET(ACloud, ScoreText); } \
	FORCEINLINE static uint32 __PPO__CloudSound() { return STRUCT_OFFSET(ACloud, CloudSound); } \
	FORCEINLINE static uint32 __PPO__AudioComp() { return STRUCT_OFFSET(ACloud, AudioComp); }


#define First2D_Source_First2D_Public_Cloud_h_12_PROLOG \
	First2D_Source_First2D_Public_Cloud_h_15_EVENT_PARMS


#define First2D_Source_First2D_Public_Cloud_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_Cloud_h_15_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_Cloud_h_15_SPARSE_DATA \
	First2D_Source_First2D_Public_Cloud_h_15_RPC_WRAPPERS \
	First2D_Source_First2D_Public_Cloud_h_15_CALLBACK_WRAPPERS \
	First2D_Source_First2D_Public_Cloud_h_15_INCLASS \
	First2D_Source_First2D_Public_Cloud_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define First2D_Source_First2D_Public_Cloud_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_Cloud_h_15_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_Cloud_h_15_SPARSE_DATA \
	First2D_Source_First2D_Public_Cloud_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_Cloud_h_15_CALLBACK_WRAPPERS \
	First2D_Source_First2D_Public_Cloud_h_15_INCLASS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_Cloud_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST2D_API UClass* StaticClass<class ACloud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID First2D_Source_First2D_Public_Cloud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
