#include "SBZLobbyBeaconClient.h"
#include "Net/UnrealNetwork.h"

void ASBZLobbyBeaconClient::ServerUpdatePlayerInfo_Implementation(const FSBZLobbyCharacterInfo& PlayerInfo) {
}
bool ASBZLobbyBeaconClient::ServerUpdatePlayerInfo_Validate(const FSBZLobbyCharacterInfo& PlayerInfo) {
    return true;
}

void ASBZLobbyBeaconClient::ServerSetPlayerReadyToTravel_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}
bool ASBZLobbyBeaconClient::ServerSetPlayerReadyToTravel_Validate(const FUniqueNetIdRepl& InPlayerId) {
    return true;
}

void ASBZLobbyBeaconClient::ServerSetPlayerReady_Implementation(const FUniqueNetIdRepl& InPlayerId, bool bIsReady) {
}
bool ASBZLobbyBeaconClient::ServerSetPlayerReady_Validate(const FUniqueNetIdRepl& InPlayerId, bool bIsReady) {
    return true;
}

void ASBZLobbyBeaconClient::ServerSetPlayerAcceptedMatch_Implementation(const FUniqueNetIdRepl& InPlayerId, bool bIsConfirmed) {
}
bool ASBZLobbyBeaconClient::ServerSetPlayerAcceptedMatch_Validate(const FUniqueNetIdRepl& InPlayerId, bool bIsConfirmed) {
    return true;
}

void ASBZLobbyBeaconClient::ServerReserveSlot_Implementation(const TArray<FUniqueNetIdRepl>& InPlayerIds) {
}
bool ASBZLobbyBeaconClient::ServerReserveSlot_Validate(const TArray<FUniqueNetIdRepl>& InPlayerIds) {
    return true;
}

void ASBZLobbyBeaconClient::OnRep_LobbyState() {
}

void ASBZLobbyBeaconClient::ClientStopWaitingOtherPlayers_Implementation() {
}

void ASBZLobbyBeaconClient::ClientReserveSlotAck_Implementation(bool bWasSuccessful, const FSBZSelectedMissionInfo& HostMissionInfo) {
}

void ASBZLobbyBeaconClient::ClientMoveToServer_Implementation() {
}

void ASBZLobbyBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLobbyBeaconClient, LobbyState);
}

ASBZLobbyBeaconClient::ASBZLobbyBeaconClient() {
    this->LobbyState = NULL;
}

