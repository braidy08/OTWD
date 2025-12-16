#include "SBZHealthSystem.h"

USBZHealthSystem::USBZHealthSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthClass = NULL;
    this->ArmorClass = NULL;
    this->ArmorModifierClass = NULL;
    this->ArmorRechargeDelay = 1;
}

void USBZHealthSystem::Initialize(USBZPropertyComponent* Component) {
}

float USBZHealthSystem::GetMaxHealth() const {
    return 0.0f;
}

float USBZHealthSystem::GetMaxArmor() const {
    return 0.0f;
}

float USBZHealthSystem::GetHealthPercentage() const {
    return 0.0f;
}

float USBZHealthSystem::GetCurrentHealth() const {
    return 0.0f;
}

float USBZHealthSystem::GetCurrentArmor() const {
    return 0.0f;
}

float USBZHealthSystem::GetArmorPercentage() const {
    return 0.0f;
}


