#include "OTWDCampDefenceAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDCampDefenceAttributeSet::OnRep_CampDefencePreparationTimerModifier(float OldValue) {
}

FGameplayAttribute UOTWDCampDefenceAttributeSet::GetCampDefencePreparationTimerModifierAttribute() {
    return FGameplayAttribute{};
}

void UOTWDCampDefenceAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDCampDefenceAttributeSet, CampDefencePreparationTimerModifier);
}

UOTWDCampDefenceAttributeSet::UOTWDCampDefenceAttributeSet() {
    this->CampDefencePreparationTimerModifier = 1;
}

