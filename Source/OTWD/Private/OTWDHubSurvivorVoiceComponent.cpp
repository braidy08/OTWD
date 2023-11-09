#include "OTWDHubSurvivorVoiceComponent.h"

void UOTWDHubSurvivorVoiceComponent::Say(UAkAudioEvent* AudioEvent) {
}

UOTWDHubSurvivorVoiceComponent::UOTWDHubSurvivorVoiceComponent() {
    this->AkComponentVoice = NULL;
    this->VoiceAttachPoint = TEXT("Head");
}

