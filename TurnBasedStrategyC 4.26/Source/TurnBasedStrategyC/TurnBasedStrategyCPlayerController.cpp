// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TurnBasedStrategyCPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "TurnBasedStrategyCCharacter.h"
#include "TurnBasedStrategyCGameMode.h"
#include "TurnBasedStrategyCGrid.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

ATurnBasedStrategyCPlayerController::ATurnBasedStrategyCPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ATurnBasedStrategyCPlayerController::BeginPlay()
{
	/*APawn* PlayerPawn = Cast<APawn>(StaticLoadObject(APawn::StaticClass(), NULL, TEXT("Blueprint'/Game/TopDownCPP/Blueprints/TopDownCharacter.TopDownCharacter'")));

	if (PlayerPawn)
	{
		Possess(PlayerPawn);
	}*/
}


void ATurnBasedStrategyCPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	ATurnBasedStrategyCCharacter* MyPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn());
	
	if (MyPawn->getIdle())
	{
		if (switchTeam)
		{
			switchTeam = false;
			ATurnBasedStrategyCGameMode* GameMode = Cast<ATurnBasedStrategyCGameMode>(GetWorld()->GetAuthGameMode());
			ATurnBasedStrategyCCharacter* OtherPawn;
			switch (MyPawn->getTeam())
			{
			case 0:
				OtherPawn = GameMode->GetCharacter(1);

				if (OtherPawn)
				{
					Possess(OtherPawn);
					MyPawn = OtherPawn;
				}

				break;
			case 1:
				OtherPawn = GameMode->GetCharacter(0);

				if (OtherPawn)
				{
					Possess(OtherPawn);
					//MyPawn = OtherPawn;
				}

				break;
			}
		}

		// keep updating the destination every tick while desired
		if (bMoveToMouseCursor)
		{
			bMoveToMouseCursor = false;
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Click"));
			MoveToMouseCursor();
		}
	}

}

void ATurnBasedStrategyCPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &ATurnBasedStrategyCPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ATurnBasedStrategyCPlayerController::OnSetDestinationReleased);

	// support touch devices 
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ATurnBasedStrategyCPlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ATurnBasedStrategyCPlayerController::MoveToTouchLocation);

	InputComponent->BindAction("ResetVR", IE_Pressed, this, &ATurnBasedStrategyCPlayerController::OnResetVR);

	InputComponent->BindAction("ZoomIn", IE_Pressed, this, &ATurnBasedStrategyCPlayerController::OnZoomInPressed);
	InputComponent->BindAction("ZoomOut", IE_Released, this, &ATurnBasedStrategyCPlayerController::OnZoomOutPressed);

	InputComponent->BindAction("ActionType1", IE_Pressed, this, &ATurnBasedStrategyCPlayerController::OnActionType1Pressed);
	InputComponent->BindAction("ActionType2", IE_Released, this, &ATurnBasedStrategyCPlayerController::OnActionType2Pressed);
}

void ATurnBasedStrategyCPlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ATurnBasedStrategyCPlayerController::MoveToMouseCursor()
{
	ATurnBasedStrategyCCharacter* MyPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn());
	
	if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
	{
		//if (ATurnBasedStrategyCCharacter* MyPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn()))
		//{
		if (MyPawn->GetCursorToWorld())
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
		}
		//}
	}
	else
	{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		if (GetHitResultUnderCursor(ECC_Visibility, false, Hit))
		{
			if (Hit.bBlockingHit)
			{
				// We hit something, move there
				SetNewMoveDestination(Hit.ImpactPoint);
			}
		}
	}
	
}

void ATurnBasedStrategyCPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void ATurnBasedStrategyCPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	//APawn* const MyPawn = GetPawn();
	ATurnBasedStrategyCCharacter* MyPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn());
	if (MyPawn)
	{
		ATurnBasedStrategyCGameMode* GameMode = Cast<ATurnBasedStrategyCGameMode>(GetWorld()->GetAuthGameMode());
		ATurnBasedStrategyCGrid* Grid = GameMode->GetGrid();
		ATurnBasedStrategyCGrid::returnTile DestTile = Grid->LocationToTile(DestLocation);
		
		switch(MyPawn->getActionType())
		{
		case 1:
			//float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

			// We need to issue move command only if far enough in order for walk animation to play correctly
			//if ((Distance > 120.0f))
			//{

			if (DestTile.valid)
			{
				ATurnBasedStrategyCGrid::returnOccupant occupantResult = Grid->getTileOccupant(DestTile.row, DestTile.column);

				if (Grid->GetMoveRangeTiles().Contains(FIntVector(DestTile.row, DestTile.column, 0)))
				{
					if (!occupantResult.occupied)
					{
						ATurnBasedStrategyCGrid::returnLocation DestCenter = Grid->TileToGridLocation(DestTile.row, DestTile.column, true);
						UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, FVector(DestCenter.location.X, DestCenter.location.Y, DestLocation.Z));
						//MyPawn->setDestination(FVector(DestCenter.location.X, DestCenter.location.Y, DestLocation.Z));
						Grid->SetTileOccupant(DestTile.row, DestTile.column, MyPawn);
						//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Started Moving"));

						MyPawn->setIdle(false);

						//switchTeam = true;
						Grid->ClearMoveRange();
						Grid->ClearAttackRange();
					}
					else
					{
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tile Already Occupied"));
					}
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tile Out of Range"));
				}

			}
			//}
			break;
		case 2:

			if (DestTile.valid)
			{
				if (Grid->GetAttackTargets().Contains(FIntVector(DestTile.row, DestTile.column, 0)))
				{
					ATurnBasedStrategyCGrid::returnOccupant attackTarget = Grid->getTileOccupant(DestTile.row, DestTile.column);
					attackTarget.occupant->takeDamage(MyPawn->getAttackDamage());
					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Dealt Damage"));
					switchTeam = true;
					Grid->ClearMoveRange();
					Grid->ClearAttackRange();
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No Target"));
				}
			}

		}
	}
}

void ATurnBasedStrategyCPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	
	bMoveToMouseCursor = true;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Click"));
}

void ATurnBasedStrategyCPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}

void ATurnBasedStrategyCPlayerController::setSwitchTeam(bool newSwitch)
{
	switchTeam = newSwitch;
}

void ATurnBasedStrategyCPlayerController::OnZoomInPressed()
{
	ATurnBasedStrategyCCharacter* myPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn());
	myPawn->ZoomIn();
}

void ATurnBasedStrategyCPlayerController::OnZoomOutPressed()
{
	ATurnBasedStrategyCCharacter* myPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn());
	myPawn->ZoomOut();
}

void ATurnBasedStrategyCPlayerController::OnActionType1Pressed()
{
	ATurnBasedStrategyCCharacter* myPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn());
	myPawn->setActionType(1);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Action Type 1"));
}

void ATurnBasedStrategyCPlayerController::OnActionType2Pressed()
{
	ATurnBasedStrategyCCharacter* myPawn = Cast<ATurnBasedStrategyCCharacter>(GetPawn());
	myPawn->setActionType(2);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Action Type 2"));
}
