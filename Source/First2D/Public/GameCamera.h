// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCamera.generated.h"

UCLASS()
class FIRST2D_API AGameCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere,Category="Components")
	class UBoxComponent* DestroyArea;

	class APlayerController* PC;

	//事先获取主角Muffin
	class AMuffin* Muffin;

	void MoveCamera();

	UPROPERTY(BlueprintReadWrite)
	bool bFollowPlayer;

	void CheckIfFalling();

	//更新时间轴
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateTimer();
	//重设时间轴
	UFUNCTION(BlueprintImplementableEvent)
	void ResetTimer();

	UFUNCTION(BlueprintCallable)
	void OnSureFalling();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
