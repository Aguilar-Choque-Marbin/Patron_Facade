// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/ITransformar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITransformar() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UITransformar_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_UITransformar();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
// End Cross Module References
	void UITransformar::StaticRegisterNativesUITransformar()
	{
	}
	UClass* Z_Construct_UClass_UITransformar_NoRegister()
	{
		return UITransformar::StaticClass();
	}
	struct Z_Construct_UClass_UITransformar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UITransformar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITransformar_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ITransformar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UITransformar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IITransformar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UITransformar_Statics::ClassParams = {
		&UITransformar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UITransformar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UITransformar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UITransformar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UITransformar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UITransformar, 251814657);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<UITransformar>()
	{
		return UITransformar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UITransformar(Z_Construct_UClass_UITransformar, &UITransformar::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("UITransformar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UITransformar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
