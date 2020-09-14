// Copyright Epic Games, Inc. All Rights Reserved.

#include "Base_ProjectGameMode.h"
#include "Base_ProjectHUD.h"
#include "Base_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABase_ProjectGameMode::ABase_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABase_ProjectHUD::StaticClass();
}
