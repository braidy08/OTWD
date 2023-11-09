#include "SBZMeleeAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZMeleeAttributeSet::OnRep_StaminaCostMultiplier(float OldValue) {
}

void USBZMeleeAttributeSet::OnRep_LightDamageMultiplier(float OldValue) {
}

void USBZMeleeAttributeSet::OnRep_HeavyDamageMultiplier(float OldValue) {
}

FGameplayAttribute USBZMeleeAttributeSet::GetStaminaCostMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZMeleeAttributeSet::GetLightDamageMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZMeleeAttributeSet::GetHeavyDamageMultiplierAttribute() {
    return FGameplayAttribute{};
}

void USBZMeleeAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZMeleeAttributeSet, StaminaCostMultiplier);
    DOREPLIFETIME(USBZMeleeAttributeSet, LightDamageMultiplier);
    DOREPLIFETIME(USBZMeleeAttributeSet, HeavyDamageMultiplier);
}

USBZMeleeAttributeSet::USBZMeleeAttributeSet() {
    this->StaminaCostMultiplier = 1;
    this->LightDamageMultiplier = 1;
    this->HeavyDamageMultiplier = 1;
}

