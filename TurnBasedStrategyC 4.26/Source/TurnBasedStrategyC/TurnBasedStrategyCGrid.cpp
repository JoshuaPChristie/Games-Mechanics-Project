// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedStrategyCGrid.h"
#include "TurnBasedStrategyCGameMode.h"
#include "Engine/Engine.h"
#include <utility> 

// Sets default values
ATurnBasedStrategyCGrid::ATurnBasedStrategyCGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Mesh"));
	ProceduralMesh->SetupAttachment(RootComponent);

	SelectionProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Selection Procedural Mesh"));
	SelectionProceduralMesh->SetupAttachment(RootComponent);

	MoveRangeProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Move Range Procedural Mesh"));
	MoveRangeProceduralMesh->SetupAttachment(RootComponent);

	AttackRangeProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Attack Range Procedural Mesh"));
	AttackRangeProceduralMesh->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void ATurnBasedStrategyCGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

//Called when actor is constructed
void ATurnBasedStrategyCGrid::OnConstruction(const FTransform& Transform)
{
	
	UMaterialInstanceDynamic* LineMaterialInstance = CreateMaterialInstance(lineColour, lineOpacity);
	UMaterialInstanceDynamic* SelectionMaterialInstance = CreateMaterialInstance(selectionColour, selectionOpacity);

	//moveRangeMaterialInstance = CreateMaterialInstance(moveRangeColour, selectionOpacity);
	
	TArray<FVector> vertices;
	TArray<int> triangles;

	//Create Horizontal Line Geometry
	for (int i = 0; i <= numRows; i++)
	{
		float lineStart = i * tileSize;
		float lineEnd = GridWidth();

		CreateLine(FVector(lineStart, 0, 0), FVector(lineStart, lineEnd, 0), lineThickness, vertices, triangles);
	}

	//Create Vertical Line Geometry
	for (int i = 0; i <= numColumns; i++)
	{
		float lineStart = i * tileSize;
		float lineEnd = GridHeight();

		CreateLine(FVector(0, lineStart, 0), FVector(lineEnd, lineStart, 0), lineThickness, vertices, triangles);
	}

	ProceduralMesh->CreateMeshSection_LinearColor(0, vertices, triangles,
		TArray<FVector>(), TArray<FVector2D>(), TArray<FLinearColor>(), TArray<FProcMeshTangent>(), false);
	ProceduralMesh->SetMaterial(0, LineMaterialInstance);

	//Create Selection Geometry
	TArray<FVector> selectionVertices;
	TArray<int> selectionTriangles;

	float halfTile = tileSize / 2;

	CreateLine(FVector(0, halfTile, 0), FVector(tileSize, halfTile, 0), tileSize, selectionVertices, selectionTriangles);

	SelectionProceduralMesh->CreateMeshSection_LinearColor(0, selectionVertices, selectionTriangles,
		TArray<FVector>(), TArray<FVector2D>(), TArray<FLinearColor>(), TArray<FProcMeshTangent>(), false);
	SelectionProceduralMesh->SetVisibility(false);
	SelectionProceduralMesh->SetMaterial(0, SelectionMaterialInstance);


	/*ATurnBasedStrategyCGameMode* GameMode = Cast<ATurnBasedStrategyCGameMode>(GetWorld()->GetAuthGameMode());
	ATurnBasedStrategyCPlayerController* Controller = Cast<ATurnBasedStrategyCPlayerController>(GameMode->GetController());
	ATurnBasedStrategyCCharacter* playerPawn = NULL;
	if (Controller)
	{
		ATurnBasedStrategyCCharacter* playerPawn = Cast<ATurnBasedStrategyCCharacter>(Controller->GetPawn());
	}

	if (playerPawn)
	playerLocation = playerPawn->GetActorLocation();*/
	

}

