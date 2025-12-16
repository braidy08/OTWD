#include "SBZDangerComponent.h"

UDEPRECATED_SBZDangerComponent::UDEPRECATED_SBZDangerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoUpdateEnabled = false;
    this->bRegisterAutomatically = false;
    this->Timeout = 1;
    this->bIsRegistered = false;
}

void UDEPRECATED_SBZDangerComponent::Unregister() {
}

void UDEPRECATED_SBZDangerComponent::TimerElapsed() {
}

void UDEPRECATED_SBZDangerComponent::Register() {
}

bool UDEPRECATED_SBZDangerComponent::GetIsRegistered() const {
    return false;
}


