// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurnBasedStrategyCCharacter.generated.h"

UCLASS(Blueprintable)
class ATurnBasedStrategyCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATurnBasedStrategyCCharacter();

	//--Functions--


	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }

	void setDestination(FVector newDestination);

	bool getIdle();
	void setIdle(bool newIdle);

	int getTeam();

	void ZoomIn();
	void ZoomOut();

	int getMoveRange();

	int getAttackRange();

	int getActionType();
	void setActionType(int newAction);

	void takeDamage(float damage);

	UFUNCTION(BlueprintCallable)
		float getMaxHealth();

	UFUNCTION(BlueprintCallable)
		float getHealthPercent();
	UFUNCTION(BlueprintCallable)
		void setHealthPercent(float newPercent);

	UFUNCTION(BlueprintCallable)
		float getCurrentHealth();
	UFUNCTION(BlueprintCallable)
		void setCurrentHealth(float newHealth);

	UFUNCTION(BlueprintCallable)
		float getAttackDamage();


	//--Variables--
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Constants")
		float MaxHealth;
	UPROPERTY(VisibleAnywhere, BluePrintReadWrite)
		float HealthPercent = 1.0;
	UPROPERTY(VisibleAnywhere, BluePrintReadWrite)
		float CurrentHealth;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Constants")
		float AttackDamage;
	

private:
	//--Functions--
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//--Variables--
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;

	UPROPERTY(EditAnywhere, Category = "Constants")
		int startX;
	UPROPERTY(EditAnywhere, Category = "Constants")
		int startY;

	UPROPERTY(EditAnywhere, Category = "Constants")
		int moveRange;
	UPROPERTY(EditAnywhere, Category = "Constants")
		int attackRange;

	FVector destination;
	bool idle = true;
	//bool moving = false;
	float baseCamDist;
	int actionType = 1;

	//--Components--

protected:
	

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "Constants")
		int team;

};

