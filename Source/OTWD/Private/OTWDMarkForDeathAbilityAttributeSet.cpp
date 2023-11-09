#include "OTWDMarkForDeathAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDMarkForDeathAbilityAttributeSet::OnRep_StaminaMod() {
}

void UOTWDMarkForDeathAbilityAttributeSet::OnRep_StaminaDuration() {
}

void UOTWDMarkForDeathAbilityAttributeSet::OnRep_SpeedMod() {
}

void UOTWDMarkForDeathAbilityAttributeSet::OnRep_MaxMarks() {
}

void UOTWDMarkForDeathAbilityAttributeSet::OnRep_HighlightRadius() {
}

void UOTWDMarkForDeathAbilityAttributeSet::OnRep_Duration() {
}

void UOTWDMarkForDeathAbilityAttributeSet::OnRep_DamageMod() {
}

void UOTWDMarkForDeathAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDMarkForDeathAbilityAttributeSet, Duration);
    DOREPLIFETIME(UOTWDMarkForDeathAbilityAttributeSet, MaxMarks);
    DOREPLIFETIME(UOTWDMarkForDeathAbilityAttributeSet, DamageMod);
    DOREPLIFETIME(UOTWDMarkForDeathAbilityAttributeSet, StaminaMod);
    DOREPLIFETIME(UOTWDMarkForDeathAbilityAttributeSet, StaminaDuration);
    DOREPLIFETIME(UOTWDMarkForDeathAbilityAttributeSet, SpeedMod);
    DOREPLIFETIME(UOTWDMarkForDeathAbilityAttributeSet, HighlightRadius);
}

UOTWDMarkForDeathAbilityAttributeSet::UOTWDMarkForDeathAbilityAttributeSet() {
    this->Duration = 1;
    this->MaxMarks = 1;
    this->DamageMod = 1;
    this->StaminaMod = 1;
    this->StaminaDuration = 1;
    this->SpeedMod = 1;
    this->HighlightRadius = 1;
}

