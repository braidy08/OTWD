#include "SBZWeaponAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZWeaponAttributeSet::OnRep_WoundChanceMultiplier(float OldValue) {
}

void USBZWeaponAttributeSet::OnRep_StatusEffectChanceModifier(float OldValue) {
}

void USBZWeaponAttributeSet::OnRep_EquipSpeed(float OldValue) {
}

void USBZWeaponAttributeSet::OnRep_DamageMultiplier(float OldValue) {
}

void USBZWeaponAttributeSet::OnRep_DamageModifier(float OldValue) {
}

void USBZWeaponAttributeSet::OnRep_ArmorDamageMultiplier(float OldValue) {
}

FGameplayAttribute USBZWeaponAttributeSet::GetWoundChanceMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZWeaponAttributeSet::GetStatusEffectChanceModifierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZWeaponAttributeSet::GetEquipSpeedAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZWeaponAttributeSet::GetDamageMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZWeaponAttributeSet::GetDamageModifierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZWeaponAttributeSet::GetArmorDamageMultiplierAttribute() {
    return FGameplayAttribute{};
}

void USBZWeaponAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZWeaponAttributeSet, DamageModifier);
    DOREPLIFETIME(USBZWeaponAttributeSet, DamageMultiplier);
    DOREPLIFETIME(USBZWeaponAttributeSet, ArmorDamageMultiplier);
    DOREPLIFETIME(USBZWeaponAttributeSet, EquipSpeed);
    DOREPLIFETIME(USBZWeaponAttributeSet, StatusEffectChanceModifier);
    DOREPLIFETIME(USBZWeaponAttributeSet, WoundChanceMultiplier);
}

USBZWeaponAttributeSet::USBZWeaponAttributeSet() {
    this->DamageModifier = 1;
    this->DamageMultiplier = 1;
    this->ArmorDamageMultiplier = 1;
    this->EquipSpeed = 1;
    this->StatusEffectChanceModifier = 1;
    this->WoundChanceMultiplier = 1;
}

