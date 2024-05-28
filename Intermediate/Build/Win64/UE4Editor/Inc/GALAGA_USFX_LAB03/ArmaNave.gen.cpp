// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/ArmaNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaNave() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AArmaNave_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_AArmaNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArmaNave::StaticRegisterNativesAArmaNave()
	{
	}
	UClass* Z_Construct_UClass_AArmaNave_NoRegister()
	{
		return AArmaNave::StaticClass();
	}
	struct Z_Construct_UClass_AArmaNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaArmaNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaArmaNave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmaNave.h" },
		{ "ModuleRelativePath", "ArmaNave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaNave_Statics::NewProp_MallaArmaNave_MetaData[] = {
		{ "Category", "ArmaNave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmaNave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmaNave_Statics::NewProp_MallaArmaNave = { "MallaArmaNave", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaNave, MallaArmaNave), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmaNave_Statics::NewProp_MallaArmaNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNave_Statics::NewProp_MallaArmaNave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmaNave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaNave_Statics::NewProp_MallaArmaNave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaNave_Statics::ClassParams = {
		&AArmaNave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmaNave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNave_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmaNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaNave, 3265553597);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<AArmaNave>()
	{
		return AArmaNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaNave(Z_Construct_UClass_AArmaNave, &AArmaNave::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("AArmaNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
