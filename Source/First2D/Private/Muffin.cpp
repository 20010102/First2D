// Fill out your copyright notice in the Description page of Project Settings.


#include "Muffin.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMuffin::AMuffin()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//向上速度
	LaunchVelocity = FVector(0, 0, 1500);

	AirSpeed = 3500.f;
	GroundSpeed = 300.f;

	Score = 0;

	bDead = false;

}

// Called when the game starts or when spawned
void AMuffin::BeginPlay()
{
	Super::BeginPlay();

	//ACharacter 里面本身有controller，直接获取，并转换到APlayerContorller,赋给PC
	PC = Cast<APlayerController>( GetController() );

	PC->bShowMouseCursor = true;

	Reset();
	
}

void AMuffin::MoveTowardsCursor()
{
	FVector MouseLocation, MouseDrection;
	
	//获得世界坐标下鼠标的位置和方向
	PC->DeprojectMousePositionToWorld(MouseLocation, MouseDrection);
	//获取Y的方向
	float YDrection = FMath::Clamp(MouseLocation.Y - GetActorLocation().Y, -1.f, 1.f);
	FVector Drection = FVector(0, YDrection,0);

	float ScaleValue = FMath::Clamp(FMath::Abs(MouseLocation.Y - GetActorLocation().Y) / 100, 0.f, 1.f);
	AddMovementInput(Drection,ScaleValue);

}

void AMuffin::LaunchOnAnyKeyPressed()
{
	if (!GetCharacterMovement()->IsFalling() && !bGameStarted)
	{
		Launch();
	}
	if (!bGameStarted) {
		bGameStarted = true;
	}
}

void AMuffin::SetSpeed()
{
	if (GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->MaxWalkSpeed = AirSpeed;
	}
	else {
		if (bGameStarted)
		{
			GameOver();
		}
		GetCharacterMovement()->MaxWalkSpeed = GroundSpeed;
	}
}

void AMuffin::GameOver()
{
	bDead = true;
	SetActorRotation(FRotator::ZeroRotator);
	EnableInput(PC);
	DisplayRestart();
}

void AMuffin::Reset()
{
	bGameStarted = false;
	Score = 0;
	bDead = false;
}

void AMuffin::Launch()
{	
	LaunchCharacter(LaunchVelocity, false, true);
}

void AMuffin::InCreaseScore()
{
	this->Score++;
}

int AMuffin::GetScore() const
{
	return this->Score;
}

// Called every frame
void AMuffin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!bDead)
	{
		MoveTowardsCursor();
		SetSpeed();
	}	
}

// Called to bind functionality to input
void AMuffin::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMuffin::LaunchOnAnyKeyPressed);
}

