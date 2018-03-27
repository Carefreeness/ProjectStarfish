// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCppCharacter.h"


// Sets default values
AMyCppCharacter::AMyCppCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCppCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCppCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FTransform* myTransform = new FTransform();

	myTransform->TransformPosition(FVector::ZeroVector);

	SetActorTransform(*myTransform, false, NULL, ETeleportType::None);

}

// Called to bind functionality to input
void AMyCppCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

