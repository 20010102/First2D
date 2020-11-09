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
	FVector SpawnOrigin = SpawnArea->Bounds.Origin; //生成中心点
	FVector SpawnExtent = SpawnArea->Bounds.BoxExtent;//生成范围
	//随机Y的值
	float YLoction = UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent).Y;
	//确定生成的位置
	FVector SpawnLocation = FVector(SpawnArea->GetComponentLocation().X, YLoction, SpawnArea->GetComponentLocation().Z);

	FActorSpawnParameters SpawnParams;

	GetWorld()->SpawnActor<ACloud>(Cloud, SpawnLocation,FRotator::ZeroRotator,SpawnParams);

	//每次生成就往上移
	AddActorWorldOffset(FVector(0, 0, SpawnSpacing));
}

void ACloudSpawner::Reset()
{
	SetActorLocation(FVector::ZeroVector);

	TArray<AActor*> FoundClouds;
	//获取场景中所有的云彩
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACloud::StaticClass(), FoundClouds);
	//for循环遍历删除
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
	//先调用父类函数
	Super::NotifyActorBeginOverlap(OtherActor);

	Muffin = Cast<AMuffin>(OtherActor);
	if (Muffin)
	{
		SpawnCloud();
	}
}

