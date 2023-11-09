#include "OTWDLobbyRemoteState.h"
#include "Net/UnrealNetwork.h"

void AOTWDLobbyRemoteState::OnRep_StatsInfo() {
}

void AOTWDLobbyRemoteState::OnRep_RewardsInfo() {
}

void AOTWDLobbyRemoteState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDLobbyRemoteState, RewardsInfo);
    DOREPLIFETIME(AOTWDLobbyRemoteState, StatsInfo);
}

AOTWDLobbyRemoteState::AOTWDLobbyRemoteState() {
}

