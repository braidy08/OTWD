#include "SBZLobbyRemoteState.h"
#include "Net/UnrealNetwork.h"

ASBZLobbyRemoteState::ASBZLobbyRemoteState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SlotReservationTimeout = 1;
    this->LobbyTravelTimeoutTime = 1;
    this->LobbyTimeout = 0;
}

void ASBZLobbyRemoteState::TryToFreeSlot(FUniqueNetIdRepl ReserverPlayerId) {
}

void ASBZLobbyRemoteState::OnRep_LobbyTimeout() {
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


