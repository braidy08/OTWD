#include "SBZBaseInteractorComponent.h"

USBZBaseInteractorComponent::USBZBaseInteractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerAbilitySystem = NULL;
    this->OwnerCharacter = NULL;
    this->MaximumInteractionDistance = 1;
}

void USBZBaseInteractorComponent::SaySystemComment(ESBZVoiceComment Comment, bool bReplicated, ESBZVoicePriority InPlayingPriority) const {
}

int32 USBZBaseInteractorComponent::HandleOwnerGameplayEvent(const FGameplayTag& EventTag, const FGameplayEventData& Payload) const {
    return 0;
}

float USBZBaseInteractorComponent::GetOwnerAttribute(const FGameplayAttribute& Attribute) const {
    return 0.0f;
}

float USBZBaseInteractorComponent::GetInteractionProgress() const {
    return 0.0f;
}

USBZInteractableComponent* USBZBaseInteractorComponent::GetCurrentInteractable() const {
    return NULL;
}

bool USBZBaseInteractorComponent::CanInteractWithCurrentInteractable() const {
    return false;
}


