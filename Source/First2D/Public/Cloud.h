// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cloud.generated.h"

class USoundCue;
class UAudioComponent;

UCLASS()
class FIRST2D_API ACloud : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACloud();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//先创建一个碰撞体
	UPROPERTY(VisibleAnywhere,Category="Collision")
	class UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Show")
	class UStaticMeshComponent* CloudPlane;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Show")
	class UStaticMeshComponent* RainPlane;

	UPROPERTY(EditAnywhere,Category="Show")
	TArray<UTexture*>	Textures;

	UPROPERTY(BlueprintReadOnly, Category = "Show")
	class UMaterialInstanceDynamic* MatInstance;

	class UMaterialInterface* MatInterface;

	void SetRandomCloudTexture();

	void DisplayScore();

	UFUNCTION(BlueprintImplementableEvent)
	void FadeOut();

	void EnableRain();

	UPROPERTY(VisibleAnywhere,Category="Show")
	class UTextRenderComponent* ScoreText;

	class AMuffin* Muffin;

	UPROPERTY(EditAnywhere,Category="Sound")
	USoundCue* CloudSound;

	UPROPERTY(VisibleAnywhere,Category="Sound")
	UAudioComponent* AudioComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
