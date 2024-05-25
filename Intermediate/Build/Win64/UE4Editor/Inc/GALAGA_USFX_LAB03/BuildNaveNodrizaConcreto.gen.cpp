// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/BuildNaveNodrizaConcreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildNaveNodrizaConcreto() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ABuildNaveNodrizaConcreto_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ABuildNaveNodrizaConcreto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UIBuildNave_NoRegister();
// End Cross Module References
	void ABuildNaveNodrizaConcreto::StaticRegisterNativesABuildNaveNodrizaConcreto()
	{
	}
	UClass* Z_Construct_UClass_ABuildNaveNodrizaConcreto_NoRegister()
	{
		return ABuildNaveNodrizaConcreto::StaticClass();
	}
	struct Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildNaveNodrizaConcreto.h" },
		{ "ModuleRelativePath", "BuildNaveNodrizaConcreto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuildNave_NoRegister, (int32)VTABLE_OFFSET(ABuildNaveNodrizaConcreto, IIBuildNave), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildNaveNodrizaConcreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::ClassParams = {
		&ABuildNaveNodrizaConcreto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildNaveNodrizaConcreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildNaveNodrizaConcreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildNaveNodrizaConcreto, 2095308384);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<ABuildNaveNodrizaConcreto>()
	{
		return ABuildNaveNodrizaConcreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildNaveNodrizaConcreto(Z_Construct_UClass_ABuildNaveNodrizaConcreto, &ABuildNaveNodrizaConcreto::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("ABuildNaveNodrizaConcreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildNaveNodrizaConcreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
