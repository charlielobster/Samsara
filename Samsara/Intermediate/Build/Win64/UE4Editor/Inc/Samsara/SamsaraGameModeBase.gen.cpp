// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara/SamsaraGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamsaraGameModeBase() {}
// Cross Module References
	SAMSARA_API UClass* Z_Construct_UClass_ASamsaraGameModeBase_NoRegister();
	SAMSARA_API UClass* Z_Construct_UClass_ASamsaraGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Samsara();
// End Cross Module References
	void ASamsaraGameModeBase::StaticRegisterNativesASamsaraGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASamsaraGameModeBase_NoRegister()
	{
		return ASamsaraGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASamsaraGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASamsaraGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Samsara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASamsaraGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SamsaraGameModeBase.h" },
		{ "ModuleRelativePath", "SamsaraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASamsaraGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamsaraGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASamsaraGameModeBase_Statics::ClassParams = {
		&ASamsaraGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASamsaraGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASamsaraGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASamsaraGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASamsaraGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASamsaraGameModeBase, 2164103072);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASamsaraGameModeBase(Z_Construct_UClass_ASamsaraGameModeBase, &ASamsaraGameModeBase::StaticClass, TEXT("/Script/Samsara"), TEXT("ASamsaraGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASamsaraGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
