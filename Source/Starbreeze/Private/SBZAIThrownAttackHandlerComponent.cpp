#include "SBZAIThrownAttackHandlerComponent.h"

USBZAIThrownAttackHandlerComponent::USBZAIThrownAttackHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CooldownSuccessful = 1;
    this->CooldownUnsuccessful = 1;
    this->bEnableDebugVisualization = false;
    this->DebugTime = 1;
    this->CurrentThrowWeapon = NULL;
    this->LastThrownActor = NULL;
    this->OwnerCharacter = NULL;
    this->MemoryComponent = NULL;
}

void USBZAIThrownAttackHandlerComponent::Multicast_StartThrowAnimation_Implementation(const USBZAIThrowWeapon* ThrowWeapon) {
}

EThrownAttackState USBZAIThrownAttackHandlerComponent::GetCurrentAttackState() const {
    return EThrownAttackState::Idle;
}


