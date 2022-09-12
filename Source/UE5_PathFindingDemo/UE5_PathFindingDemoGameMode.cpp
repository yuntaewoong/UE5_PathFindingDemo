// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_PathFindingDemoGameMode.h"
#include "UE5_PathFindingDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_PathFindingDemoGameMode::AUE5_PathFindingDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
