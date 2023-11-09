#include "AkRoomComponent.h"

UAkRoomComponent::UAkRoomComponent() {
    this->bEnable = true;
    this->NextLowerPriorityComponent = NULL;
    this->Priority = 1;
    this->WallOcclusion = 1;
}

