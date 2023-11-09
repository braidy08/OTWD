#include "SBZPlayerDownedAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZPlayerDownedAttributeSet::OnRep_MaxLastStands(float OldValue) {
}

void USBZPlayerDownedAttributeSet::OnRep_LastStandDuration(float OldValue) {
}

FGameplayAttribute USBZPlayerDownedAttributeSet::GetMaxLastStandsAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZPlayerDownedAttributeSet::GetLastStandDurationAttribute() {
    return FGameplayAttribute{};
}

void USBZPlayerDownedAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerDownedAttributeSet, LastStandDuration);
    DOREPLIFETIME(USBZPlayerDownedAttributeSet, MaxLastStands);
}

USBZPlayerDownedAttributeSet::USBZPlayerDownedAttributeSet() {
    this->LastStandDuration = 1;
    this->MaxLastStands = 1;
}

