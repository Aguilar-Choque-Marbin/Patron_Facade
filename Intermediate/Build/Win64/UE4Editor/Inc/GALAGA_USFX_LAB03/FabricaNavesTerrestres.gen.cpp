// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/FabricaNavesTerrestres.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaNavesTerrestres() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AFabricaNavesTerrestres_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AFabricaNavesTerrestres();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AFabricaNaves();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
// End Cross Module References
	void AFabricaNavesTerrestres::StaticRegisterNativesAFabricaNavesTerrestres()
	{
	}
	UClass* Z_Construct_UClass_AFabricaNavesTerrestres_NoRegister()
	{
		return AFabricaNavesTerrestres::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaNavesTerrestres_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaNavesTerrestres_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaNavesTerrestres_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaNavesTerrestres.h" },
		{ "ModuleRelativePath", "FabricaNavesTerrestres.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaNavesTerrestres_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaNavesTerrestres>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaNavesTerrestres_Statics::ClassParams = {
		&AFabricaNavesTerrestres::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaNavesTerrestres_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaNavesTerrestres_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaNavesTerrestres()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaNavesTerrestres_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaNavesTerrestres, 2379887172);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<AFabricaNavesTerrestres>()
	{
		return AFabricaNavesTerrestres::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaNavesTerrestres(Z_Construct_UClass_AFabricaNavesTerrestres, &AFabricaNavesTerrestres::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("AFabricaNavesTerrestres"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaNavesTerrestres);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
