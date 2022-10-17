// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedStrategyC/TurnBasedStrategyCGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedStrategyCGrid() {}
// Cross Module References
	TURNBASEDSTRATEGYC_API UClass* Z_Construct_UClass_ATurnBasedStrategyCGrid_NoRegister();
	TURNBASEDSTRATEGYC_API UClass* Z_Construct_UClass_ATurnBasedStrategyCGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TurnBasedStrategyC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void ATurnBasedStrategyCGrid::StaticRegisterNativesATurnBasedStrategyCGrid()
	{
	}
	UClass* Z_Construct_UClass_ATurnBasedStrategyCGrid_NoRegister()
	{
		return ATurnBasedStrategyCGrid::StaticClass();
	}
	struct Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numRows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numColumns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lineColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lineColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectionColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_selectionColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lineOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lineOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectionOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_selectionOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveRangeColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_moveRangeColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackRangeColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_attackRangeColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionProceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionProceduralMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRangeProceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRangeProceduralMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRangeProceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackRangeProceduralMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedStrategyC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TurnBasedStrategyCGrid.h" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numRows_MetaData[] = {
		{ "Category", "Constants" },
		{ "Comment", "//--Variables--\n//Constants\n" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
		{ "ToolTip", "--Variables--\nConstants" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numRows = { "numRows", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, numRows), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numRows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numColumns_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numColumns = { "numColumns", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, numColumns), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numColumns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_tileSize_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_tileSize = { "tileSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, tileSize), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_tileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_tileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineThickness_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineThickness = { "lineThickness", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, lineThickness), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineColour_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineColour = { "lineColour", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, lineColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionColour_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionColour = { "selectionColour", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, selectionColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineOpacity_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineOpacity = { "lineOpacity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, lineOpacity), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionOpacity_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionOpacity = { "selectionOpacity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, selectionOpacity), METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_moveRangeColour_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_moveRangeColour = { "moveRangeColour", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, moveRangeColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_moveRangeColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_moveRangeColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_attackRangeColour_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_attackRangeColour = { "attackRangeColour", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, attackRangeColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_attackRangeColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_attackRangeColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "TurnBasedStrategyCGrid" },
		{ "Comment", "//--Components--\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
		{ "ToolTip", "--Components--" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_ProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_ProceduralMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_SelectionProceduralMesh_MetaData[] = {
		{ "Category", "TurnBasedStrategyCGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_SelectionProceduralMesh = { "SelectionProceduralMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, SelectionProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_SelectionProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_SelectionProceduralMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_MoveRangeProceduralMesh_MetaData[] = {
		{ "Category", "TurnBasedStrategyCGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_MoveRangeProceduralMesh = { "MoveRangeProceduralMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, MoveRangeProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_MoveRangeProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_MoveRangeProceduralMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_AttackRangeProceduralMesh_MetaData[] = {
		{ "Category", "TurnBasedStrategyCGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TurnBasedStrategyCGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_AttackRangeProceduralMesh = { "AttackRangeProceduralMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnBasedStrategyCGrid, AttackRangeProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_AttackRangeProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_AttackRangeProceduralMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_numColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_tileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_lineOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_selectionOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_moveRangeColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_attackRangeColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_ProceduralMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_SelectionProceduralMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_MoveRangeProceduralMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::NewProp_AttackRangeProceduralMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnBasedStrategyCGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::ClassParams = {
		&ATurnBasedStrategyCGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurnBasedStrategyCGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurnBasedStrategyCGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurnBasedStrategyCGrid, 970675402);
	template<> TURNBASEDSTRATEGYC_API UClass* StaticClass<ATurnBasedStrategyCGrid>()
	{
		return ATurnBasedStrategyCGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurnBasedStrategyCGrid(Z_Construct_UClass_ATurnBasedStrategyCGrid, &ATurnBasedStrategyCGrid::StaticClass, TEXT("/Script/TurnBasedStrategyC"), TEXT("ATurnBasedStrategyCGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnBasedStrategyCGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
