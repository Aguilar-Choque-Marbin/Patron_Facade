// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/NaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveNodriza() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ANaveNodriza_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ANaveNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UINaveNodriza_NoRegister();
// End Cross Module References
	void ANaveNodriza::StaticRegisterNativesANaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_ANaveNodriza_NoRegister()
	{
		return ANaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveNodriza.h" },
		{ "ModuleRelativePath", "NaveNodriza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UINaveNodriza_NoRegister, (int32)VTABLE_OFFSET(ANaveNodriza, IINaveNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveNodriza_Statics::ClassParams = {
		&ANaveNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveNodriza, 2158512558);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<ANaveNodriza>()
	{
		return ANaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveNodriza(Z_Construct_UClass_ANaveNodriza, &ANaveNodriza::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("ANaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif