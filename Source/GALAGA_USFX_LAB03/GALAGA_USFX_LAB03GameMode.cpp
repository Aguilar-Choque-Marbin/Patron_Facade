// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_LAB03GameMode.h"
#include "GALAGA_USFX_LAB03Pawn.h"

AGALAGA_USFX_LAB03GameMode::AGALAGA_USFX_LAB03GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_LAB03Pawn::StaticClass();
}

