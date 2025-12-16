#include "OTWDHordeRelocator.h"

AOTWDHordeRelocator::AOTWDHordeRelocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCreateRoamingVolume = false;
    this->SpawnBehaviour = NULL;
}

void AOTWDHordeRelocator::SetRelocatorEnabled(bool bEnabled) {
}

void AOTWDHordeRelocator::SetAttachedRelocatorsEnabled(const AActor* ParentActor, bool bEnabled) {
}

bool AOTWDHordeRelocator::IsRelocatorEnabled() {
    return false;
}


