// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/EstadoNaveDefensa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNaveDefensa() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AEstadoNaveDefensa_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AEstadoNaveDefensa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
// End Cross Module References
	void AEstadoNaveDefensa::StaticRegisterNativesAEstadoNaveDefensa()
	{
	}
	UClass* Z_Construct_UClass_AEstadoNaveDefensa_NoRegister()
	{
		return AEstadoNaveDefensa::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoNaveDefensa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoNaveDefensa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoNaveDefensa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoNaveDefensa.h" },
		{ "ModuleRelativePath", "EstadoNaveDefensa.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoNaveDefensa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoNaveDefensa, IIEstados), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoNaveDefensa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoNaveDefensa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoNaveDefensa_Statics::ClassParams = {
		&AEstadoNaveDefensa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoNaveDefensa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoNaveDefensa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoNaveDefensa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoNaveDefensa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoNaveDefensa, 1917030019);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<AEstadoNaveDefensa>()
	{
		return AEstadoNaveDefensa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoNaveDefensa(Z_Construct_UClass_AEstadoNaveDefensa, &AEstadoNaveDefensa::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("AEstadoNaveDefensa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoNaveDefensa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
