// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyCPPStarfishPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STARFISH_API AMyCPPStarfishPlayerController : public APlayerController
{
	GENERATED_BODY()

		int myInteger;

		void TestFunction();
	


	
};
