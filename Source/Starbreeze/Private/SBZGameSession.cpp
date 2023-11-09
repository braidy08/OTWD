#include "SBZGameSession.h"

void ASBZGameSession::UnregisterTravelingClient(const FUniqueNetIdRepl& ClientId) {
}

void ASBZGameSession::TryToFreeSlot(FUniqueNetIdRepl ReservedPlayerId) {
}

void ASBZGameSession::OnMissionStart() {
}

void ASBZGameSession::OnMissionEnd() {
}

void ASBZGameSession::HandleStateEntered(FName StateName) {
}

void ASBZGameSession::HandlePlayerRemoved(APlayerState* PlayerState) {
}

void ASBZGameSession::HandlePlayerPossesed(AController* Controller) {
}

void ASBZGameSession::HandlePlayerJoined(APlayerState* PlayerState) {
}

void ASBZGameSession::CheckPlayersPing() {
}

ASBZGameSession::ASBZGameSession() {
    this->PingCheckPeriod = 1;
    this->MaxHighPingCount = 0;
    this->MaxPingThreshold = 1;
    this->SlotReservationTimeout = 1;
    this->LoadingTimeout = 1;
}

