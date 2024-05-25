// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/INaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINaveNodriza() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UINaveNodriza_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UINaveNodriza();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
// End Cross Module References
	void UINaveNodriza::StaticRegisterNativesUINaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_UINaveNodriza_NoRegister()
	{
		return UINaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_UINaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UINaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UINaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "INaveNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UINaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IINaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UINaveNodriza_Statics::ClassParams = {
		&UINaveNodriza::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UINaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UINaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UINaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UINaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UINaveNodriza, 2366927096);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<UINaveNodriza>()
	{
		return UINaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UINaveNodriza(Z_Construct_UClass_UINaveNodriza, &UINaveNodriza::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("UINaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UINaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
