#include "SBZAmbientSoundComponent.h"

USBZAmbientSoundComponent::USBZAmbientSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkAudioEvent = NULL;
    this->ActiveAreaAttenuationScale = 1;
    this->DefaultAttenuation = 1;
    this->bUseDefaultAttenuation = false;
    this->AmbientAkComponent = NULL;
    this->AttenuationSquared = 1;
    this->bIsSoundComponentEnabled = true;
}

void USBZAmbientSoundComponent::SetSwitchState(const FString& InSwitchGroup, const FString& InSwitchState) {
}

bool USBZAmbientSoundComponent::IsAmbientSoundComponentEnabled() const {
    return false;
}

float USBZAmbientSoundComponent::GetAttenuation() const {
    return 0.0f;
}

void USBZAmbientSoundComponent::EnableAmbientSoundComponent() {
}

void USBZAmbientSoundComponent::DisableAmbientSoundComponent(UAkAudioEvent* AkAudioCloseEvent, const FString& NewEventName) {
}


