// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Slash/DebugMacros.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	/*
	UE_LOG(LogTemp, Warning, TEXT("BeginPlay called from C++!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item on screen message!"));
	}

	UWorld* World = GetWorld();

	// SetActorLocation(FVector(0.f, 0.f, 50.f));
	// SetActorRotation(FRotator(0.f, 45.f, 0.f));

	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + Forward * 100.f);
	//DRAW_POINT(Location + Forward * 100.f);
	DRAW_VECTOR(Location, Location + Forward * 100.f);
	*/

}

// Called every frame
// DeltaTime is time passed since last frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	float MovementRate = 50.f;

	AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.f, 0.f));

	DRAW_SPHERE_SingleFrame(GetActorLocation());

}

