// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/MovimientoNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoNodriza() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UMovimientoNodriza_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UMovimientoNodriza();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
// End Cross Module References
	void UMovimientoNodriza::StaticRegisterNativesUMovimientoNodriza()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoNodriza_NoRegister()
	{
		return UMovimientoNodriza::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoNodriza_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovimientoNodriza.h" },
		{ "ModuleRelativePath", "MovimientoNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoNodriza_Statics::ClassParams = {
		&UMovimientoNodriza::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoNodriza, 1477188030);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<UMovimientoNodriza>()
	{
		return UMovimientoNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoNodriza(Z_Construct_UClass_UMovimientoNodriza, &UMovimientoNodriza::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("UMovimientoNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
