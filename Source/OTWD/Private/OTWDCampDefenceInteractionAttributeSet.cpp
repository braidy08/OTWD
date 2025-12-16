#include "OTWDCampDefenceInteractionAttributeSet.h"
#include "Net/UnrealNetwork.h"

UOTWDCampDefenceInteractionAttributeSet::UOTWDCampDefenceInteractionAttributeSet() {
    this->CraftingResourceBoxCooldownMultiplier = 1;
    this->AmmoBoxCooldownMultiplier = 1;
}

void UOTWDCampDefenceInteractionAttributeSet::OnRep_CraftingResourceBoxCooldownMultiplier(float OldValue) {
}

void UOTWDCampDefenceInteractionAttributeSet::OnRep_AmmoBoxCooldownMultiplier(float OldValue) {
}

FGameplayAttribute UOTWDCampDefenceInteractionAttributeSet::GetCraftingResourceBoxCooldownMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDCampDefenceInteractionAttributeSet::GetAmmoBoxCooldownMultiplierAttribute() {
    return FGameplayAttribute{};
}

void UOTWDCampDefenceInteractionAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDCampDefenceInteractionAttributeSet, CraftingResourceBoxCooldownMultiplier);
    DOREPLIFETIME(UOTWDCampDefenceInteractionAttributeSet, AmmoBoxCooldownMultiplier);
}


