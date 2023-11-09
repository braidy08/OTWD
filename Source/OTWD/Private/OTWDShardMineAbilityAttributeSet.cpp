#include "OTWDShardMineAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDShardMineAbilityAttributeSet::OnRep_WoundRadius() {
}

void UOTWDShardMineAbilityAttributeSet::OnRep_WoundDuration() {
}

void UOTWDShardMineAbilityAttributeSet::OnRep_WoundDamage() {
}

void UOTWDShardMineAbilityAttributeSet::OnRep_WoundChance() {
}

void UOTWDShardMineAbilityAttributeSet::OnRep_ExplosionRadius() {
}

void UOTWDShardMineAbilityAttributeSet::OnRep_ExplosionDamage() {
}

void UOTWDShardMineAbilityAttributeSet::OnRep_ArmoredDamageMod() {
}

void UOTWDShardMineAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDShardMineAbilityAttributeSet, ExplosionRadius);
    DOREPLIFETIME(UOTWDShardMineAbilityAttributeSet, ExplosionDamage);
    DOREPLIFETIME(UOTWDShardMineAbilityAttributeSet, ArmoredDamageMod);
    DOREPLIFETIME(UOTWDShardMineAbilityAttributeSet, WoundRadius);
    DOREPLIFETIME(UOTWDShardMineAbilityAttributeSet, WoundChance);
    DOREPLIFETIME(UOTWDShardMineAbilityAttributeSet, WoundDamage);
    DOREPLIFETIME(UOTWDShardMineAbilityAttributeSet, WoundDuration);
}

UOTWDShardMineAbilityAttributeSet::UOTWDShardMineAbilityAttributeSet() {
    this->ExplosionRadius = 1;
    this->ExplosionDamage = 1;
    this->ArmoredDamageMod = 1;
    this->WoundRadius = 1;
    this->WoundChance = 1;
    this->WoundDamage = 1;
    this->WoundDuration = 1;
}

