#include "SBZAIHumanTankComponent.h"

void USBZAIHumanTankComponent::OnTimerEnd() {
}

void USBZAIHumanTankComponent::OnStaggerExit() {
}

void USBZAIHumanTankComponent::OnStaggerEnter() {
}

void USBZAIHumanTankComponent::OnKilled(ASBZCharacter* KilledCharacter) {
}

void USBZAIHumanTankComponent::Multicast_SetStaggerState_Implementation(ESBZTankStaggerState NewStaggerState) {
}

float USBZAIHumanTankComponent::GetRequiredDamageUntilStagger() const {
    return 0.0f;
}

float USBZAIHumanTankComponent::GetCurrentDamageUntilStagger() const {
    return 0.0f;
}

USBZAIHumanTankComponent::USBZAIHumanTankComponent() {
    this->DamageMultiplier = 1;
    this->HeadshotMultiplier = 1;
    this->StaggerTime = 1;
    this->DefaultDamageUntilStagger = 1;
    this->LowHurtReaction = NULL;
    this->MidHurtReaction = NULL;
    this->HighHurtReaction = NULL;
}

