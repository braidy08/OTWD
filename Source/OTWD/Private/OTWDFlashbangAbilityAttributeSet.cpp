#include "OTWDFlashbangAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDFlashbangAbilityAttributeSet::OnRep_StunRadius() {
}

void UOTWDFlashbangAbilityAttributeSet::OnRep_StunDuration() {
}

void UOTWDFlashbangAbilityAttributeSet::OnRep_LureRadius() {
}

void UOTWDFlashbangAbilityAttributeSet::OnRep_LureDuration() {
}

void UOTWDFlashbangAbilityAttributeSet::OnRep_DetonateDelay() {
}

void UOTWDFlashbangAbilityAttributeSet::OnRep_BlindRadius() {
}

void UOTWDFlashbangAbilityAttributeSet::OnRep_BlindDuration() {
}

void UOTWDFlashbangAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDFlashbangAbilityAttributeSet, DetonateDelay);
    DOREPLIFETIME(UOTWDFlashbangAbilityAttributeSet, BlindRadius);
    DOREPLIFETIME(UOTWDFlashbangAbilityAttributeSet, BlindDuration);
    DOREPLIFETIME(UOTWDFlashbangAbilityAttributeSet, StunRadius);
    DOREPLIFETIME(UOTWDFlashbangAbilityAttributeSet, StunDuration);
    DOREPLIFETIME(UOTWDFlashbangAbilityAttributeSet, LureRadius);
    DOREPLIFETIME(UOTWDFlashbangAbilityAttributeSet, LureDuration);
}

UOTWDFlashbangAbilityAttributeSet::UOTWDFlashbangAbilityAttributeSet() {
    this->DetonateDelay = 1;
    this->BlindRadius = 1;
    this->BlindDuration = 1;
    this->StunRadius = 1;
    this->StunDuration = 1;
    this->LureRadius = 1;
    this->LureDuration = 1;
}

