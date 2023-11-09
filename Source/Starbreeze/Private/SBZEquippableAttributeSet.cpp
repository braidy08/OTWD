#include "SBZEquippableAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZEquippableAttributeSet::OnRep_MaxUses(float OldValue) {
}

void USBZEquippableAttributeSet::OnRep_CurrentUses(float OldValue) {
}

void USBZEquippableAttributeSet::OnRep_CostMultiplier(float OldValue) {
}

FGameplayAttribute USBZEquippableAttributeSet::GetMaxUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZEquippableAttributeSet::GetCurrentUsesAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZEquippableAttributeSet::GetCostMultiplierAttribute() {
    return FGameplayAttribute{};
}

void USBZEquippableAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZEquippableAttributeSet, MaxUses);
    DOREPLIFETIME(USBZEquippableAttributeSet, CurrentUses);
    DOREPLIFETIME(USBZEquippableAttributeSet, CostMultiplier);
}

USBZEquippableAttributeSet::USBZEquippableAttributeSet() {
    this->MaxUses = 1;
    this->CurrentUses = 1;
    this->CostMultiplier = 1;
}

