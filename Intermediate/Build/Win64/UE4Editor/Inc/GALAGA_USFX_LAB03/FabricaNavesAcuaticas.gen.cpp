// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/FabricaNavesAcuaticas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaNavesAcuaticas() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AFabricaNavesAcuaticas_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AFabricaNavesAcuaticas();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AFabricaNaves();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
// End Cross Module References
	void AFabricaNavesAcuaticas::StaticRegisterNativesAFabricaNavesAcuaticas()
	{
	}
	UClass* Z_Construct_UClass_AFabricaNavesAcuaticas_NoRegister()
	{
		return AFabricaNavesAcuaticas::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaNavesAcuaticas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaNavesAcuaticas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaNavesAcuaticas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaNavesAcuaticas.h" },
		{ "ModuleRelativePath", "FabricaNavesAcuaticas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaNavesAcuaticas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaNavesAcuaticas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaNavesAcuaticas_Statics::ClassParams = {
		&AFabricaNavesAcuaticas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaNavesAcuaticas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaNavesAcuaticas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaNavesAcuaticas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaNavesAcuaticas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaNavesAcuaticas, 1869954794);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<AFabricaNavesAcuaticas>()
	{
		return AFabricaNavesAcuaticas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaNavesAcuaticas(Z_Construct_UClass_AFabricaNavesAcuaticas, &AFabricaNavesAcuaticas::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("AFabricaNavesAcuaticas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaNavesAcuaticas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
