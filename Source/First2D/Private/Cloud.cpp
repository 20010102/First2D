// Fill out your copyright notice in the Description page of Project Settings.


#include "Cloud.h"
#include "Muffin.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/TextRenderComponent.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"


// Sets default values
ACloud::ACloud()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;

	CloudPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CloudPlane"));
	CloudPlane->SetupAttachment(RootComponent);

	RainPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RainPlane"));
	RainPlane->SetupAttachment(CloudPlane);

	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText"));
	ScoreText->SetupAttachment(RootComponent);

	AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComp"));
	AudioComp->SetupAttachment(CloudPlane);


}

// Called when the game starts or when spawned
void ACloud::BeginPlay()
{
	Super::BeginPlay();
	
	SetRandomCloudTexture();

	EnableRain();

}

void ACloud::SetRandomCloudTexture()
{
	MatInterface = CloudPlane->GetMaterial(0);
	MatInstance = CloudPlane->CreateDynamicMaterialInstance(0, MatInterface);
	int Index = FMath::RandRange(0, 2);
	if (Textures[Index])
	{
		MatInstance->SetTextureParameterValue(FName(TEXT("Texture")), Textures[Index]);
		CloudPlane->SetMaterial(0, MatInstance);
	}
}

void ACloud::DisplayScore()
{
	Muffin->InCreaseScore();
	ScoreText->SetText(FText::FromString(FString::FromInt(Muffin->GetScore())));
		
}

void ACloud::EnableRain()
{
	int Index = FMath::RandRange(0, 2);
	if (Index == 0)
	{
		RainPlane->SetVisibility(true);
		AudioComp->Activate(true);
	}
}

// Called every frame
void ACloud::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACloud::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//先调用父类函数
	Super::NotifyActorBeginOverlap(OtherActor);
	
	Muffin=Cast<AMuffin>(OtherActor);
	if (Muffin)
	{
		Muffin->Launch();
		DisplayScore();
		UGameplayStatics::PlaySoundAtLocation(this, CloudSound, GetActorLocation());
		FadeOut();
	}
}

