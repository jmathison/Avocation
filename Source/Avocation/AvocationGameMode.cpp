// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Avocation.h"
#include "AvocationGameMode.h"
#include "AvocationCharacter.h"

AAvocationGameMode::AAvocationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