// Called every frame
void ATurnBasedStrategyCGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ATurnBasedStrategyCGameMode* GameMode = Cast<ATurnBasedStrategyCGameMode>(GetWorld()->GetAuthGameMode());
	ATurnBasedStrategyCPlayerController* Controller = GameMode->GetController();
	ATurnBasedStrategyCCharacter* playerPawn = NULL;
	if (Controller)
	{
		playerPawn = Cast<ATurnBasedStrategyCCharacter>(Controller->GetPawn());
	}

	if (playerPawn)
	{
			if (playerPawn->getIdle())
			{
				if ((playerPawn->GetActorLocation() - playerLocation).Size() > tileSize / 2)
				{
					playerLocation = playerPawn->GetActorLocation();

					returnTile playerTile = LocationToTile(playerLocation);
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Updated Player Location: %i, %i"), playerTile.row, playerTile.column));

					CalculateMoveRange(playerPawn->getMoveRange(), playerTile.row, playerTile.column);
					CalculateAttackRange(playerPawn->getAttackRange(), playerTile.row, playerTile.column);
				}
			}

			switch (playerPawn->getActionType())
			{
			case 1:
				MoveRangeProceduralMesh->SetVisibility(true);
				AttackRangeProceduralMesh->SetVisibility(false);
				break;
			case 2:
				MoveRangeProceduralMesh->SetVisibility(false);
				AttackRangeProceduralMesh->SetVisibility(true);
				break;
			}
	}

}

void ATurnBasedStrategyCGrid::CreateLine(FVector start, FVector end, float thickness, TArray<FVector>& vertices, TArray<int>& triangles)
{
	float halfThickness = thickness / 2;

	FVector length = end - start;
	length.GetSafeNormal(0.0001);
	length.Normalize(0.0001);

	FVector thicknessDirection = FVector::CrossProduct(length, FVector(0, 0, 1));

	TArray<int> newTriangles;
	//Triangle 1
	newTriangles.Emplace(vertices.Num() + 2);
	newTriangles.Emplace(vertices.Num() + 1);
	newTriangles.Emplace(vertices.Num() + 0);
	//Triangle 2
	newTriangles.Emplace(vertices.Num() + 2);
	newTriangles.Emplace(vertices.Num() + 3);
	newTriangles.Emplace(vertices.Num() + 1);

	triangles.Append(newTriangles);

	//Vertex 0
	vertices.Emplace(start + (thicknessDirection * halfThickness));
	//Vertex 1
	vertices.Emplace(end + (thicknessDirection * halfThickness));
	//Vertex 2
	vertices.Emplace(start - (thicknessDirection * halfThickness));
	//Vertex 3
	vertices.Emplace(end - (thicknessDirection * halfThickness));
}


const float ATurnBasedStrategyCGrid::GridWidth()
{
	return numRows * tileSize;
}

const float ATurnBasedStrategyCGrid::GridHeight()
{
	return numColumns * tileSize;
}

UMaterialInstanceDynamic* ATurnBasedStrategyCGrid::CreateMaterialInstance(FLinearColor colour, float opacity)
{
	/*static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Grid.M_Grid'"));

	UMaterial* myMaterial = NULL;
	if (Material.Succeeded())
	{
		myMaterial = (UMaterial*)Material.Object;
	}*/

	UMaterial* myMaterial = NULL;
	myMaterial = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Game/TopDownCPP/Blueprints/M_Grid.M_Grid'")));

	UMaterialInstanceDynamic* MaterialInstance = NULL;
	if (myMaterial)
	{
		MaterialInstance = UMaterialInstanceDynamic::Create(myMaterial, NULL);
	}
	
	MaterialInstance->SetVectorParameterValue("Colour", colour);
	MaterialInstance->SetScalarParameterValue("Opacity", opacity);

	return MaterialInstance;
}

ATurnBasedStrategyCGrid::returnTile ATurnBasedStrategyCGrid::LocationToTile(FVector location)
{
	int row = floor( ( (location.X - GetActorLocation().X) / GridWidth() ) * numRows );
	int column = floor( ( (location.Y - GetActorLocation().Y) / GridHeight() ) * numColumns );


	bool valid = TileValid(row, column);

	return { row, column, valid };
}

ATurnBasedStrategyCGrid::returnLocation ATurnBasedStrategyCGrid::TileToGridLocation(int row, int column, bool center)
{
	bool valid = TileValid(row, column);

	float gridX = (row * tileSize) + GetActorLocation().X;
	float gridY = (column * tileSize) + GetActorLocation().Y;

	if (center)
	{
		gridX += tileSize / 2;
		gridY += tileSize / 2;
	}

	FVector2D location = { gridX, gridY };

	return { location, valid };
}

void ATurnBasedStrategyCGrid::SetSelectedTile(int row, int column)
{
	returnLocation gridLocation = TileToGridLocation(row, column, false);

	if (gridLocation.valid)
	{
		SelectionProceduralMesh->SetVisibility(true);
		SelectionProceduralMesh->SetWorldLocation(FVector(gridLocation.location.X, gridLocation.location.Y, GetActorLocation().Z));
	}
	else
	{
		SelectionProceduralMesh->SetVisibility(false);
	}
}

