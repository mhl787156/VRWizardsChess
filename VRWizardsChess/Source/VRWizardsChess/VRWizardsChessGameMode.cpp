// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "VRWizardsChess.h"
#include "VRWizardsChessGameMode.h"
#include "VRWizardsChessHUD.h"
#include "VRWizardsChessCharacter.h"

AVRWizardsChessGameMode::AVRWizardsChessGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVRWizardsChessHUD::StaticClass();
}
