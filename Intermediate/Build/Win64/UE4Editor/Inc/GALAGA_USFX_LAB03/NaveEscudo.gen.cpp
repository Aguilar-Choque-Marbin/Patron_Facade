// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/NaveEscudo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEscudo() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ANaveEscudo_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ANaveEscudo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEscudo::StaticRegisterNativesANaveEscudo()
	{
	}
	UClass* Z_Construct_UClass_ANaveEscudo_NoRegister()
	{
		return ANaveEscudo::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaEscudo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaEscudo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEscudo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEscudo.h" },
		{ "ModuleRelativePath", "NaveEscudo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEscudo_Statics::NewProp_MallaEscudo_MetaData[] = {
		{ "Category", "MotorNave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEscudo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEscudo_Statics::NewProp_MallaEscudo = { "MallaEscudo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEscudo, MallaEscudo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEscudo_Statics::NewProp_MallaEscudo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEscudo_Statics::NewProp_MallaEscudo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEscudo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEscudo_Statics::NewProp_MallaEscudo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEscudo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEscudo_Statics::ClassParams = {
		&ANaveEscudo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEscudo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEscudo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEscudo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEscudo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEscudo, 4163406935);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<ANaveEscudo>()
	{
		return ANaveEscudo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEscudo(Z_Construct_UClass_ANaveEscudo, &ANaveEscudo::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("ANaveEscudo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEscudo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
