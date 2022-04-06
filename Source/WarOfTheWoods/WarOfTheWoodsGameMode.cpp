// Copyright Epic Games, Inc. All Rights Reserved.

#include "WarOfTheWoodsGameMode.h"
#include "WarOfTheWoodsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWarOfTheWoodsGameMode::AWarOfTheWoodsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
