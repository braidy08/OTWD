#include "AkLateReverbComponent.h"

UAkLateReverbComponent::UAkLateReverbComponent() {
    this->bEnable = true;
    this->AuxBus = NULL;
    this->SendLevel = 1;
    this->FadeRate = 1;
    this->Priority = 1;
    this->NextLowerPriorityComponent = NULL;
}

