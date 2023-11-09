#include "OTWDMetaResourceAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UOTWDMetaResourceAttributeSet::OnRep_MetaResourceMaximum(float OldValue) {
}

void UOTWDMetaResourceAttributeSet::OnRep_MetaResource(float OldValue) {
}

FGameplayAttribute UOTWDMetaResourceAttributeSet::GetMetaResourceMaximumAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute UOTWDMetaResourceAttributeSet::GetMetaResourceAttribute() {
    return FGameplayAttribute{};
}

void UOTWDMetaResourceAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOTWDMetaResourceAttributeSet, MetaResource);
    DOREPLIFETIME(UOTWDMetaResourceAttributeSet, MetaResourceMaximum);
}

UOTWDMetaResourceAttributeSet::UOTWDMetaResourceAttributeSet() {
    this->MetaResource = 1;
    this->MetaResourceMaximum = 1;
}

