// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/Subscriptor2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriptor2() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ASubscriptor2_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ASubscriptor2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
// End Cross Module References
	void ASubscriptor2::StaticRegisterNativesASubscriptor2()
	{
	}
	UClass* Z_Construct_UClass_ASubscriptor2_NoRegister()
	{
		return ASubscriptor2::StaticClass();
	}
	struct Z_Construct_UClass_ASubscriptor2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubscriptor2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubscriptor2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subscriptor2.h" },
		{ "ModuleRelativePath", "Subscriptor2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubscriptor2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubscriptor2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASubscriptor2_Statics::ClassParams = {
		&ASubscriptor2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASubscriptor2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASubscriptor2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASubscriptor2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASubscriptor2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASubscriptor2, 805868735);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<ASubscriptor2>()
	{
		return ASubscriptor2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubscriptor2(Z_Construct_UClass_ASubscriptor2, &ASubscriptor2::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("ASubscriptor2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubscriptor2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
