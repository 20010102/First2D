// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Muffin.generated.h"

UCLASS()
class FIRST2D_API AMuffin : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMuffin();

protected:
	class APlayerController* PC;

	FVector LaunchVelocity;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
		
	void MoveTowardsCursor();

	//按任意键发射（弹跳）
	void LaunchOnAnyKeyPressed();

	void SetSpeed();

	void GameOver();
	
	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintImplementableEvent)
	void DisplayRestart();//显示restart

	UPROPERTY(BlueprintReadOnly)
	bool bDead;

	bool bGameStarted;

	UPROPERTY(EditAnywhere,Category="Speed")
	float AirSpeed;

	UPROPERTY(EditAnywhere,Category="Speed")
	float GroundSpeed;

	int Score;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//碰到云朵时弹跳
	void Launch();

	void InCreaseScore();

	int GetScore() const;
};


