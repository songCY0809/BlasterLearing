// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamsGameMode.h"
#include "BlasterLearing/GameState/BlasterGameState.h"
#include "BlasterLearing/PlayerState/BlasterPlayerState.h"
#include "BlasterLearing/PlayerController/BlasterPlayerController.h"
#include "Kismet/GameplayStatics.h"

ATeamsGameMode::ATeamsGameMode()
{
    bTeamsMatch = true;
}

void ATeamsGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);
}

void ATeamsGameMode::Logout(AController* Exiting)
{
    Super::Logout(Exiting);
}

void ATeamsGameMode::HandleMatchHasStarted()
{
    Super::HandleMatchHasStarted();
}

//所有其他函数的空实现
float ATeamsGameMode::CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage) { return 0.0f; }

void ATeamsGameMode::PlayerEliminated(ABlasterCharacter* ElimmedCharacter, ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController) {}