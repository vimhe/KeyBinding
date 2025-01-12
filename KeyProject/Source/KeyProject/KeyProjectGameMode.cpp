// Copyright Epic Games, Inc. All Rights Reserved.

#include "KeyProjectGameMode.h"
#include "KeyProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKeyProjectGameMode::AKeyProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
