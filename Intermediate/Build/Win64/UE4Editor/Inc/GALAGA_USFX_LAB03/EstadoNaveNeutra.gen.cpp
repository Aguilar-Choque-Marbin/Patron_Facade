// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/EstadoNaveNeutra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNaveNeutra() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AEstadoNaveNeutra_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AEstadoNaveNeutra();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
// End Cross Module References
	void AEstadoNaveNeutra::StaticRegisterNativesAEstadoNaveNeutra()
	{
	}
	UClass* Z_Construct_UClass_AEstadoNaveNeutra_NoRegister()
	{
		return AEstadoNaveNeutra::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoNaveNeutra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoNaveNeutra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoNaveNeutra_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoNaveNeutra.h" },
		{ "ModuleRelativePath", "EstadoNaveNeutra.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoNaveNeutra_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoNaveNeutra, IIEstados), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoNaveNeutra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoNaveNeutra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoNaveNeutra_Statics::ClassParams = {
		&AEstadoNaveNeutra::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoNaveNeutra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoNaveNeutra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoNaveNeutra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoNaveNeutra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoNaveNeutra, 1190277997);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<AEstadoNaveNeutra>()
	{
		return AEstadoNaveNeutra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoNaveNeutra(Z_Construct_UClass_AEstadoNaveNeutra, &AEstadoNaveNeutra::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("AEstadoNaveNeutra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoNaveNeutra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
