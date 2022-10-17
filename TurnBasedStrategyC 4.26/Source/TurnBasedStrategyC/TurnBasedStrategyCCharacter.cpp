// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TurnBasedStrategyCCharacter.h"
#include "TurnBasedStrategyCGameMode.h"
#include "TurnBasedStrategyCGrid.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"

ATurnBasedStrategyCCharacter::ATurnBasedStrategyCCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Create a decal in the world to show the cursor's location
	CursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	CursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
	{
		CursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	}
	CursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	CursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());


	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

// Called when the game starts or when spawned
void ATurnBasedStrategyCCharacter::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;

	ATurnBasedStrategyCGameMode* GameMode = Cast<ATurnBasedStrategyCGameMode>(GetWorld()->GetAuthGameMode());
	ATurnBasedStrategyCGrid* Grid = GameMode->GetGrid();

	Grid->SetTileOccupant(startX, startY, this);
	ATurnBasedStrategyCGrid::returnLocation startLocation = Grid->TileToGridLocation(startX, startY, true);
	SetActorLocation(FVector(startLocation.location.X, startLocation.location.Y, GetActorLocation().Z));

	//Flip Camera for second character

	FVector PrevLoc = TopDownCameraComponent->GetComponentLocation();
	if (team == 1)
	{
		FVector FlipMod = (PrevLoc - GetActorLocation()).GetAbs();
		FlipMod.X *= 2;
		FlipMod.Y *= 2;

		TopDownCameraComponent->SetWorldLocation(FVector(PrevLoc.X + FlipMod.X, PrevLoc.Y + FlipMod.Y, PrevLoc.Z));

		FRotator PrevRot = TopDownCameraComponent->GetComponentRotation();
		TopDownCameraComponent->SetWorldRotation(FRotator(PrevRot.Pitch, 180 - PrevRot.Yaw, PrevRot.Roll));
		//TopDownCameraComponent->SetWorldRotation(TopDownCameraComponent->GetComponentRotation());
	}
	baseCamDist = (PrevLoc - GetActorLocation()).Size();

}

void ATurnBasedStrategyCCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

	ATurnBasedStrategyCGameMode* GameMode = Cast<ATurnBasedStrategyCGameMode>(GetWorld()->GetAuthGameMode());

	ATurnBasedStrategyCGrid* Grid = GameMode->GetGrid();


	if (CursorToWorld != nullptr)
	{
		if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
		{
			if (UWorld* World = GetWorld())
			{
				FHitResult HitResult;
				FCollisionQueryParams Params(NAME_None, FCollisionQueryParams::GetUnknownStatId());
				FVector StartLocation = TopDownCameraComponent->GetComponentLocation();
				FVector EndLocation = TopDownCameraComponent->GetComponentRotation().Vector() * 2000.0f;
				Params.AddIgnoredActor(this);
				World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, Params);
				FQuat SurfaceRotation = HitResult.ImpactNormal.ToOrientationRotator().Quaternion();
				CursorToWorld->SetWorldLocationAndRotation(HitResult.Location, SurfaceRotation);
			}
		}
		else if (APlayerController* PC = Cast<APlayerController>(GetController()))
		{

			FHitResult TraceHitResult;
			if (PC->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult))
			{
				FVector CursorFV = TraceHitResult.ImpactNormal;
				FRotator CursorR = CursorFV.Rotation();
				CursorToWorld->SetWorldLocation(TraceHitResult.Location);
				CursorToWorld->SetWorldRotation(CursorR);

				ATurnBasedStrategyCGrid::returnTile selectedTile = Grid->LocationToTile(TraceHitResult.Location);

				Grid->SetSelectedTile(selectedTile.row, selectedTile.column);
			}
			else
			{
				Grid->SetSelectedTile(-1, -1);
			}
		}
	}

	ATurnBasedStrategyCGrid::returnTile destinationTile = Grid->LocationToTile(destination);

	//If moving
	if (GetVelocity().Size() >= 0.1)
	{
		if (idle)
		{
			idle = false;
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Started Moving"));
			//ATurnBasedStrategyCPlayerController* Controller = GameMode->GetController();
			ATurnBasedStrategyCPlayerController* MyController = Cast<ATurnBasedStrategyCPlayerController>(GetController());

			MyController->setSwitchTeam(true);
		}
	}
	//Otherwise if not moving
	else
	{
		//If reached destination
		if ((GetActorLocation() - destination).Size() >= 10)
		{
			if (!idle)
			{
				idle = true;
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Finished Moving"));
			}
		}
	}


}

void ATurnBasedStrategyCCharacter::setDestination(FVector newDestination)
{
	destination = newDestination;
}

bool ATurnBasedStrategyCCharacter::getIdle()
{
	return idle;
}

void ATurnBasedStrategyCCharacter::setIdle(bool newIdle)
{
	idle = newIdle;
}

int ATurnBasedStrategyCCharacter::getTeam()
{
	return team;
}

void ATurnBasedStrategyCCharacter::ZoomIn()
{
	float camDist = (TopDownCameraComponent->GetComponentLocation() - GetActorLocation()).Size();

	if (camDist > baseCamDist)
	{
		FVector prevLoc = TopDownCameraComponent->GetComponentLocation();
		switch (team)
		{
		case 0:
			TopDownCameraComponent->SetWorldLocation(FVector(prevLoc.X + 20, prevLoc.Y, prevLoc.Z - 40));
			break;
		case 1:
			TopDownCameraComponent->SetWorldLocation(FVector(prevLoc.X - 20, prevLoc.Y, prevLoc.Z - 40));
			break;
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Zoomed In"));
}

void ATurnBasedStrategyCCharacter::ZoomOut()
{
	float camDist = (TopDownCameraComponent->GetComponentLocation() - GetActorLocation()).Size();

	if (camDist < (baseCamDist * 4))
	{
		FVector prevLoc = TopDownCameraComponent->GetComponentLocation();
		switch (team)
		{
		case 0:
			TopDownCameraComponent->SetWorldLocation(FVector(prevLoc.X - 20, prevLoc.Y, prevLoc.Z + 40));
			break;
		case 1:
			TopDownCameraComponent->SetWorldLocation(FVector(prevLoc.X + 20, prevLoc.Y, prevLoc.Z + 40));
			break;
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Zoomed Out"));
}

int ATurnBasedStrategyCCharacter::getMoveRange()
{
	return moveRange;
}

int ATurnBasedStrategyCCharacter::getAttackRange()
{
	return attackRange;
}

int ATurnBasedStrategyCCharacter::getActionType()
{
	return actionType;
}

void ATurnBasedStrategyCCharacter::setActionType(int newAction)
{
	actionType = newAction;
}

float ATurnBasedStrategyCCharacter::getMaxHealth()
{
	return MaxHealth;
}

float ATurnBasedStrategyCCharacter::getHealthPercent()
{
	return HealthPercent;
}

void ATurnBasedStrategyCCharacter::setHealthPercent(float newPercent)
{
	HealthPercent = newPercent;
}

float ATurnBasedStrategyCCharacter::getCurrentHealth()
{
	return CurrentHealth;
}

void ATurnBasedStrategyCCharacter::setCurrentHealth(float newHealth)
{
	CurrentHealth = newHealth;
}

float ATurnBasedStrategyCCharacter::getAttackDamage()
{
	return AttackDamage;
}

void ATurnBasedStrategyCCharacter::takeDamage(float damage)
{
	CurrentHealth -= damage;
	CurrentHealth = FMath::Clamp(CurrentHealth, 0.f, MaxHealth);

	HealthPercent = CurrentHealth / MaxHealth;
}