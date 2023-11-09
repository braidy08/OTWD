#include "AIRandomRoamingComponent.h"

UAIRandomRoamingComponent::UAIRandomRoamingComponent() {
    this->VolumeSearchInterval = 1;
    this->PatrolLocationMemory = 0;
    this->bRandomPatrolEnabled = false;
}

