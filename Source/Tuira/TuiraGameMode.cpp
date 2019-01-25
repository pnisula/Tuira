// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TuiraGameMode.h"
#include "TuiraPlayerController.h"
#include "TuiraCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATuiraGameMode::ATuiraGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATuiraPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}