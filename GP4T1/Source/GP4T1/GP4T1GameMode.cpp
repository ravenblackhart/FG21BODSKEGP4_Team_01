// Copyright Epic Games, Inc. All Rights Reserved.

#include "GP4T1GameMode.h"
#include "GP4T1Character.h"
#include "UObject/ConstructorHelpers.h"

AGP4T1GameMode::AGP4T1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
