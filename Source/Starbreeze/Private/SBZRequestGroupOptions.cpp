#include "SBZRequestGroupOptions.h"

FSBZRequestGroupOptions::FSBZRequestGroupOptions() {
    this->Priority = 0;
    this->Delay = 1;
    this->Spacing = 1;
    this->Timeout = 1;
    this->CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::Undefined;
    this->bFallBackToSpawnerSpawnBehaviors = false;
}

