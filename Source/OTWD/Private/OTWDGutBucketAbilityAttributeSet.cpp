#include "OTWDGutBucketAbilityAttributeSet.h"
#include "Net/UnrealNetwork.h"

UOTWDGutBucketAbilityAttributeSet::UOTWDGutBucketAbilityAttributeSet() {
    this->UseTime = 1;
    this->UseCount = 1;
    this->HumansDetectMod = 1;
    this->EffectDuration = 1;
}

void UOTWDGutBucketAbilityAttributeSet::OnRep_UseTime() {
}

void UOTWDGutBucketAbilityAttributeSet::OnRep_UseCount() {
}

void UOTWDGutBucketAbilityAttributeSet::OnRep_HumansDetectMod() {
}

void UOTWDGutBucketAbilityAttributeSet::OnRep_EffectDuration() {
}

void UOTWDGutBucketAbilityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDGutBucketAbilityAttributeSet, UseTime);
    DOREPLIFETIME(UOTWDGutBucketAbilityAttributeSet, UseCount);
    DOREPLIFETIME(UOTWDGutBucketAbilityAttributeSet, HumansDetectMod);
    DOREPLIFETIME(UOTWDGutBucketAbilityAttributeSet, EffectDuration);
}


