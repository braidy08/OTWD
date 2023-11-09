#include "SBZTankArmorPartComponent.h"

void USBZTankArmorPartComponent::Replenish() {
}

bool USBZTankArmorPartComponent::IsRemoved() const {
    return false;
}

float USBZTankArmorPartComponent::GetDurabilityMaximum() const {
    return 0.0f;
}

float USBZTankArmorPartComponent::GetDurabilityCurrent() const {
    return 0.0f;
}

USBZTankArmorPartComponent::USBZTankArmorPartComponent() {
    this->PartRemovedEvent = NULL;
    this->OverridePhysicalMaterial = NULL;
    this->DefaultDurability = 1;
}

