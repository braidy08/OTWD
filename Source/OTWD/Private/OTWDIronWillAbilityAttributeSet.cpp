#include "OTWDIronWillAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDIronWillAbilityAttributeSet::OnRep_StaminaMod() {
}

void UOTWDIronWillAbilityAttributeSet::OnRep_DurationBonus() {
}

void UOTWDIronWillAbilityAttributeSet::OnRep_Duration() {
}

void UOTWDIronWillAbilityAttributeSet::OnRep_DamageResistMod() {
}

void UOTWDIronWillAbilityAttributeSet::OnRep_Cooldown() {
}

void UOTWDIronWillAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDIronWillAbilityAttributeSet, Duration);
    DOREPLIFETIME(UOTWDIronWillAbilityAttributeSet, DamageResistMod);
    DOREPLIFETIME(UOTWDIronWillAbilityAttributeSet, CoolDown);
    DOREPLIFETIME(UOTWDIronWillAbilityAttributeSet, StaminaMod);
    DOREPLIFETIME(UOTWDIronWillAbilityAttributeSet, DurationBonus);
}

UOTWDIronWillAbilityAttributeSet::UOTWDIronWillAbilityAttributeSet() {
    this->Duration = 1;
    this->DamageResistMod = 1;
    this->CoolDown = 1;
    this->StaminaMod = 1;
    this->DurationBonus = 1;
}

