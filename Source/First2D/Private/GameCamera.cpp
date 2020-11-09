// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCamera.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Muffin.h"
#include "Components/BoxComponent.h"
#include "Cloud.h"

// Sets default values
AGameCamera::AGameCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(GetRootComponent());

	DestroyArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DestroyArea"));
	DestroyArea->SetupAttachment(RootComponent);

	bFollowPlayer = true;

}

// Called when the game starts or when spawned
void AGameCamera::BeginPlay()
{
	Super::BeginPlay();

	Muffin = Cast<AMuffin>(UGameplayStatics::GetPlayerPawn(this, 0));

	PC = UGameplayStatics::GetPlayerController(this,0);
	PC->SetViewTargetWithBlend(this, 0);	
}

void AGameCamera::MoveCamera()
{
	FVector TargetPosition = FVector(GetActorLocation().X, GetActorLocation().Y, Muffin->GetActorLocation().Z);
	SetActorLocation(TargetPosition);

}

// Called every frame
void AGameCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bFollowPlayer)
	{
		MoveCamera();
		CheckIfFalling();
	}
}

void AGameCamera::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//先调用父类函数
	Super::NotifyActorBeginOverlap(OtherActor);

	ACloud* Cloud = Cast<ACloud>(OtherActor);
	if (Cloud)
	{
		Cloud->Destroy();
	}
}


void AGameCamera::CheckIfFalling()
{
	if (Muffin->GetVelocity().Z < 0)
	{
		UpdateTimer();
	}
	else {
		ResetTimer();
	}
}

void AGameCamera::OnSureFalling()
{
	bFollowPlayer = false;
	float oldCameraPosX = GetActorLocation().X;
	float oldCameraPosY = GetActorLocation().Y;
	SetActorLocation(FVector(oldCameraPosX, oldCameraPosY, 0));

	float OldMuffinPosX = Muffin->GetActorLocation().X;
	float OldMuffinPosY = Muffin->GetActorLocation().Y;
	Muffin->SetActorLocation(FVector(OldMuffinPosX, OldMuffinPosY, 0));
	Muffin->DisableInput(PC);
}