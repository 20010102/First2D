// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First2D/First2DGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirst2DGameModeBase() {}
// Cross Module References
	FIRST2D_API UClass* Z_Construct_UClass_AFirst2DGameModeBase_NoRegister();
	FIRST2D_API UClass* Z_Construct_UClass_AFirst2DGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_First2D();
// End Cross Module References
	void AFirst2DGameModeBase::StaticRegisterNativesAFirst2DGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFirst2DGameModeBase_NoRegister()
	{
		return AFirst2DGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirst2DGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirst2DGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_First2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirst2DGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "First2DGameModeBase.h" },
		{ "ModuleRelativePath", "First2DGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirst2DGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirst2DGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirst2DGameModeBase_Statics::ClassParams = {
		&AFirst2DGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirst2DGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirst2DGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirst2DGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirst2DGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirst2DGameModeBase, 4117818448);
	template<> FIRST2D_API UClass* StaticClass<AFirst2DGameModeBase>()
	{
		return AFirst2DGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirst2DGameModeBase(Z_Construct_UClass_AFirst2DGameModeBase, &AFirst2DGameModeBase::StaticClass, TEXT("/Script/First2D"), TEXT("AFirst2DGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirst2DGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
