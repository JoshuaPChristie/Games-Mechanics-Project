// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TurnBasedStrategyCGameMode.h"
#include "UObject/ConstructorHelpers.h"

ATurnBasedStrategyCGameMode::ATurnBasedStrategyCGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATurnBasedStrategyCPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
	DefaultPawnClass = NULL;
}

// Called when the game starts
void ATurnBasedStrategyCGameMode::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> FoundActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedStrategyCGrid::StaticClass(), FoundActors);
	Grid = Cast<ATurnBasedStrategyCGrid>(FoundActors[0]);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedStrategyCPlayerController::StaticClass(), FoundActors);
	Controller = Cast<ATurnBasedStrategyCPlayerController>(FoundActors[0]);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATurnBasedStrategyCCharacter::StaticClass(), FoundActors);
	for(auto actor : FoundActors)
	{
		Characters.Add(Cast<ATurnBasedStrategyCCharacter>(actor));
	}
}

ATurnBasedStrategyCGrid* ATurnBasedStrategyCGameMode::GetGrid()
{
	return Grid;
}

ATurnBasedStrategyCPlayerController* ATurnBasedStrategyCGameMode::GetController()
{
	return Controller;
}

ATurnBasedStrategyCCharacter* ATurnBasedStrategyCGameMode::GetCharacter(int team)
{
	for (auto character : Characters)
	{
		if (character->getTeam() == team)
		{
			return character;
		}
		
	}
	return NULL;
}