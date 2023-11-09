#include "SBZNoiseAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZNoiseAttributeSet::OnRep_WalkingNoiseRangeMultiplier(float OldValue) {
}

void USBZNoiseAttributeSet::OnRep_TakedownNoiseRangeMultiplier(float OldValue) {
}

void USBZNoiseAttributeSet::OnRep_RunningNoiseRangeMultiplier(float OldValue) {
}

FGameplayAttribute USBZNoiseAttributeSet::GetWalkingNoiseRangeMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZNoiseAttributeSet::GetTakedownNoiseRangeMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZNoiseAttributeSet::GetRunningNoiseRangeMultiplierAttribute() {
    return FGameplayAttribute{};
}

void USBZNoiseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZNoiseAttributeSet, WalkingNoiseRangeMultiplier);
    DOREPLIFETIME(USBZNoiseAttributeSet, RunningNoiseRangeMultiplier);
    DOREPLIFETIME(USBZNoiseAttributeSet, TakedownNoiseRangeMultiplier);
}

USBZNoiseAttributeSet::USBZNoiseAttributeSet() {
    this->WalkingNoiseRangeMultiplier = 1;
    this->RunningNoiseRangeMultiplier = 1;
    this->TakedownNoiseRangeMultiplier = 1;
}

