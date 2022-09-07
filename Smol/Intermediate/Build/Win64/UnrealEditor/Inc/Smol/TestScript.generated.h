// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMOL_TestScript_generated_h
#error "TestScript.generated.h already included, missing '#pragma once' in TestScript.h"
#endif
#define SMOL_TestScript_generated_h

#define FID_Smol_Source_Smol_Public_TestScript_h_12_SPARSE_DATA
#define FID_Smol_Source_Smol_Public_TestScript_h_12_RPC_WRAPPERS
#define FID_Smol_Source_Smol_Public_TestScript_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Smol_Source_Smol_Public_TestScript_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestScript(); \
	friend struct Z_Construct_UClass_ATestScript_Statics; \
public: \
	DECLARE_CLASS(ATestScript, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smol"), NO_API) \
	DECLARE_SERIALIZER(ATestScript)


#define FID_Smol_Source_Smol_Public_TestScript_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestScript(); \
	friend struct Z_Construct_UClass_ATestScript_Statics; \
public: \
	DECLARE_CLASS(ATestScript, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smol"), NO_API) \
	DECLARE_SERIALIZER(ATestScript)


#define FID_Smol_Source_Smol_Public_TestScript_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestScript(ATestScript&&); \
	NO_API ATestScript(const ATestScript&); \
public:


#define FID_Smol_Source_Smol_Public_TestScript_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestScript(ATestScript&&); \
	NO_API ATestScript(const ATestScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestScript)


#define FID_Smol_Source_Smol_Public_TestScript_h_9_PROLOG
#define FID_Smol_Source_Smol_Public_TestScript_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Smol_Source_Smol_Public_TestScript_h_12_SPARSE_DATA \
	FID_Smol_Source_Smol_Public_TestScript_h_12_RPC_WRAPPERS \
	FID_Smol_Source_Smol_Public_TestScript_h_12_INCLASS \
	FID_Smol_Source_Smol_Public_TestScript_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Smol_Source_Smol_Public_TestScript_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Smol_Source_Smol_Public_TestScript_h_12_SPARSE_DATA \
	FID_Smol_Source_Smol_Public_TestScript_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Smol_Source_Smol_Public_TestScript_h_12_INCLASS_NO_PURE_DECLS \
	FID_Smol_Source_Smol_Public_TestScript_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMOL_API UClass* StaticClass<class ATestScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Smol_Source_Smol_Public_TestScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
