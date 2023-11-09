#include "SBZPartyBeaconHost.h"

void ASBZPartyBeaconHost::NotifyClientFailedConnectionToLobby(const FUniqueNetIdRepl& PartyMemberNetId) {
}

void ASBZPartyBeaconHost::NotifyClientConnectedToLobby(const FUniqueNetIdRepl& PartyMemberNetId) {
}

void ASBZPartyBeaconHost::HandlePartyTravelTimeout() {
}

void ASBZPartyBeaconHost::FirePartyUpdated(APlayerState* ChangedPlayerState) {
}

void ASBZPartyBeaconHost::BroadcastPartyTravelled(ESBZOnlineCode Result) {
}

ASBZPartyBeaconHost::ASBZPartyBeaconHost() {
    this->PartyTravelTimeout = 1;
}

