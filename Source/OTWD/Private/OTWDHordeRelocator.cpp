#include "OTWDHordeRelocator.h"

void AOTWDHordeRelocator::SetRelocatorEnabled(bool bEnabled) {
}

void AOTWDHordeRelocator::SetAttachedRelocatorsEnabled(const AActor* ParentActor, bool bEnabled) {
}

bool AOTWDHordeRelocator::IsRelocatorEnabled() {
    return false;
}

AOTWDHordeRelocator::AOTWDHordeRelocator() {
    this->SpawnRadius = 1;
    this->SpawnBehaviour = NULL;
    this->bIsRelocatorEnabled = true;
}

