#include "OTWDHumanDetectionAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

UOTWDHumanDetectionAbilityAttributeSet::UOTWDHumanDetectionAbilityAttributeSet() {
    this->DetectionRange = 1;
    this->DetectionDuration = 1;
    this->DetectionCooldown = 1;
}

void UOTWDHumanDetectionAbilityAttributeSet::OnRep_DetectionRange() {
}

void UOTWDHumanDetectionAbilityAttributeSet::OnRep_DetectionDuration() {
}

void UOTWDHumanDetectionAbilityAttributeSet::OnRep_DetectionCooldown() {
}

void UOTWDHumanDetectionAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDHumanDetectionAbilityAttributeSet, DetectionRange);
    DOREPLIFETIME(UOTWDHumanDetectionAbilityAttributeSet, DetectionDuration);
    DOREPLIFETIME(UOTWDHumanDetectionAbilityAttributeSet, DetectionCooldown);
}


