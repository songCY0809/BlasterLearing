#include "BlasterGameState.h"
#include "Net/UnrealNetwork.h"
#include "BlasterLearing/PlayerState/BlasterPlayerState.h"
#include "BlasterLearing/PlayerController/BlasterPlayerController.h"

void ABlasterGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlasterGameState, TopScoringPlayers);
	//DOREPLIFETIME(ABlasterGameState, RedTeamScore);
	//DOREPLIFETIME(ABlasterGameState, BlueTeamScore);
}

void ABlasterGameState::UpdateTopScore(ABlasterPlayerState* ScoringPlayer)
{
	if (TopScoringPlayers.Num() == 0)
	{
		TopScoringPlayers.Add(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
	else if (ScoringPlayer->GetScore() == TopScore)
	{
		TopScoringPlayers.AddUnique(ScoringPlayer);
	}
	else if (ScoringPlayer->GetScore() > TopScore)
	{
		TopScoringPlayers.Empty();
		TopScoringPlayers.AddUnique(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
}

//

void ABlasterGameState::RedTeamScores() {}

void ABlasterGameState::BlueTeamScores() {}

void ABlasterGameState::OnRep_RedTeamScore() {}

void ABlasterGameState::OnRep_BlueTeamScore() {}