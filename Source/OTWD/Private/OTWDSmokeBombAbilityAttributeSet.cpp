#include "OTWDSmokeBombAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

UOTWDSmokeBombAbilityAttributeSet::UOTWDSmokeBombAbilityAttributeSet() {
    this->SmokeRadius = 1;
    this->SmokeDuration = 1;
    this->SmokeDamageMod = 1;
    this->SlowRadius = 1;
    this->SlowDuration = 1;
    this->ChokeDuration = 1;
}

void UOTWDSmokeBombAbilityAttributeSet::OnRep_SmokeRadius() {
}

void UOTWDSmokeBombAbilityAttributeSet::OnRep_SmokeDuration() {
}

void UOTWDSmokeBombAbilityAttributeSet::OnRep_SmokeDamageMod() {
}

void UOTWDSmokeBombAbilityAttributeSet::OnRep_SlowRadius() {
}

void UOTWDSmokeBombAbilityAttributeSet::OnRep_SlowDuration() {
}

void UOTWDSmokeBombAbilityAttributeSet::OnRep_ChokeDuration() {
}

void UOTWDSmokeBombAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDSmokeBombAbilityAttributeSet, SmokeRadius);
    DOREPLIFETIME(UOTWDSmokeBombAbilityAttributeSet, SmokeDuration);
    DOREPLIFETIME(UOTWDSmokeBombAbilityAttributeSet, SmokeDamageMod);
    DOREPLIFETIME(UOTWDSmokeBombAbilityAttributeSet, SlowRadius);
    DOREPLIFETIME(UOTWDSmokeBombAbilityAttributeSet, SlowDuration);
    DOREPLIFETIME(UOTWDSmokeBombAbilityAttributeSet, ChokeDuration);
}


