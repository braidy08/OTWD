#include "OTWDTrueSurvivorAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDTrueSurvivorAbilityAttributeSet::OnRep_SpeedMod() {
}

void UOTWDTrueSurvivorAbilityAttributeSet::OnRep_HealthRegenMod() {
}

void UOTWDTrueSurvivorAbilityAttributeSet::OnRep_HealthRegenDelayMod() {
}

void UOTWDTrueSurvivorAbilityAttributeSet::OnRep_Duration() {
}

void UOTWDTrueSurvivorAbilityAttributeSet::OnRep_Cooldown() {
}

void UOTWDTrueSurvivorAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDTrueSurvivorAbilityAttributeSet, Duration);
    DOREPLIFETIME(UOTWDTrueSurvivorAbilityAttributeSet, CoolDown);
    DOREPLIFETIME(UOTWDTrueSurvivorAbilityAttributeSet, SpeedMod);
    DOREPLIFETIME(UOTWDTrueSurvivorAbilityAttributeSet, HealthRegenMod);
    DOREPLIFETIME(UOTWDTrueSurvivorAbilityAttributeSet, HealthRegenDelayMod);
}

UOTWDTrueSurvivorAbilityAttributeSet::UOTWDTrueSurvivorAbilityAttributeSet() {
    this->Duration = 1;
    this->CoolDown = 1;
    this->SpeedMod = 1;
    this->HealthRegenMod = 1;
    this->HealthRegenDelayMod = 1;
}

