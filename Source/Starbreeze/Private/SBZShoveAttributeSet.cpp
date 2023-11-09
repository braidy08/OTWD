#include "SBZShoveAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZShoveAttributeSet::OnRep_ShoveRange(float OldValue) {
}

void USBZShoveAttributeSet::OnRep_ShoveImpulse(float OldValue) {
}

void USBZShoveAttributeSet::OnRep_ShoveDamage(float OldValue) {
}

void USBZShoveAttributeSet::OnRep_ShoveArcAngle(float OldValue) {
}

void USBZShoveAttributeSet::OnRep_RecoveryDuration(float OldValue) {
}

FGameplayAttribute USBZShoveAttributeSet::GetShoveRangeAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZShoveAttributeSet::GetShoveImpulseAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZShoveAttributeSet::GetShoveDamageAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZShoveAttributeSet::GetShoveArcAngleAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZShoveAttributeSet::GetRecoveryDurationAttribute() {
    return FGameplayAttribute{};
}

void USBZShoveAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZShoveAttributeSet, ShoveDamage);
    DOREPLIFETIME(USBZShoveAttributeSet, ShoveRange);
    DOREPLIFETIME(USBZShoveAttributeSet, ShoveImpulse);
    DOREPLIFETIME(USBZShoveAttributeSet, ShoveArcAngle);
    DOREPLIFETIME(USBZShoveAttributeSet, RecoveryDuration);
}

USBZShoveAttributeSet::USBZShoveAttributeSet() {
    this->ShoveDamage = 1;
    this->ShoveRange = 1;
    this->ShoveImpulse = 1;
    this->ShoveArcAngle = 1;
    this->RecoveryDuration = 1;
}

