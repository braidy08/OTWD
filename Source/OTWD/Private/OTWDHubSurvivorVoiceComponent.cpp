#include "OTWDHubSurvivorVoiceComponent.h"

UOTWDHubSurvivorVoiceComponent::UOTWDHubSurvivorVoiceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AkComponentVoice = NULL;
    this->VoiceAttachPoint = TEXT("Head");
}

void UOTWDHubSurvivorVoiceComponent::Say(UAkAudioEvent* AudioEvent) {
}


