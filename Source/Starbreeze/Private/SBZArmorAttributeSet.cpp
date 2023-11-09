#include "SBZArmorAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZArmorAttributeSet::RegisterArmorEvents() {
}

void USBZArmorAttributeSet::OnRep_ArmorRegenRate(float OldValue) {
}

void USBZArmorAttributeSet::OnRep_ArmorMaximum(float OldValue) {
}

void USBZArmorAttributeSet::OnRep_Armor(float OldValue) {
}

FGameplayAttribute USBZArmorAttributeSet::GetArmorRegenRateAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZArmorAttributeSet::GetArmorMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZArmorAttributeSet::GetArmorAttribute() {
    return FGameplayAttribute{};
}

void USBZArmorAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZArmorAttributeSet, armor);
    DOREPLIFETIME(USBZArmorAttributeSet, ArmorMaximum);
    DOREPLIFETIME(USBZArmorAttributeSet, ArmorRegenRate);
}

USBZArmorAttributeSet::USBZArmorAttributeSet() {
    this->armor = 1;
    this->ArmorMaximum = 1;
    this->ArmorRegenRate = 1;
}

