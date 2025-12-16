#include "SBZAIShoveHandlerComponent.h"

USBZAIShoveHandlerComponent::USBZAIShoveHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsTank = false;
    this->TankShoveHitSuccessSoundEvent = NULL;
}

void USBZAIShoveHandlerComponent::OnTimerEnd() {
}

void USBZAIShoveHandlerComponent::OnRecoverEnd() {
}

void USBZAIShoveHandlerComponent::OnAnticipationEnd() {
}

void USBZAIShoveHandlerComponent::Multicast_SetShoveState_Implementation(ESBZAIShoveInfo NewShoveState) {
}

ESBZAIShoveInfo USBZAIShoveHandlerComponent::GetShoveState() const {
    return ESBZAIShoveInfo::SI_NONE;
}

bool USBZAIShoveHandlerComponent::CanShove() const {
    return false;
}


