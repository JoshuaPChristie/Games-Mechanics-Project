// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Math/Color.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "UObject/ConstructorHelpers.h"
#include "TurnBasedStrategyCCharacter.h"
#include "TurnBasedStrategyCGrid.generated.h"

UCLASS()
class TURNBASEDSTRATEGYC_API ATurnBasedStrategyCGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurnBasedStrategyCGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//--Functions--
	//Private
	void CreateLine(FVector start, FVector end, float thickness, TArray<FVector>& vertices, TArray<int>& triangles);

	const float GridWidth();
	const float GridHeight();

	UMaterialInstanceDynamic* CreateMaterialInstance(FLinearColor colour, float opacity);

	void CalculateMoveRange(int range, int originX, int originY);
	void CalculateAttackRange(int range, int originX, int originY);

	//--Variables--
	//Constants
	UPROPERTY(EditAnywhere, Category = "Constants")
		int numRows;
	UPROPERTY(EditAnywhere, Category = "Constants")
		int numColumns;
	UPROPERTY(EditAnywhere, Category = "Constants")
		float tileSize;
	UPROPERTY(EditAnywhere, Category = "Constants")
		float lineThickness;

	UPROPERTY(EditAnywhere, Category = "Constants")
		FLinearColor lineColour;
	UPROPERTY(EditAnywhere, Category = "Constants")
		FLinearColor selectionColour;
	UPROPERTY(EditAnywhere, Category = "Constants")
		float lineOpacity;
	UPROPERTY(EditAnywhere, Category = "Constants")
		float selectionOpacity;
	UPROPERTY(EditAnywhere, Category = "Constants")
		FLinearColor moveRangeColour;
	UPROPERTY(EditAnywhere, Category = "Constants")
		FLinearColor attackRangeColour;

	//Other
	TMap<FIntVector, ATurnBasedStrategyCCharacter*> Occupants;

	FVector playerLocation = FVector(0, 0, 0);

	TArray<FVector> moveRangeVertices;
	TArray<int> moveRangeTriangles;
	TArray<FIntVector> moveRangeTiles;
	//UMaterialInstanceDynamic* moveRangeMaterialInstance;

	TArray<FVector> attackRangeVertices;
	TArray<int> attackRangeTriangles;
	TArray<FIntVector> attackRangeTiles;

	TArray<FVector> attackTargetVertices;
	TArray<int> attackTargetTriangles;
	TArray<FIntVector> attackTargetTiles;

	//--Components--
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* ProceduralMesh;
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* SelectionProceduralMesh;
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* MoveRangeProceduralMesh;
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* AttackRangeProceduralMesh;

public:	

	//Called when actor is constructed
	virtual void OnConstruction(const FTransform& Transform) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//--Functions--
	//Public
	struct returnTile
	{
		int row;
		int column;
		bool valid;
	};
	returnTile LocationToTile(FVector location);

	struct returnLocation
	{
		FVector2D location;
		bool valid;
	};
	returnLocation TileToGridLocation(int row, int column, bool center);

	void SetSelectedTile(int row, int column);

	bool TileValid(int row, int column);

	void SetTileOccupant(int row, int column, ATurnBasedStrategyCCharacter* newOccupant);

	struct returnOccupant
	{
		ATurnBasedStrategyCCharacter* occupant;
		bool occupied;
	};
	returnOccupant getTileOccupant(int row, int column);

	void ClearMoveRange();
	TArray<FIntVector> GetMoveRangeTiles();

	void ClearAttackRange();
	TArray<FIntVector> GetAttackTargets();

	//--Components--
	

	//--Variables--
	

};
