// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BH_BHHUD_generated_h
#error "BHHUD.generated.h already included, missing '#pragma once' in BHHUD.h"
#endif
#define BH_BHHUD_generated_h

#define BH_Source_BH_BHHUD_h_12_SPARSE_DATA
#define BH_Source_BH_BHHUD_h_12_RPC_WRAPPERS
#define BH_Source_BH_BHHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BH_Source_BH_BHHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABHHUD(); \
	friend struct Z_Construct_UClass_ABHHUD_Statics; \
public: \
	DECLARE_CLASS(ABHHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), NO_API) \
	DECLARE_SERIALIZER(ABHHUD)


#define BH_Source_BH_BHHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABHHUD(); \
	friend struct Z_Construct_UClass_ABHHUD_Statics; \
public: \
	DECLARE_CLASS(ABHHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), NO_API) \
	DECLARE_SERIALIZER(ABHHUD)


#define BH_Source_BH_BHHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABHHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABHHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABHHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABHHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABHHUD(ABHHUD&&); \
	NO_API ABHHUD(const ABHHUD&); \
public:


#define BH_Source_BH_BHHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABHHUD(ABHHUD&&); \
	NO_API ABHHUD(const ABHHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABHHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABHHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABHHUD)


#define BH_Source_BH_BHHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define BH_Source_BH_BHHUD_h_9_PROLOG
#define BH_Source_BH_BHHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BHHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BHHUD_h_12_SPARSE_DATA \
	BH_Source_BH_BHHUD_h_12_RPC_WRAPPERS \
	BH_Source_BH_BHHUD_h_12_INCLASS \
	BH_Source_BH_BHHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BH_Source_BH_BHHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BHHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BHHUD_h_12_SPARSE_DATA \
	BH_Source_BH_BHHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BH_Source_BH_BHHUD_h_12_INCLASS_NO_PURE_DECLS \
	BH_Source_BH_BHHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BH_API UClass* StaticClass<class ABHHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BH_Source_BH_BHHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
