// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DungeonRoom_CppGameMode.h"
#include "DungeonRoom_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonRoom_CppGameMode::ADungeonRoom_CppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
