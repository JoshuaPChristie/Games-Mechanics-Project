// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TurnBasedStrategyCPlayerController.generated.h"

UCLASS()
class ATurnBasedStrategyCPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATurnBasedStrategyCPlayerController();

	void setSwitchTeam(bool newSwitch);

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Navigate player to the current mouse cursor location. */
	void MoveToMouseCursor();

	/** Navigate player to the current touch location. */
	void MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location);
	
	/** Navigate player to the given world location. */
	void SetNewMoveDestination(const FVector DestLocation);

	/** Input handlers for SetDestination action. */
	void OnSetDestinationPressed();
	void OnSetDestinationReleased();

	/** Input handlers for Zoom actions. */
	void OnZoomInPressed();
	void OnZoomOutPressed();

	void OnActionType1Pressed();
	void OnActionType2Pressed();

private:
	bool switchTeam = false;
};


