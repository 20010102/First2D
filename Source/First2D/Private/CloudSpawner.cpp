// Fill out your copyright notice in the Description page of Project Settings.


#include "CloudSpawner.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Actor.h"
#include "Cloud.h"
#include "Muffin.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACloudSpawner::ACloudSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefualtRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefualtRootComponent"));
	SpawnArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnArea"));
	SpawnArea->SetupAttachment(DefualtRootComponent);
	TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
	TriggerArea->SetupAttachment(DefualtRootComponent);

	InitSpawnAmount = 6;
	SpawnSpacing = 300.f;
}

// Called when the game starts or when spawned
void ACloudSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	Reset();

}

void ACloudSpawner::SpawnCloud()
{
	FVector SpawnOrigin = SpawnArea->Bounds.Origin; //�������ĵ�
	FVector SpawnExtent = SpawnArea->Bounds.BoxExtent;//���ɷ�Χ
	//���Y��ֵ
	float YLoction = UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent).Y;
	//ȷ�����ɵ�λ��
	FVector SpawnLocation = FVector(SpawnArea->GetComponentLocation().X, YLoction, SpawnArea->GetComponentLocation().Z);

	FActorSpawnParameters SpawnParams;

	GetWorld()->SpawnActor<ACloud>(Cloud, SpawnLocation,FRotator::ZeroRotator,SpawnParams);

	//ÿ�����ɾ�������
	AddActorWorldOffset(FVector(0, 0, SpawnSpacing));
}

void ACloudSpawner::Reset()
{
	SetActorLocation(FVector::ZeroVector);

	TArray<AActor*> FoundClouds;
	//��ȡ���������е��Ʋ�
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACloud::StaticClass(), FoundClouds);
	//forѭ������ɾ��
	for (AActor* TActor : FoundClouds)
	{
		ACloud* MyCloud = Cast<ACloud>(TActor);
		if (MyCloud!=nullptr)
		{
			MyCloud->Destroy();
		}
	}
	InitSpawnAmount = 6;
	while (InitSpawnAmount--)
	{
		SpawnCloud();
	}
}

// Called every frame
void ACloudSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACloudSpawner::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//�ȵ��ø��ຯ��
	Super::NotifyActorBeginOverlap(OtherActor);

	Muffin = Cast<AMuffin>(OtherActor);
	if (Muffin)
	{
		SpawnCloud();
	}
}

