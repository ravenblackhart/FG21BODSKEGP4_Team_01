// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smol/Public/TestScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestScript() {}
// Cross Module References
	SMOL_API UClass* Z_Construct_UClass_ATestScript_NoRegister();
	SMOL_API UClass* Z_Construct_UClass_ATestScript();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Smol();
// End Cross Module References
	void ATestScript::StaticRegisterNativesATestScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestScript);
	UClass* Z_Construct_UClass_ATestScript_NoRegister()
	{
		return ATestScript::StaticClass();
	}
	struct Z_Construct_UClass_ATestScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Smol,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestScript.h" },
		{ "ModuleRelativePath", "Public/TestScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestScript_Statics::ClassParams = {
		&ATestScript::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestScript()
	{
		if (!Z_Registration_Info_UClass_ATestScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestScript.OuterSingleton, Z_Construct_UClass_ATestScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestScript.OuterSingleton;
	}
	template<> SMOL_API UClass* StaticClass<ATestScript>()
	{
		return ATestScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestScript);
	struct Z_CompiledInDeferFile_FID_Smol_Source_Smol_Public_TestScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Smol_Source_Smol_Public_TestScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestScript, ATestScript::StaticClass, TEXT("ATestScript"), &Z_Registration_Info_UClass_ATestScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestScript), 57609400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Smol_Source_Smol_Public_TestScript_h_491124597(TEXT("/Script/Smol"),
		Z_CompiledInDeferFile_FID_Smol_Source_Smol_Public_TestScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Smol_Source_Smol_Public_TestScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
