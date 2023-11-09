#include "SBZAIPerceptionComponent.h"

void USBZAIPerceptionComponent::RemoveIgnoreTag(const FGameplayTag& Tag) {
}

bool USBZAIPerceptionComponent::IsSightEnabled() {
    return false;
}

bool USBZAIPerceptionComponent::IsHearingEnabled() {
    return false;
}

void USBZAIPerceptionComponent::EnableSight() {
}

void USBZAIPerceptionComponent::EnableHearing() {
}

void USBZAIPerceptionComponent::DisableSight() {
}

void USBZAIPerceptionComponent::DisableHearing() {
}

void USBZAIPerceptionComponent::AddIgnoreTag(const FGameplayTag& Tag) {
}

USBZAIPerceptionComponent::USBZAIPerceptionComponent() {
    this->TickRate = 1;
    this->TickFraction = 1;
    this->AlertnessComponent = NULL;
    this->IgnoreFactionComponent = NULL;
    this->AggroSystemComponent = NULL;
    this->PerceptionMemoryComponent = NULL;
    this->OwnerController = NULL;
}

