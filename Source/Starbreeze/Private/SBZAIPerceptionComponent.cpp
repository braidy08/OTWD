#include "SBZAIPerceptionComponent.h"

USBZAIPerceptionComponent::USBZAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsActive = true;
    this->TickRate = 1;
    this->TickFraction = 1;
    this->AlertnessComponent = NULL;
    this->IgnoreFactionComponent = NULL;
    this->AggroSystemComponent = NULL;
    this->PerceptionMemoryComponent = NULL;
    this->OwnerController = NULL;
    this->AIOwnerCharacter = NULL;
}

void USBZAIPerceptionComponent::RemoveIgnoreTag(const FGameplayTag& Tag) {
}

bool USBZAIPerceptionComponent::IsSightEnabled() {
    return false;
}

bool USBZAIPerceptionComponent::IsHearingEnabled() {
    return false;
}

bool USBZAIPerceptionComponent::IsDecoyEnabled() {
    return false;
}

void USBZAIPerceptionComponent::EnableSight() {
}

void USBZAIPerceptionComponent::EnableHearing() {
}

void USBZAIPerceptionComponent::EnableDecoy() {
}

void USBZAIPerceptionComponent::DisableSight() {
}

void USBZAIPerceptionComponent::DisableHearing() {
}

void USBZAIPerceptionComponent::DisableDecoy() {
}

void USBZAIPerceptionComponent::AddIgnoreTag(const FGameplayTag& Tag) {
}


