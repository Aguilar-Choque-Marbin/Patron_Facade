// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LAB03/NaveEnemigaEspia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaEspia() {}
// Cross Module References
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ANaveEnemigaEspia_NoRegister();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	GALAGA_USFX_LAB03_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LAB03();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(ANaveEnemigaEspia::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ANaveEnemigaEspia::StaticRegisterNativesANaveEnemigaEspia()
	{
		UClass* Class = ANaveEnemigaEspia::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ANaveEnemigaEspia::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics
	{
		struct NaveEnemigaEspia_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaEspia_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaEspia_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaEspia_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaEspia_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaEspia_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveEnemigaEspia, nullptr, "OnHit", nullptr, nullptr, sizeof(NaveEnemigaEspia_eventOnHit_Parms), Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveEnemigaEspia_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveEnemigaEspia_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANaveEnemigaEspia_NoRegister()
	{
		return ANaveEnemigaEspia::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaEspia_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaEspia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LAB03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANaveEnemigaEspia_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANaveEnemigaEspia_OnHit, "OnHit" }, // 1378405864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaEspia.h" },
		{ "ModuleRelativePath", "NaveEnemigaEspia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaEspia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaEspia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaEspia_Statics::ClassParams = {
		&ANaveEnemigaEspia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaEspia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaEspia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaEspia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaEspia, 2030714926);
	template<> GALAGA_USFX_LAB03_API UClass* StaticClass<ANaveEnemigaEspia>()
	{
		return ANaveEnemigaEspia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaEspia(Z_Construct_UClass_ANaveEnemigaEspia, &ANaveEnemigaEspia::StaticClass, TEXT("/Script/GALAGA_USFX_LAB03"), TEXT("ANaveEnemigaEspia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaEspia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
