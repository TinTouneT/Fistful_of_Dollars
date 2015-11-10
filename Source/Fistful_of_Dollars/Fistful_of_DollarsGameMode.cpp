// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Fistful_of_Dollars.h"
#include "Fistful_of_DollarsGameMode.h"
#include "Fistful_of_DollarsHUD.h"
#include "Fistful_of_DollarsCharacter.h"

AFistful_of_DollarsGameMode::AFistful_of_DollarsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFistful_of_DollarsHUD::StaticClass();
}
