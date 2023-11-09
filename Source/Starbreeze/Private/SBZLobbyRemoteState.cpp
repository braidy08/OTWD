#include "SBZLobbyRemoteState.h"
#include "Net/UnrealNetwork.h"

void ASBZLobbyRemoteState::TryToFreeSlot(FUniqueNetIdRepl ReserverPlayerId) {
}

void ASBZLobbyRemoteState::OnRep_LobbyInfo() {
}

void ASBZLobbyRemoteState::HandleGameStateChanged(FName NewState) {
}

void ASBZLobbyRemoteState::BroadcastWaitGameTimerStarted_Implementation() {
}

void ASBZLobbyRemoteState::BroadcastRemotePlayerAcceptedMatch_Implementation() {
}

void ASBZLobbyRemoteState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLobbyRemoteState, PlayersJoinInfo);
    DOREPLIFETIME(ASBZLobbyRemoteState, PlayersInfo);
    DOREPLIFETIME(ASBZLobbyRemoteState, LobbyTimeout);
}

ASBZLobbyRemoteState::ASBZLobbyRemoteState() {
    this->SlotReservationTimeout = 1;
    this->LobbyTravelTimeoutTime = 1;
    this->LobbyTimeout = 0;
}

