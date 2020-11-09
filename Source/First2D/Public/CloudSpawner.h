// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CloudSpawner.generated.h"

class ACloud;

UCLASS()
class FIRST2D_API ACloudSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACloudSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnCloud();

	UFUNCTION(BlueprintCallable)
	void Reset();

	UPROPERTY(VisibleAnywhere,Category="Component")
	class UBoxComponent* SpawnArea;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UBoxComponent* TriggerArea;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	USceneComponent* DefualtRootComponent;

	UPROPERTY(EditAnywhere,Category="Cloud")
	TSubclassOf<ACloud> Cloud; //TSubclassOf 只能生成这个类以及子类的Actor

	class AMuffin* Muffin;

	UPROPERTY(EditAnywhere, Category = "Cloud")
	int InitSpawnAmount;

	UPROPERTY(EditAnywhere, Category = "Cloud")
	float SpawnSpacing;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
