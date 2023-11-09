#include "SBZInteractionAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZInteractionAttributeSet::OnRep_TrapInteractionSpeedMultiplier(float OldValue) {
}

void USBZInteractionAttributeSet::OnRep_ReviveInteractionSpeedMultiplier(float OldValue) {
}

void USBZInteractionAttributeSet::OnRep_DefaultInteractionSpeedMultiplier(float OldValue) {
}

void USBZInteractionAttributeSet::OnRep_CraftingSpeedMultiplier(float OldValue) {
}

FGameplayAttribute USBZInteractionAttributeSet::GetTrapInteractionSpeedMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZInteractionAttributeSet::GetReviveInteractionSpeedMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZInteractionAttributeSet::GetReviveHealthAmountAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZInteractionAttributeSet::GetReviveArmorAmountAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZInteractionAttributeSet::GetDefaultInteractionSpeedMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZInteractionAttributeSet::GetCraftingSpeedMultiplierAttribute() {
    return FGameplayAttribute{};
}

void USBZInteractionAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZInteractionAttributeSet, DefaultInteractionSpeedMultiplier);
    DOREPLIFETIME(USBZInteractionAttributeSet, TrapInteractionSpeedMultiplier);
    DOREPLIFETIME(USBZInteractionAttributeSet, CraftingSpeedMultiplier);
    DOREPLIFETIME(USBZInteractionAttributeSet, ReviveInteractionSpeedMultiplier);
}

USBZInteractionAttributeSet::USBZInteractionAttributeSet() {
    this->DefaultInteractionSpeedMultiplier = 1;
    this->TrapInteractionSpeedMultiplier = 1;
    this->CraftingSpeedMultiplier = 1;
    this->ReviveInteractionSpeedMultiplier = 1;
    this->ReviveHealthAmount = 1;
    this->ReviveArmorAmount = 1;
}

