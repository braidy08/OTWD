#include "SBZAIShoveAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZAIShoveAttributeSet::OnRep_RecoverTime(float OldValue) {
}

void USBZAIShoveAttributeSet::OnRep_Cooldown(float OldValue) {
}

void USBZAIShoveAttributeSet::OnRep_AnticipationTime(float OldValue) {
}

FGameplayAttribute USBZAIShoveAttributeSet::GetRecoverTimeAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZAIShoveAttributeSet::GetCooldownAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZAIShoveAttributeSet::GetAnticipationTimeAttribute() {
    return FGameplayAttribute{};
}

void USBZAIShoveAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIShoveAttributeSet, RecoverTime);
    DOREPLIFETIME(USBZAIShoveAttributeSet, AnticipationTime);
    DOREPLIFETIME(USBZAIShoveAttributeSet, CoolDown);
}

USBZAIShoveAttributeSet::USBZAIShoveAttributeSet() {
    this->RecoverTime = 1;
    this->AnticipationTime = 1;
    this->CoolDown = 1;
}

