#include "SBZDangerComponent.h"

void UDEPRECATED_SBZDangerComponent::Unregister() {
}

void UDEPRECATED_SBZDangerComponent::TimerElapsed() {
}

void UDEPRECATED_SBZDangerComponent::Register() {
}

bool UDEPRECATED_SBZDangerComponent::GetIsRegistered() const {
    return false;
}

UDEPRECATED_SBZDangerComponent::UDEPRECATED_SBZDangerComponent() {
    this->bAutoUpdateEnabled = false;
    this->bRegisterAutomatically = false;
    this->Timeout = 1;
    this->bIsRegistered = false;
}

