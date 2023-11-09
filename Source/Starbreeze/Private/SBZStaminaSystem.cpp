#include "SBZStaminaSystem.h"

void USBZStaminaSystem::OnStaminaEmptyRPC_Implementation() {
}

void USBZStaminaSystem::Initialize(USBZCharacterActionHandler* ActionHandler, USBZPropertyComponent* Component) {
}

float USBZStaminaSystem::GetStaminaPercentage() const {
    return 0.0f;
}

float USBZStaminaSystem::GetMaxStamina() const {
    return 0.0f;
}

float USBZStaminaSystem::GetCurrentStamina() const {
    return 0.0f;
}

USBZStaminaSystem::USBZStaminaSystem() {
    this->RunDrainPerSecond = 1;
    this->RechargeDelay = 1;
    this->RechargeTime = 1;
    this->ExtraRechargeTimeOnEmpty = 1;
    this->StaminaClass = NULL;
    this->OwningPlayerCharacter = NULL;
    this->CharacterActionHandler = NULL;
    this->PropertyComponent = NULL;
    this->StaminaProperty = NULL;
}

