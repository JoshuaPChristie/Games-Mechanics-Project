// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedStrategyC/TurnBasedStrategyCCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedStrategyCCharacter() {}
// Cross Module References
	TURNBASEDSTRATEGYC_API UClass* Z_Construct_UClass_ATurnBasedStrategyCCharacter_NoRegister();
	TURNBASEDSTRATEGYC_API UClass* Z_Construct_UClass_ATurnBasedStrategyCCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TurnBasedStrategyC();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATurnBasedStrategyCCharacter::execgetAttackDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getAttackDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurnBasedStrategyCCharacter::execsetCurrentHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setCurrentHealth(Z_Param_newHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurnBasedStrategyCCharacter::execgetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurnBasedStrategyCCharacter::execsetHealthPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setHealthPercent(Z_Param_newPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurnBasedStrategyCCharacter::execgetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATurnBasedStrategyCCharacter::execgetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getMaxHealth();
		P_NATIVE_END;
	}
	void ATurnBasedStrategyCCharacter::StaticRegisterNativesATurnBasedStrategyCCharacter()
	{
		UClass* Class = ATurnBasedStrategyCCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getAttackDamage", &ATurnBasedStrategyCCharacter::execgetAttackDamage },
			{ "getCurrentHealth", &ATurnBasedStrategyCCharacter::execgetCurrentHealth },
			{ "getHealthPercent", &ATurnBasedStrategyCCharacter::execgetHealthPercent },
			{ "getMaxHealth", &ATurnBasedStrategyCCharacter::execgetMaxHealth },
			{ "setCurrentHealth", &ATurnBasedStrategyCCharacter::execsetCurrentHealth },
			{ "setHealthPercent", &ATurnBasedStrategyCCharacter::execsetHealthPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics
	{
		struct TurnBasedStrategyCCharacter_eventgetAttackDamage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedStrategyCCharacter_eventgetAttackDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnBasedStrategyCCharacter, nullptr, "getAttackDamage", nullptr, nullptr, sizeof(TurnBasedStrategyCCharacter_eventgetAttackDamage_Parms), Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics
	{
		struct TurnBasedStrategyCCharacter_eventgetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedStrategyCCharacter_eventgetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnBasedStrategyCCharacter, nullptr, "getCurrentHealth", nullptr, nullptr, sizeof(TurnBasedStrategyCCharacter_eventgetCurrentHealth_Parms), Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics
	{
		struct TurnBasedStrategyCCharacter_eventgetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedStrategyCCharacter_eventgetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnBasedStrategyCCharacter, nullptr, "getHealthPercent", nullptr, nullptr, sizeof(TurnBasedStrategyCCharacter_eventgetHealthPercent_Parms), Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics
	{
		struct TurnBasedStrategyCCharacter_eventgetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedStrategyCCharacter_eventgetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnBasedStrategyCCharacter, nullptr, "getMaxHealth", nullptr, nullptr, sizeof(TurnBasedStrategyCCharacter_eventgetMaxHealth_Parms), Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics
	{
		struct TurnBasedStrategyCCharacter_eventsetCurrentHealth_Parms
		{
			float newHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::NewProp_newHealth = { "newHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedStrategyCCharacter_eventsetCurrentHealth_Parms, newHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::NewProp_newHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnBasedStrategyCCharacter, nullptr, "setCurrentHealth", nullptr, nullptr, sizeof(TurnBasedStrategyCCharacter_eventsetCurrentHealth_Parms), Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics
	{
		struct TurnBasedStrategyCCharacter_eventsetHealthPercent_Parms
		{
			float newPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::NewProp_newPercent = { "newPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurnBasedStrategyCCharacter_eventsetHealthPercent_Parms, newPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::NewProp_newPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnBasedStrategyCCharacter, nullptr, "setHealthPercent", nullptr, nullptr, sizeof(TurnBasedStrategyCCharacter_eventsetHealthPercent_Parms), Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATurnBasedStrategyCCharacter_NoRegister()
	{
		return ATurnBasedStrategyCCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_startX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_startY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_moveRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_attackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_team_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedStrategyC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getAttackDamage, "getAttackDamage" }, // 2404163773
		{ &Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getCurrentHealth, "getCurrentHealth" }, // 4189156259
		{ &Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getHealthPercent, "getHealthPercent" }, // 1215029888
		{ &Z_Construct_UFunction_ATurnBasedStrategyCCharacter_getMaxHealth, "getMaxHealth" }, // 2224122564
		{ &Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setCurrentHealth, "setCurrentHealth" }, // 2837153490
		{ &Z_Construct_UFunction_ATurnBasedStrategyCCharacter_setHealthPercent, "setHealthPercent" }, // 2469917956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TurnBasedStrategyCCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Constants" },
		{ "Comment", "//--Variables--\n" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
		{ "ToolTip", "--Variables--" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "Category", "TurnBasedStrategyCCharacter" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, HealthPercent), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_HealthPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_HealthPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "TurnBasedStrategyCCharacter" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, AttackDamage), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_AttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_AttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** A decal that projects to the cursor location. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
		{ "ToolTip", "A decal that projects to the cursor location." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CursorToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startX_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startX = { "startX", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, startX), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startY_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startY = { "startY", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, startY), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_moveRange_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_moveRange = { "moveRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, moveRange), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_moveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_moveRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_attackRange_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_attackRange = { "attackRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, attackRange), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_attackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_attackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_team_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_team = { "team", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCCharacter, team), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_team_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_HealthPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_AttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_CursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_startY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_moveRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_attackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::NewProp_team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedStrategyCCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::ClassParams = {
		&ATurnBasedStrategyCCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurnBasedStrategyCCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurnBasedStrategyCCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurnBasedStrategyCCharacter, 1222420764);
	template<> TURNBASEDSTRATEGYC_API UClass* StaticClass<ATurnBasedStrategyCCharacter>()
	{
		return ATurnBasedStrategyCCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurnBasedStrategyCCharacter(Z_Construct_UClass_ATurnBasedStrategyCCharacter, &ATurnBasedStrategyCCharacter::StaticClass, TEXT("/Script/TurnBasedStrategyC"), TEXT("ATurnBasedStrategyCCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnBasedStrategyCCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
