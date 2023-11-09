#include "OTWDFieldMedicAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDFieldMedicAbilityAttributeSet::OnRep_SpeedBuffMod() {
}

void UOTWDFieldMedicAbilityAttributeSet::OnRep_ReviveSpeedMod() {
}

void UOTWDFieldMedicAbilityAttributeSet::OnRep_ReviveHealthMod() {
}

void UOTWDFieldMedicAbilityAttributeSet::OnRep_HealthRegenMod() {
}

void UOTWDFieldMedicAbilityAttributeSet::OnRep_HealthRegenDelayMod() {
}

void UOTWDFieldMedicAbilityAttributeSet::OnRep_DamageResistMod() {
}

void UOTWDFieldMedicAbilityAttributeSet::OnRep_BuffDuration() {
}

void UOTWDFieldMedicAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDFieldMedicAbilityAttributeSet, ReviveSpeedMod);
    DOREPLIFETIME(UOTWDFieldMedicAbilityAttributeSet, ReviveHealthMod);
    DOREPLIFETIME(UOTWDFieldMedicAbilityAttributeSet, DamageResistMod);
    DOREPLIFETIME(UOTWDFieldMedicAbilityAttributeSet, HealthRegenMod);
    DOREPLIFETIME(UOTWDFieldMedicAbilityAttributeSet, HealthRegenDelayMod);
    DOREPLIFETIME(UOTWDFieldMedicAbilityAttributeSet, SpeedBuffMod);
    DOREPLIFETIME(UOTWDFieldMedicAbilityAttributeSet, BuffDuration);
}

UOTWDFieldMedicAbilityAttributeSet::UOTWDFieldMedicAbilityAttributeSet() {
    this->ReviveSpeedMod = 1;
    this->ReviveHealthMod = 1;
    this->DamageResistMod = 1;
    this->HealthRegenMod = 1;
    this->HealthRegenDelayMod = 1;
    this->SpeedBuffMod = 1;
    this->BuffDuration = 1;
}

