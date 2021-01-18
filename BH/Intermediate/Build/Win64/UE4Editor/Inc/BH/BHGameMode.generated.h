// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BH_BHGameMode_generated_h
#error "BHGameMode.generated.h already included, missing '#pragma once' in BHGameMode.h"
#endif
#define BH_BHGameMode_generated_h

#define BH_Source_BH_BHGameMode_h_12_SPARSE_DATA
#define BH_Source_BH_BHGameMode_h_12_RPC_WRAPPERS
#define BH_Source_BH_BHGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BH_Source_BH_BHGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABHGameMode(); \
	friend struct Z_Construct_UClass_ABHGameMode_Statics; \
public: \
	DECLARE_CLASS(ABHGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), BH_API) \
	DECLARE_SERIALIZER(ABHGameMode)


#define BH_Source_BH_BHGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABHGameMode(); \
	friend struct Z_Construct_UClass_ABHGameMode_Statics; \
public: \
	DECLARE_CLASS(ABHGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), BH_API) \
	DECLARE_SERIALIZER(ABHGameMode)


#define BH_Source_BH_BHGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BH_API ABHGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABHGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BH_API, ABHGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABHGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BH_API ABHGameMode(ABHGameMode&&); \
	BH_API ABHGameMode(const ABHGameMode&); \
public:


#define BH_Source_BH_BHGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BH_API ABHGameMode(ABHGameMode&&); \
	BH_API ABHGameMode(const ABHGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BH_API, ABHGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABHGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABHGameMode)


#define BH_Source_BH_BHGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define BH_Source_BH_BHGameMode_h_9_PROLOG
#define BH_Source_BH_BHGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BHGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BHGameMode_h_12_SPARSE_DATA \
	BH_Source_BH_BHGameMode_h_12_RPC_WRAPPERS \
	BH_Source_BH_BHGameMode_h_12_INCLASS \
	BH_Source_BH_BHGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BH_Source_BH_BHGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BHGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BHGameMode_h_12_SPARSE_DATA \
	BH_Source_BH_BHGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BH_Source_BH_BHGameMode_h_12_INCLASS_NO_PURE_DECLS \
	BH_Source_BH_BHGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BH_API UClass* StaticClass<class ABHGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BH_Source_BH_BHGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
