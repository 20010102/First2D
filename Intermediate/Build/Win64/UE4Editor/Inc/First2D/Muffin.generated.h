// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST2D_Muffin_generated_h
#error "Muffin.generated.h already included, missing '#pragma once' in Muffin.h"
#endif
#define FIRST2D_Muffin_generated_h

#define First2D_Source_First2D_Public_Muffin_h_12_SPARSE_DATA
#define First2D_Source_First2D_Public_Muffin_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	}


#define First2D_Source_First2D_Public_Muffin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	}


#define First2D_Source_First2D_Public_Muffin_h_12_EVENT_PARMS
#define First2D_Source_First2D_Public_Muffin_h_12_CALLBACK_WRAPPERS
#define First2D_Source_First2D_Public_Muffin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMuffin(); \
	friend struct Z_Construct_UClass_AMuffin_Statics; \
public: \
	DECLARE_CLASS(AMuffin, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(AMuffin)


#define First2D_Source_First2D_Public_Muffin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMuffin(); \
	friend struct Z_Construct_UClass_AMuffin_Statics; \
public: \
	DECLARE_CLASS(AMuffin, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First2D"), NO_API) \
	DECLARE_SERIALIZER(AMuffin)


#define First2D_Source_First2D_Public_Muffin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMuffin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMuffin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuffin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuffin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuffin(AMuffin&&); \
	NO_API AMuffin(const AMuffin&); \
public:


#define First2D_Source_First2D_Public_Muffin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuffin(AMuffin&&); \
	NO_API AMuffin(const AMuffin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuffin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuffin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMuffin)


#define First2D_Source_First2D_Public_Muffin_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDead() { return STRUCT_OFFSET(AMuffin, bDead); } \
	FORCEINLINE static uint32 __PPO__AirSpeed() { return STRUCT_OFFSET(AMuffin, AirSpeed); } \
	FORCEINLINE static uint32 __PPO__GroundSpeed() { return STRUCT_OFFSET(AMuffin, GroundSpeed); }


#define First2D_Source_First2D_Public_Muffin_h_9_PROLOG \
	First2D_Source_First2D_Public_Muffin_h_12_EVENT_PARMS


#define First2D_Source_First2D_Public_Muffin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_Muffin_h_12_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_Muffin_h_12_SPARSE_DATA \
	First2D_Source_First2D_Public_Muffin_h_12_RPC_WRAPPERS \
	First2D_Source_First2D_Public_Muffin_h_12_CALLBACK_WRAPPERS \
	First2D_Source_First2D_Public_Muffin_h_12_INCLASS \
	First2D_Source_First2D_Public_Muffin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define First2D_Source_First2D_Public_Muffin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First2D_Source_First2D_Public_Muffin_h_12_PRIVATE_PROPERTY_OFFSET \
	First2D_Source_First2D_Public_Muffin_h_12_SPARSE_DATA \
	First2D_Source_First2D_Public_Muffin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_Muffin_h_12_CALLBACK_WRAPPERS \
	First2D_Source_First2D_Public_Muffin_h_12_INCLASS_NO_PURE_DECLS \
	First2D_Source_First2D_Public_Muffin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST2D_API UClass* StaticClass<class AMuffin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID First2D_Source_First2D_Public_Muffin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
