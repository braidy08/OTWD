#include "OTWDZombieMovementComponent.h"

UOTWDZombieMovementComponent::UOTWDZombieMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Owner = NULL;
    this->ECC_PlayerBlocker = ECC_WorldStatic;
    this->NeighbourCountToBeStacked = 3;
    this->DistanceFromNeighbourToBeStacked = 1;
}