bool ATurnBasedStrategyCGrid::TileValid(int row, int column)
{
	bool rowValid = false;
	bool columnValid = false;

	if (row < numRows && row >= 0)
	{
		rowValid = true;
	}
	if (column < numColumns && column >= 0)
	{
		columnValid = true;
	}

	if (rowValid && columnValid)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ATurnBasedStrategyCGrid::SetTileOccupant(int row, int column, ATurnBasedStrategyCCharacter* newOccupant)
{
	if (!Occupants.Contains(FIntVector(row, column, 0)))
	{
		FVector prevLocation = newOccupant->GetActorLocation();

		returnTile prevTile = LocationToTile(prevLocation);

		if (Occupants.Contains(FIntVector(prevTile.row, prevTile.column, 0)))
		{
			Occupants.Remove(FIntVector(prevTile.row, prevTile.column, 0));
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Tile Removed: %i, %i"), prevTile.row, prevTile.column));
		}
		Occupants.Add(FIntVector(row, column, 0), newOccupant);
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Tile Added: %i, %i"), row, column));

		returnLocation destination = TileToGridLocation(row, column, true);

		newOccupant->setDestination(FVector(destination.location.X, destination.location.Y, prevLocation.Z));
	}
}

ATurnBasedStrategyCGrid::returnOccupant ATurnBasedStrategyCGrid::getTileOccupant(int row, int column)
{
	ATurnBasedStrategyCCharacter* value = NULL;
	bool result = Occupants.Contains(FIntVector(row, column, 0));
	if (result)
	{
		value = *Occupants.Find(FIntVector(row, column, 0));
	}
	return { value, result };
}

void ATurnBasedStrategyCGrid::CalculateMoveRange(int range, int originX, int originY)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Calculating range"));

	//For Y Coords
	for (int y = originY - range; y <= originY + range; y++)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Y loop: %i"), y));
		//For X Coords
		for (int x = originX - range; x <= originX + range; x++)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("X loop: %i"), x));
			float radius;
			if (range < 5)
			{
				radius = range + 0.4;
			}
			else
			{
				radius = range + 0.2;
			}
			float Xdist = originX - x;
			float Ydist = originY - y;

			//If tile within radius
			if (TileValid(x, y))
			{
				if ((Xdist*Xdist) + (Ydist*Ydist) <= radius*radius)
				{
					//Add to mesh
					moveRangeTiles.Emplace(FIntVector(x, y, 0));
					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Added Tile: %i, %i"), x, y));
				}
			}

		}
	}

	//For each tile
	for (auto currentTile : moveRangeTiles)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Added Tile to Mesh: %i, %i"), currentTile.X, currentTile.Y));
		returnLocation tileLocation = TileToGridLocation(currentTile.X, currentTile.Y, false);


		float halfTile = tileSize / 2;
		float halfWidth = GridWidth() / 2;
		float halfHeight = GridHeight() / 2;

		CreateLine(FVector(tileLocation.location.X, tileLocation.location.Y + halfTile, GetActorLocation().Z),
			FVector(tileLocation.location.X + tileSize, tileLocation.location.Y + halfTile, GetActorLocation().Z),
			tileSize, moveRangeVertices, moveRangeTriangles);
	}

	//Create Geometry
	MoveRangeProceduralMesh->CreateMeshSection_LinearColor(0, moveRangeVertices, moveRangeTriangles,
		TArray<FVector>(), TArray<FVector2D>(), TArray<FLinearColor>(), TArray<FProcMeshTangent>(), false);
	UMaterialInstanceDynamic* moveRangeMaterialInstance = CreateMaterialInstance(moveRangeColour, selectionOpacity);
	MoveRangeProceduralMesh->SetMaterial(0, moveRangeMaterialInstance);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Created Geometry"));
}

void ATurnBasedStrategyCGrid::ClearMoveRange()
{
	MoveRangeProceduralMesh->ClearAllMeshSections();
	moveRangeVertices.Empty();
	moveRangeTriangles.Empty();
	moveRangeTiles.Empty();
}

TArray<FIntVector> ATurnBasedStrategyCGrid::GetMoveRangeTiles()
{
	return moveRangeTiles;
}

