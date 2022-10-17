// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNBASEDSTRATEGYC_TurnBasedStrategyCCharacter_generated_h
#error "TurnBasedStrategyCCharacter.generated.h already included, missing '#pragma once' in TurnBasedStrategyCCharacter.h"
#endif
#define TURNBASEDSTRATEGYC_TurnBasedStrategyCCharacter_generated_h

#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_SPARSE_DATA
#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetAttackDamage); \
	DECLARE_FUNCTION(execsetCurrentHealth); \
	DECLARE_FUNCTION(execgetCurrentHealth); \
	DECLARE_FUNCTION(execsetHealthPercent); \
	DECLARE_FUNCTION(execgetHealthPercent); \
	DECLARE_FUNCTION(execgetMaxHealth);


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetAttackDamage); \
	DECLARE_FUNCTION(execsetCurrentHealth); \
	DECLARE_FUNCTION(execgetCurrentHealth); \
	DECLARE_FUNCTION(execsetHealthPercent); \
	DECLARE_FUNCTION(execgetHealthPercent); \
	DECLARE_FUNCTION(execgetMaxHealth);


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnBasedStrategyCCharacter(); \
	friend struct Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics; \
public: \
	DECLARE_CLASS(ATurnBasedStrategyCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnBasedStrategyC"), NO_API) \
	DECLARE_SERIALIZER(ATurnBasedStrategyCCharacter)


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATurnBasedStrategyCCharacter(); \
	friend struct Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics; \
public: \
	DECLARE_CLASS(ATurnBasedStrategyCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnBasedStrategyC"), NO_API) \
	DECLARE_SERIALIZER(ATurnBasedStrategyCCharacter)


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurnBasedStrategyCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurnBasedStrategyCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnBasedStrategyCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnBasedStrategyCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurnBasedStrategyCCharacter(ATurnBasedStrategyCCharacter&&); \
	NO_API ATurnBasedStrategyCCharacter(const ATurnBasedStrategyCCharacter&); \
public:


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurnBasedStrategyCCharacter(ATurnBasedStrategyCCharacter&&); \
	NO_API ATurnBasedStrategyCCharacter(const ATurnBasedStrategyCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnBasedStrategyCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnBasedStrategyCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnBasedStrategyCCharacter)


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, CursorToWorld); } \
	FORCEINLINE static uint32 __PPO__startX() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, startX); } \
	FORCEINLINE static uint32 __PPO__startY() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, startY); } \
	FORCEINLINE static uint32 __PPO__moveRange() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, moveRange); } \
	FORCEINLINE static uint32 __PPO__attackRange() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, attackRange); } \
	FORCEINLINE static uint32 __PPO__team() { return STRUCT_OFFSET(ATurnBasedStrategyCCharacter, team); }


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_9_PROLOG
#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_SPARSE_DATA \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_RPC_WRAPPERS \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_INCLASS \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_SPARSE_DATA \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDSTRATEGYC_API UClass* StaticClass<class ATurnBasedStrategyCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnBasedStrategyC_4_26_Source_TurnBasedStrategyC_TurnBasedStrategyCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
