// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First2D/Public/GameCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCamera() {}
// Cross Module References
	FIRST2D_API UClass* Z_Construct_UClass_AGameCamera_NoRegister();
	FIRST2D_API UClass* Z_Construct_UClass_AGameCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_First2D();
	FIRST2D_API UFunction* Z_Construct_UFunction_AGameCamera_OnSureFalling();
	FIRST2D_API UFunction* Z_Construct_UFunction_AGameCamera_ResetTimer();
	FIRST2D_API UFunction* Z_Construct_UFunction_AGameCamera_UpdateTimer();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_AGameCamera_ResetTimer = FName(TEXT("ResetTimer"));
	void AGameCamera::ResetTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameCamera_ResetTimer),NULL);
	}
	static FName NAME_AGameCamera_UpdateTimer = FName(TEXT("UpdateTimer"));
	void AGameCamera::UpdateTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameCamera_UpdateTimer),NULL);
	}
	void AGameCamera::StaticRegisterNativesAGameCamera()
	{
		UClass* Class = AGameCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSureFalling", &AGameCamera::execOnSureFalling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameCamera_OnSureFalling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameCamera_OnSureFalling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCamera_OnSureFalling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCamera, nullptr, "OnSureFalling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameCamera_OnSureFalling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCamera_OnSureFalling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameCamera_OnSureFalling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameCamera_OnSureFalling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameCamera_ResetTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameCamera_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//????\xca\xb1????\n" },
		{ "ModuleRelativePath", "Public/GameCamera.h" },
		{ "ToolTip", "????\xca\xb1????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCamera_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCamera, nullptr, "ResetTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameCamera_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCamera_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameCamera_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameCamera_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameCamera_UpdateTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameCamera_UpdateTimer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//????\xca\xb1????\n" },
		{ "ModuleRelativePath", "Public/GameCamera.h" },
		{ "ToolTip", "????\xca\xb1????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCamera_UpdateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCamera, nullptr, "UpdateTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameCamera_UpdateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCamera_UpdateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameCamera_UpdateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameCamera_UpdateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameCamera_NoRegister()
	{
		return AGameCamera::StaticClass();
	}
	struct Z_Construct_UClass_AGameCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollowPlayer_MetaData[];
#endif
		static void NewProp_bFollowPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_First2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameCamera_OnSureFalling, "OnSureFalling" }, // 2716128351
		{ &Z_Construct_UFunction_AGameCamera_ResetTimer, "ResetTimer" }, // 1409809415
		{ &Z_Construct_UFunction_AGameCamera_UpdateTimer, "UpdateTimer" }, // 2953558017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameCamera.h" },
		{ "ModuleRelativePath", "Public/GameCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCamera_Statics::NewProp_bFollowPlayer_MetaData[] = {
		{ "Category", "GameCamera" },
		{ "ModuleRelativePath", "Public/GameCamera.h" },
	};
#endif
	void Z_Construct_UClass_AGameCamera_Statics::NewProp_bFollowPlayer_SetBit(void* Obj)
	{
		((AGameCamera*)Obj)->bFollowPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameCamera_Statics::NewProp_bFollowPlayer = { "bFollowPlayer", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameCamera), &Z_Construct_UClass_AGameCamera_Statics::NewProp_bFollowPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameCamera_Statics::NewProp_bFollowPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCamera_Statics::NewProp_bFollowPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCamera_Statics::NewProp_DestroyArea_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCamera_Statics::NewProp_DestroyArea = { "DestroyArea", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameCamera, DestroyArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameCamera_Statics::NewProp_DestroyArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCamera_Statics::NewProp_DestroyArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCamera_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameCamera, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameCamera_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCamera_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCamera_Statics::NewProp_bFollowPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCamera_Statics::NewProp_DestroyArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCamera_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameCamera_Statics::ClassParams = {
		&AGameCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameCamera, 3805250483);
	template<> FIRST2D_API UClass* StaticClass<AGameCamera>()
	{
		return AGameCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameCamera(Z_Construct_UClass_AGameCamera, &AGameCamera::StaticClass, TEXT("/Script/First2D"), TEXT("AGameCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
