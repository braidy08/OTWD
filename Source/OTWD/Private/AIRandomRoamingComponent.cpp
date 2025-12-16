#include "AIRandomRoamingComponent.h"

UAIRandomRoamingComponent::UAIRandomRoamingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsActive = true;
    this->VolumeSearchInterval = 1;
    this->PatrolLocationMemory = 0;
    this->bRandomPatrolEnabled = false;
}


