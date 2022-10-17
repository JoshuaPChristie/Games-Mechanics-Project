// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedStrategyC/TurnBasedStrategyCPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedStrategyCPlayerController() {}
// Cross Module References
	TURNBASEDSTRATEGYC_API UClass* Z_Construct_UClass_ATurnBasedStrategyCPlayerController_NoRegister();
	TURNBASEDSTRATEGYC_API UClass* Z_Construct_UClass_ATurnBasedStrategyCPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TurnBasedStrategyC();
// End Cross Module References
	void ATurnBasedStrategyCPlayerController::StaticRegisterNativesATurnBasedStrategyCPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATurnBasedStrategyCPlayerController_NoRegister()
	{
		return ATurnBasedStrategyCPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedStrategyC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TurnBasedStrategyCPlayerController.h" },
		{ "ModuleRelativePath", "TurnBasedStrategyCPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedStrategyCPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics::ClassParams = {
		&ATurnBasedStrategyCPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurnBasedStrategyCPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurnBasedStrategyCPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurnBasedStrategyCPlayerController, 284679908);
	template<> TURNBASEDSTRATEGYC_API UClass* StaticClass<ATurnBasedStrategyCPlayerController>()
	{
		return ATurnBasedStrategyCPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurnBasedStrategyCPlayerController(Z_Construct_UClass_ATurnBasedStrategyCPlayerController, &ATurnBasedStrategyCPlayerController::StaticClass, TEXT("/Script/TurnBasedStrategyC"), TEXT("ATurnBasedStrategyCPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnBasedStrategyCPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
