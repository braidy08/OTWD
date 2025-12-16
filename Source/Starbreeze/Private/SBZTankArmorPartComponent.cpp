#include "SBZTankArmorPartComponent.h"

USBZTankArmorPartComponent::USBZTankArmorPartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartRemovedEvent = NULL;
    this->OverridePhysicalMaterial = NULL;
    this->DefaultDurability = 1;
}

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


