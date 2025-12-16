#include "SBZAITankComponent.h"

USBZAITankComponent::USBZAITankComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitArmorAudioEvent = NULL;
    this->HitWeakSpotAudioEvent = NULL;
}

void USBZAITankComponent::OnArmorPartDestroyed(USBZTankArmorPartComponent* DestroyedArmorPart) {
}

void USBZAITankComponent::AddArmorPart(USBZTankArmorPartComponent* InTankArmorPart) {
}


