// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BH_BlackHole_generated_h
#error "BlackHole.generated.h already included, missing '#pragma once' in BlackHole.h"
#endif
#define BH_BlackHole_generated_h

#define BH_Source_BH_BlackHole_h_15_SPARSE_DATA
#define BH_Source_BH_BlackHole_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define BH_Source_BH_BlackHole_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define BH_Source_BH_BlackHole_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define BH_Source_BH_BlackHole_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend struct Z_Construct_UClass_ABlackHole_Statics; \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BH"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole)


#define BH_Source_BH_BlackHole_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public:


#define BH_Source_BH_BlackHole_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackHole)


#define BH_Source_BH_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABlackHole, MeshComp); } \
	FORCEINLINE static uint32 __PPO__InnerSphereComp() { return STRUCT_OFFSET(ABlackHole, InnerSphereComp); } \
	FORCEINLINE static uint32 __PPO__OuterSphereComp() { return STRUCT_OFFSET(ABlackHole, OuterSphereComp); }


#define BH_Source_BH_BlackHole_h_12_PROLOG
#define BH_Source_BH_BlackHole_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BlackHole_h_15_SPARSE_DATA \
	BH_Source_BH_BlackHole_h_15_RPC_WRAPPERS \
	BH_Source_BH_BlackHole_h_15_INCLASS \
	BH_Source_BH_BlackHole_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BH_Source_BH_BlackHole_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BH_Source_BH_BlackHole_h_15_PRIVATE_PROPERTY_OFFSET \
	BH_Source_BH_BlackHole_h_15_SPARSE_DATA \
	BH_Source_BH_BlackHole_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BH_Source_BH_BlackHole_h_15_INCLASS_NO_PURE_DECLS \
	BH_Source_BH_BlackHole_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BH_API UClass* StaticClass<class ABlackHole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BH_Source_BH_BlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
