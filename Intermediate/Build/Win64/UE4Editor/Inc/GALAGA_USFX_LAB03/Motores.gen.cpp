// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/Motores.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotores() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AMotores_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AMotores();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMotores::StaticRegisterNativesAMotores()
	{
	}
	UClass* Z_Construct_UClass_AMotores_NoRegister()
	{
		return AMotores::StaticClass();
	}
	struct Z_Construct_UClass_AMotores_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaMotorNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaMotorNave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotores_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotores_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Motores.h" },
		{ "ModuleRelativePath", "Motores.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotores_Statics::NewProp_MallaMotorNave_MetaData[] = {
		{ "Category", "MotorNave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Motores.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotores_Statics::NewProp_MallaMotorNave = { "MallaMotorNave", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotores, MallaMotorNave), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotores_Statics::NewProp_MallaMotorNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotores_Statics::NewProp_MallaMotorNave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotores_Statics::NewProp_MallaMotorNave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotores_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotores>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotores_Statics::ClassParams = {
		&AMotores::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMotores_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotores_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotores_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotores_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotores()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotores_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotores, 1356675097);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<AMotores>()
	{
		return AMotores::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotores(Z_Construct_UClass_AMotores, &AMotores::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("AMotores"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotores);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