void ATurnBasedStrategyCGrid::CalculateAttackRange(int range, int originX, int originY)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Calculating range"));

	//For Y Coords
	for (int y = originY - range; y <= originY + range; y++)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Y loop: %i"), y));
		//For X Coords
		for (int x = originX - range; x <= originX + range; x++)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("X loop: %i"), x));
			float radius;
			if (range < 5)
			{
				radius = range + 0.4;
			}
			else
			{
				radius = range + 0.2;
			}
			float Xdist = originX - x;
			float Ydist = originY - y;

			//If tile within radius
			if (TileValid(x, y))
			{
				if ((Xdist * Xdist) + (Ydist * Ydist) <= radius * radius)
				{
					returnOccupant tileOccupant = getTileOccupant(x, y);

					ATurnBasedStrategyCGameMode* GameMode = Cast<ATurnBasedStrategyCGameMode>(GetWorld()->GetAuthGameMode());
					ATurnBasedStrategyCPlayerController* Controller = GameMode->GetController();
					ATurnBasedStrategyCCharacter* playerPawn = NULL;
					if (Controller)
					{
						playerPawn = Cast<ATurnBasedStrategyCCharacter>(Controller->GetPawn());
					}

					if (tileOccupant.occupied && tileOccupant.occupant != playerPawn)
					{
						//Add to mesh
						attackTargetTiles.Emplace(FIntVector(x, y, 0));
						//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Added Tile: %i, %i"), x, y));
					}
					else
					{
						//Add to mesh
						attackRangeTiles.Emplace(FIntVector(x, y, 0));
						//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Added Tile: %i, %i"), x, y));
					}
				}
			}

		}
	}

	//For each tile
	for (auto currentTile : attackRangeTiles)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Added Tile to Mesh: %i, %i"), currentTile.X, currentTile.Y));
		returnLocation tileLocation = TileToGridLocation(currentTile.X, currentTile.Y, false);


		float halfTile = tileSize / 2;
		float halfWidth = GridWidth() / 2;
		float halfHeight = GridHeight() / 2;

		CreateLine(FVector(tileLocation.location.X, tileLocation.location.Y + halfTile, GetActorLocation().Z),
			FVector(tileLocation.location.X + tileSize, tileLocation.location.Y + halfTile, GetActorLocation().Z),
			tileSize, attackRangeVertices, attackRangeTriangles);
	}

	//For each target
	for (auto currentTile : attackTargetTiles)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Added Tile to Mesh: %i, %i"), currentTile.X, currentTile.Y));
		returnLocation tileLocation = TileToGridLocation(currentTile.X, currentTile.Y, false);


		float halfTile = tileSize / 2;
		float halfWidth = GridWidth() / 2;
		float halfHeight = GridHeight() / 2;

		CreateLine(FVector(tileLocation.location.X, tileLocation.location.Y + halfTile, GetActorLocation().Z),
			FVector(tileLocation.location.X + tileSize, tileLocation.location.Y + halfTile, GetActorLocation().Z),
			tileSize, attackTargetVertices, attackTargetTriangles);
	}

	//Create Geometry
	AttackRangeProceduralMesh->CreateMeshSection_LinearColor(0, attackRangeVertices, attackRangeTriangles,
		TArray<FVector>(), TArray<FVector2D>(), TArray<FLinearColor>(), TArray<FProcMeshTangent>(), false);
	UMaterialInstanceDynamic* attackRangeMaterialInstance = CreateMaterialInstance(attackRangeColour, selectionOpacity);
	AttackRangeProceduralMesh->SetMaterial(0, attackRangeMaterialInstance);

	AttackRangeProceduralMesh->CreateMeshSection_LinearColor(1, attackTargetVertices, attackTargetTriangles,
		TArray<FVector>(), TArray<FVector2D>(), TArray<FLinearColor>(), TArray<FProcMeshTangent>(), false);
	UMaterialInstanceDynamic* attackTargetMaterialInstance = CreateMaterialInstance(attackRangeColour, selectionOpacity * 3);
	AttackRangeProceduralMesh->SetMaterial(1, attackTargetMaterialInstance);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Created Geometry"));
}

void ATurnBasedStrategyCGrid::ClearAttackRange()
{
	AttackRangeProceduralMesh->ClearAllMeshSections();
	attackRangeVertices.Empty();
	attackRangeTriangles.Empty();
	attackRangeTiles.Empty();
	attackTargetVertices.Empty();
	attackTargetTriangles.Empty();
	attackTargetTiles.Empty();
}

TArray<FIntVector> ATurnBasedStrategyCGrid::GetAttackTargets()
{
	return attackTargetTiles;
}
