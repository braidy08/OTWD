#include "SBZAssaultManager.h"

void ASBZAssaultManager::OnActorKilled(ASBZCharacter* KilledCharacter) {
}

void ASBZAssaultManager::OnActorDestroyed(AActor* Actor) {
}

ASBZAssaultManager::ASBZAssaultManager() {
    this->EnagageRatio = 3;
    this->EnagageCooldown = 1;
}

