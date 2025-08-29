

#include "CaptureTheFlagGameMode.h"
#include "BlasterLearing/Weapon/Flag.h"
#include "BlasterLearing/CaptureTheFlag/FlagZone.h"
#include "BlasterLearing/GameState/BlasterGameState.h"

void ACaptureTheFlagGameMode::PlayerEliminated(ABlasterCharacter* ElimmedCharacter, ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController)
{
    Super::PlayerEliminated(ElimmedCharacter, VictimController, AttackerController);
}

void ACaptureTheFlagGameMode::FlagCaptured(AFlag* Flag, AFlagZone* Zone)
{
}