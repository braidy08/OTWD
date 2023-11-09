#include "SBZStrengthAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZStrengthAttributeSet::RegisterStrengthEvents() {
}

void USBZStrengthAttributeSet::OnRep_StrengthRegenRate(float OldValue) {
}

void USBZStrengthAttributeSet::OnRep_StrengthMaximum(float OldValue) {
}

void USBZStrengthAttributeSet::OnRep_Strength(float OldValue) {
}

FGameplayAttribute USBZStrengthAttributeSet::GetStrengthRegenRateAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZStrengthAttributeSet::GetStrengthMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZStrengthAttributeSet::GetStrengthAttribute() {
    return FGameplayAttribute{};
}

void USBZStrengthAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZStrengthAttributeSet, Strength);
    DOREPLIFETIME(USBZStrengthAttributeSet, StrengthMaximum);
    DOREPLIFETIME(USBZStrengthAttributeSet, StrengthRegenRate);
}

USBZStrengthAttributeSet::USBZStrengthAttributeSet() {
    this->Strength = 1;
    this->StrengthMaximum = 1;
    this->StrengthRegenRate = 1;
}

