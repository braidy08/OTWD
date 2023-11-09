#include "SBZStaminaAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZStaminaAttributeSet::RegisterStaminaEvents() {
}

void USBZStaminaAttributeSet::OnRep_StaminaRegenRate(float OldValue) {
}

void USBZStaminaAttributeSet::OnRep_StaminaMaximum(float OldValue) {
}

void USBZStaminaAttributeSet::OnRep_StaminaLowThreshhold(float OldValue) {
}

void USBZStaminaAttributeSet::OnRep_StaminaDrainMultiplier(float OldValue) {
}

void USBZStaminaAttributeSet::OnRep_Stamina(float OldValue) {
}

FGameplayAttribute USBZStaminaAttributeSet::GetStaminaRegenRateAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZStaminaAttributeSet::GetStaminaMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZStaminaAttributeSet::GetStaminaLowThreshholdAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZStaminaAttributeSet::GetStaminaDrainMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZStaminaAttributeSet::GetStaminaAttribute() {
    return FGameplayAttribute{};
}

void USBZStaminaAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZStaminaAttributeSet, Stamina);
    DOREPLIFETIME(USBZStaminaAttributeSet, StaminaMaximum);
    DOREPLIFETIME(USBZStaminaAttributeSet, StaminaLowThreshhold);
    DOREPLIFETIME(USBZStaminaAttributeSet, StaminaRegenRate);
    DOREPLIFETIME(USBZStaminaAttributeSet, StaminaDrainMultiplier);
}

USBZStaminaAttributeSet::USBZStaminaAttributeSet() {
    this->Stamina = 1;
    this->StaminaMaximum = 1;
    this->StaminaLowThreshhold = 1;
    this->StaminaRegenRate = 1;
    this->StaminaDrainMultiplier = 1;
}

