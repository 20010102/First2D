// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First2D/Public/Muffin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuffin() {}
// Cross Module References
	FIRST2D_API UClass* Z_Construct_UClass_AMuffin_NoRegister();
	FIRST2D_API UClass* Z_Construct_UClass_AMuffin();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_First2D();
	FIRST2D_API UFunction* Z_Construct_UFunction_AMuffin_DisplayRestart();
	FIRST2D_API UFunction* Z_Construct_UFunction_AMuffin_Reset();
// End Cross Module References
	static FName NAME_AMuffin_DisplayRestart = FName(TEXT("DisplayRestart"));
	void AMuffin::DisplayRestart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMuffin_DisplayRestart),NULL);
	}
	void AMuffin::StaticRegisterNativesAMuffin()
	{
		UClass* Class = AMuffin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &AMuffin::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMuffin_DisplayRestart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuffin_DisplayRestart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Muffin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMuffin_DisplayRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMuffin, nullptr, "DisplayRestart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMuffin_DisplayRestart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuffin_DisplayRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMuffin_DisplayRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMuffin_DisplayRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMuffin_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuffin_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Muffin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMuffin_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMuffin, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMuffin_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuffin_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMuffin_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMuffin_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMuffin_NoRegister()
	{
		return AMuffin::StaticClass();
	}
	struct Z_Construct_UClass_AMuffin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuffin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_First2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMuffin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMuffin_DisplayRestart, "DisplayRestart" }, // 993962677
		{ &Z_Construct_UFunction_AMuffin_Reset, "Reset" }, // 3475825369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuffin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Muffin.h" },
		{ "ModuleRelativePath", "Public/Muffin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuffin_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/Muffin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuffin_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuffin, GroundSpeed), METADATA_PARAMS(Z_Construct_UClass_AMuffin_Statics::NewProp_GroundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuffin_Statics::NewProp_GroundSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuffin_Statics::NewProp_AirSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/Muffin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuffin_Statics::NewProp_AirSpeed = { "AirSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuffin, AirSpeed), METADATA_PARAMS(Z_Construct_UClass_AMuffin_Statics::NewProp_AirSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuffin_Statics::NewProp_AirSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuffin_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "Muffin" },
		{ "Comment", "//??\xca\xberestart\n" },
		{ "ModuleRelativePath", "Public/Muffin.h" },
		{ "ToolTip", "??\xca\xberestart" },
	};
#endif
	void Z_Construct_UClass_AMuffin_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((AMuffin*)Obj)->bDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMuffin_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMuffin), &Z_Construct_UClass_AMuffin_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMuffin_Statics::NewProp_bDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuffin_Statics::NewProp_bDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuffin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuffin_Statics::NewProp_GroundSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuffin_Statics::NewProp_AirSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuffin_Statics::NewProp_bDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuffin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuffin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuffin_Statics::ClassParams = {
		&AMuffin::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMuffin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuffin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuffin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuffin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuffin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuffin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuffin, 3129093141);
	template<> FIRST2D_API UClass* StaticClass<AMuffin>()
	{
		return AMuffin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuffin(Z_Construct_UClass_AMuffin, &AMuffin::StaticClass, TEXT("/Script/First2D"), TEXT("AMuffin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuffin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
