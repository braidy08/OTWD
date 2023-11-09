#include "OTWDMedBagAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDMedBagAbilityAttributeSet::OnRep_UseTime() {
}

void UOTWDMedBagAbilityAttributeSet::OnRep_UseCount() {
}

void UOTWDMedBagAbilityAttributeSet::OnRep_StaminaMod() {
}

void UOTWDMedBagAbilityAttributeSet::OnRep_InstantHeal() {
}

void UOTWDMedBagAbilityAttributeSet::OnRep_HealOverTime() {
}

void UOTWDMedBagAbilityAttributeSet::OnRep_HealDuration() {
}

void UOTWDMedBagAbilityAttributeSet::OnRep_DamageResistMod() {
}

void UOTWDMedBagAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDMedBagAbilityAttributeSet, UseTime);
    DOREPLIFETIME(UOTWDMedBagAbilityAttributeSet, UseCount);
    DOREPLIFETIME(UOTWDMedBagAbilityAttributeSet, InstantHeal);
    DOREPLIFETIME(UOTWDMedBagAbilityAttributeSet, HealOverTime);
    DOREPLIFETIME(UOTWDMedBagAbilityAttributeSet, HealDuration);
    DOREPLIFETIME(UOTWDMedBagAbilityAttributeSet, DamageResistMod);
    DOREPLIFETIME(UOTWDMedBagAbilityAttributeSet, StaminaMod);
}

UOTWDMedBagAbilityAttributeSet::UOTWDMedBagAbilityAttributeSet() {
    this->UseTime = 1;
    this->UseCount = 1;
    this->InstantHeal = 1;
    this->HealOverTime = 1;
    this->HealDuration = 1;
    this->DamageResistMod = 1;
    this->StaminaMod = 1;
}

