#include "SBZBeaconActionPhaseClient.h"
#include "Net/UnrealNetwork.h"

void ASBZBeaconActionPhaseClient::ServerSetPlayerInfo_Implementation(const FSBZLobbyCharacterInfo& PlayerInfo) {
}
bool ASBZBeaconActionPhaseClient::ServerSetPlayerInfo_Validate(const FSBZLobbyCharacterInfo& PlayerInfo) {
    return true;
}

void ASBZBeaconActionPhaseClient::ServerReserveSlot_Implementation(const TArray<FUniqueNetIdRepl>& InPlayerIds) {
}
bool ASBZBeaconActionPhaseClient::ServerReserveSlot_Validate(const TArray<FUniqueNetIdRepl>& InPlayerIds) {
    return true;
}

void ASBZBeaconActionPhaseClient::ServerNotifyStartTravel_Implementation(const FUniqueNetIdRepl& PlayerId) {
}
bool ASBZBeaconActionPhaseClient::ServerNotifyStartTravel_Validate(const FUniqueNetIdRepl& PlayerId) {
    return true;
}

void ASBZBeaconActionPhaseClient::OnRep_CharactersInfo() {
}

void ASBZBeaconActionPhaseClient::NotifyMissionEnd_Implementation(const FSBZMissionEndContextHandle& ContextHandle) {
}

void ASBZBeaconActionPhaseClient::ClientTravelConnectionTimeout() {
}

void ASBZBeaconActionPhaseClient::ClientStartTravelAck_Implementation(const ESBZOnlineCode& Result) {
}

void ASBZBeaconActionPhaseClient::ClientReserveSlotAck_Implementation(bool bWasSuccessful, const FSBZSelectedMissionInfo& HostMissionInfo) {
}

void ASBZBeaconActionPhaseClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZBeaconActionPhaseClient, PlayersInfo);
}

ASBZBeaconActionPhaseClient::ASBZBeaconActionPhaseClient() {
}

