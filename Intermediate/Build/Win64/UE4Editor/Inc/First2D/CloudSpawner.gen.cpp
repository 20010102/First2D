// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First2D/Public/CloudSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudSpawner() {}
// Cross Module References
	FIRST2D_API UClass* Z_Construct_UClass_ACloudSpawner_NoRegister();
	FIRST2D_API UClass* Z_Construct_UClass_ACloudSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_First2D();
	FIRST2D_API UFunction* Z_Construct_UFunction_ACloudSpawner_Reset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FIRST2D_API UClass* Z_Construct_UClass_ACloud_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ACloudSpawner::StaticRegisterNativesACloudSpawner()
	{
		UClass* Class = ACloudSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &ACloudSpawner::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACloudSpawner_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACloudSpawner_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACloudSpawner_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACloudSpawner, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACloudSpawner_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACloudSpawner_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACloudSpawner_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACloudSpawner_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACloudSpawner_NoRegister()
	{
		return ACloudSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACloudSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitSpawnAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InitSpawnAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cloud_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Cloud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefualtRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefualtRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACloudSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_First2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACloudSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACloudSpawner_Reset, "Reset" }, // 227827099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CloudSpawner.h" },
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnSpacing_MetaData[] = {
		{ "Category", "Cloud" },
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnSpacing = { "SpawnSpacing", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloudSpawner, SpawnSpacing), METADATA_PARAMS(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudSpawner_Statics::NewProp_InitSpawnAmount_MetaData[] = {
		{ "Category", "Cloud" },
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACloudSpawner_Statics::NewProp_InitSpawnAmount = { "InitSpawnAmount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloudSpawner, InitSpawnAmount), METADATA_PARAMS(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_InitSpawnAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_InitSpawnAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudSpawner_Statics::NewProp_Cloud_MetaData[] = {
		{ "Category", "Cloud" },
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACloudSpawner_Statics::NewProp_Cloud = { "Cloud", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloudSpawner, Cloud), Z_Construct_UClass_ACloud_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_Cloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_Cloud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudSpawner_Statics::NewProp_DefualtRootComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloudSpawner_Statics::NewProp_DefualtRootComponent = { "DefualtRootComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloudSpawner, DefualtRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_DefualtRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_DefualtRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudSpawner_Statics::NewProp_TriggerArea_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloudSpawner_Statics::NewProp_TriggerArea = { "TriggerArea", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloudSpawner, TriggerArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_TriggerArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_TriggerArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnArea_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CloudSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnArea = { "SpawnArea", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloudSpawner, SpawnArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACloudSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloudSpawner_Statics::NewProp_InitSpawnAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloudSpawner_Statics::NewProp_Cloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloudSpawner_Statics::NewProp_DefualtRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloudSpawner_Statics::NewProp_TriggerArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloudSpawner_Statics::NewProp_SpawnArea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACloudSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACloudSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACloudSpawner_Statics::ClassParams = {
		&ACloudSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACloudSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACloudSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACloudSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACloudSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACloudSpawner, 1728101909);
	template<> FIRST2D_API UClass* StaticClass<ACloudSpawner>()
	{
		return ACloudSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACloudSpawner(Z_Construct_UClass_ACloudSpawner, &ACloudSpawner::StaticClass, TEXT("/Script/First2D"), TEXT("ACloudSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACloudSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
