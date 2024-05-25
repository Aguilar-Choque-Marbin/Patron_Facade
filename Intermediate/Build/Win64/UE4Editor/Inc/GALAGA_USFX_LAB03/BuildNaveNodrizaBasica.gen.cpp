// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/BuildNaveNodrizaBasica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildNaveNodrizaBasica() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ABuildNaveNodrizaBasica_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ABuildNaveNodrizaBasica();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UIBuildNave_NoRegister();
// End Cross Module References
	void ABuildNaveNodrizaBasica::StaticRegisterNativesABuildNaveNodrizaBasica()
	{
	}
	UClass* Z_Construct_UClass_ABuildNaveNodrizaBasica_NoRegister()
	{
		return ABuildNaveNodrizaBasica::StaticClass();
	}
	struct Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildNaveNodrizaBasica.h" },
		{ "ModuleRelativePath", "BuildNaveNodrizaBasica.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuildNave_NoRegister, (int32)VTABLE_OFFSET(ABuildNaveNodrizaBasica, IIBuildNave), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildNaveNodrizaBasica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::ClassParams = {
		&ABuildNaveNodrizaBasica::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildNaveNodrizaBasica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildNaveNodrizaBasica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildNaveNodrizaBasica, 3097605038);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<ABuildNaveNodrizaBasica>()
	{
		return ABuildNaveNodrizaBasica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildNaveNodrizaBasica(Z_Construct_UClass_ABuildNaveNodrizaBasica, &ABuildNaveNodrizaBasica::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("ABuildNaveNodrizaBasica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildNaveNodrizaBasica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
