// Copyright Epic Games, Inc. All Rights Reserved.

#include "BHGameMode.h"
#include "BHHUD.h"
#include "BHCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABHGameMode::ABHGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABHHUD::StaticClass();
}
