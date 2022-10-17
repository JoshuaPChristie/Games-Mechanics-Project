// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TurnBasedStrategyCGrid.h"
#include "TurnBasedStrategyCPlayerController.h"
#include "TurnBasedStrategyCCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "TurnBasedStrategyCGameMode.generated.h"

UCLASS(minimalapi)
class ATurnBasedStrategyCGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATurnBasedStrategyCGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//--Functions--
	ATurnBasedStrategyCGrid* GetGrid();
	ATurnBasedStrategyCPlayerController* GetController();

	ATurnBasedStrategyCCharacter* GetCharacter(int team);

private:
	//--Variables--
	ATurnBasedStrategyCGrid* Grid;
	ATurnBasedStrategyCPlayerController* Controller;

	TArray<ATurnBasedStrategyCCharacter*> Characters;
	
};



