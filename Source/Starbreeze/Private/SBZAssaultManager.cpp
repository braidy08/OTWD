#include "SBZAssaultManager.h"

ASBZAssaultManager::ASBZAssaultManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnagageRatio = 3;
    this->EnagageCooldown = 1;
}

void ASBZAssaultManager::OnActorKilled(ASBZCharacter* KilledCharacter) {
}

void ASBZAssaultManager::OnActorDestroyed(AActor* Actor) {
}


