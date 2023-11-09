#include "SBZAITankComponent.h"

void USBZAITankComponent::OnArmorPartDestroyed(USBZTankArmorPartComponent* DestroyedArmorPart) {
}

void USBZAITankComponent::AddArmorPart(USBZTankArmorPartComponent* InTankArmorPart) {
}

USBZAITankComponent::USBZAITankComponent() {
    this->HitArmorAudioEvent = NULL;
    this->HitWeakSpotAudioEvent = NULL;
}

