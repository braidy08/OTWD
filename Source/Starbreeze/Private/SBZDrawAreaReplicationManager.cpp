#include "SBZDrawAreaReplicationManager.h"
#include "Net/UnrealNetwork.h"

void ASBZDrawAreaReplicationManager::InitLocalPlayerID(ASBZPlayerState* PlayerState) {
}

void ASBZDrawAreaReplicationManager::HandleOutgoingDataQueue() {
}

void ASBZDrawAreaReplicationManager::CheckDrawAreaForBroadcast() {
}

void ASBZDrawAreaReplicationManager::BroadcastActionBuffer() {
}

void ASBZDrawAreaReplicationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDrawAreaReplicationManager, DrawAreaForBroadcast);
}

ASBZDrawAreaReplicationManager::ASBZDrawAreaReplicationManager() {
    this->LocalPlayerController = NULL;
}

