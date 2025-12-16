#include "SBZDrawAreaReplicationManager.h"
#include "Net/UnrealNetwork.h"

ASBZDrawAreaReplicationManager::ASBZDrawAreaReplicationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->LocalPlayerController = NULL;
}

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


