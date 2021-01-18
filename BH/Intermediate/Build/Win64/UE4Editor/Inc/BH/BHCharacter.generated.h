// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BH_BHCharacter_generated_h
#error "BHCharacter.generated.h already included, missing '#pragma once' in BHCharacter.h"
#endif
#define BH_BHCharacter_generated_h

#define BH_Source_BH_BHCharacter_h_14_SPARSE_DATA
#define BH_Source_BH_BHCharacter_h_14_RPC_WRAPPERS
#define BH_Source_BH_BHCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BH_Source_BH_BHCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABHCharacter(); \
	friend struct Z_Construct_UClass_ABHCharacter_Statics; \
public: \
	DECLARE_CLASS(ABHCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), NO_API) \
	DECLARE_SERIALIZER(ABHCharacter)


#define BH_Source_BH_BHCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABHCharacter(); \
	friend struct Z_Construct_UClass_ABHCharacter_Statics; \
public: \
	DECLARE_CLASS(ABHCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), NO_API) \
	DECLARE_SERIALIZER(ABHCharacter)


#define BH_Source_BH_BHCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABHCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABHCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABHCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABHCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABHCharacter(ABHCharacter&&); \
	NO_API ABHCharacter(const ABHCharacter&); \
public:


#define BH_Source_BH_BHCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABHCharacter(ABHCharacter&&); \
	NO_API ABHCharacter(const ABHCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABHCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABHCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABHCharacter)


#define BH_Source_BH_BHCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ABHCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ABHCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ABHCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ABHCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ABHCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ABHCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ABHCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ABHCharacter, L_MotionController); }


#define BH_Source_BH_BHCharacter_h_11_PROLOG
#define BH_Source_BH_BHCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BHCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BHCharacter_h_14_SPARSE_DATA \
	BH_Source_BH_BHCharacter_h_14_RPC_WRAPPERS \
	BH_Source_BH_BHCharacter_h_14_INCLASS \
	BH_Source_BH_BHCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BH_Source_BH_BHCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BHCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BHCharacter_h_14_SPARSE_DATA \
	BH_Source_BH_BHCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BH_Source_BH_BHCharacter_h_14_INCLASS_NO_PURE_DECLS \
	BH_Source_BH_BHCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BH_API UClass* StaticClass<class ABHCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BH_Source_BH_BHCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
