#include "OTWDMolotovAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDMolotovAbilityAttributeSet::OnRep_FireSpeedMod() {
}

void UOTWDMolotovAbilityAttributeSet::OnRep_FireRadius() {
}

void UOTWDMolotovAbilityAttributeSet::OnRep_FireDuration() {
}

void UOTWDMolotovAbilityAttributeSet::OnRep_FireDamage() {
}

void UOTWDMolotovAbilityAttributeSet::OnRep_ExplosionRadius() {
}

void UOTWDMolotovAbilityAttributeSet::OnRep_ExplosionDamage() {
}

void UOTWDMolotovAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDMolotovAbilityAttributeSet, FireRadius);
    DOREPLIFETIME(UOTWDMolotovAbilityAttributeSet, FireDamage);
    DOREPLIFETIME(UOTWDMolotovAbilityAttributeSet, FireDuration);
    DOREPLIFETIME(UOTWDMolotovAbilityAttributeSet, FireSpeedMod);
    DOREPLIFETIME(UOTWDMolotovAbilityAttributeSet, ExplosionRadius);
    DOREPLIFETIME(UOTWDMolotovAbilityAttributeSet, ExplosionDamage);
}

UOTWDMolotovAbilityAttributeSet::UOTWDMolotovAbilityAttributeSet() {
    this->FireRadius = 1;
    this->FireDamage = 1;
    this->FireDuration = 1;
    this->FireSpeedMod = 1;
    this->ExplosionRadius = 1;
    this->ExplosionDamage = 1;
}

