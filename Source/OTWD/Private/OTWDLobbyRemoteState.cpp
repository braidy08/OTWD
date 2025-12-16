#include "OTWDLobbyRemoteState.h"
#include "Net/UnrealNetwork.h"

AOTWDLobbyRemoteState::AOTWDLobbyRemoteState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AOTWDLobbyRemoteState::OnRep_StatsInfo() {
}

void AOTWDLobbyRemoteState::OnRep_RewardsInfo() {
}

void AOTWDLobbyRemoteState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDLobbyRemoteState, RewardsInfo);
    DOREPLIFETIME(AOTWDLobbyRemoteState, StatsInfo);
}


