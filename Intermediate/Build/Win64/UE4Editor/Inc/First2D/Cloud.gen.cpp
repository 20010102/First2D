// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First2D/Public/Cloud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloud() {}
// Cross Module References
	FIRST2D_API UClass* Z_Construct_UClass_ACloud_NoRegister();
	FIRST2D_API UClass* Z_Construct_UClass_ACloud();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_First2D();
	FIRST2D_API UFunction* Z_Construct_UFunction_ACloud_FadeOut();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_ACloud_FadeOut = FName(TEXT("FadeOut"));
	void ACloud::FadeOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACloud_FadeOut),NULL);
	}
	void ACloud::StaticRegisterNativesACloud()
	{
	}
	struct Z_Construct_UFunction_ACloud_FadeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACloud_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACloud_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACloud, nullptr, "FadeOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACloud_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACloud_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACloud_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACloud_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACloud_NoRegister()
	{
		return ACloud::StaticClass();
	}
	struct Z_Construct_UClass_ACloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloudSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RainPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloudPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_First2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACloud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACloud_FadeOut, "FadeOut" }, // 1860684261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cloud.h" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_AudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_AudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_CloudSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_CloudSound = { "CloudSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, CloudSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_CloudSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_CloudSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_ScoreText_MetaData[] = {
		{ "Category", "Show" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_MatInstance_MetaData[] = {
		{ "Category", "Show" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_MatInstance = { "MatInstance", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, MatInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_MatInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_MatInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Show" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, Textures), METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_RainPlane_MetaData[] = {
		{ "Category", "Show" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_RainPlane = { "RainPlane", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, RainPlane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_RainPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_RainPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_CloudPlane_MetaData[] = {
		{ "Category", "Show" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_CloudPlane = { "CloudPlane", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, CloudPlane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_CloudPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_CloudPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloud_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//?\xc8\xb4???\xd2\xbb????\xd7\xb2??\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cloud.h" },
		{ "ToolTip", "?\xc8\xb4???\xd2\xbb????\xd7\xb2??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloud_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloud, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::NewProp_BoxCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_AudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_CloudSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_ScoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_MatInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_Textures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_RainPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_CloudPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloud_Statics::NewProp_BoxCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACloud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACloud_Statics::ClassParams = {
		&ACloud::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACloud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACloud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACloud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACloud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACloud, 179236282);
	template<> FIRST2D_API UClass* StaticClass<ACloud>()
	{
		return ACloud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACloud(Z_Construct_UClass_ACloud, &ACloud::StaticClass, TEXT("/Script/First2D"), TEXT("ACloud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACloud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
