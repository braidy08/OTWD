#include "SBZLocomotionAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZLocomotionAttributeSet::OnRep_MaxSpeedMultiplier(float OldValue) {
}

FGameplayAttribute USBZLocomotionAttributeSet::GetMaxSpeedMultiplierAttribute() {
    return FGameplayAttribute{};
}

void USBZLocomotionAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZLocomotionAttributeSet, MaxSpeedMultiplier);
}

USBZLocomotionAttributeSet::USBZLocomotionAttributeSet() {
    this->MaxSpeedMultiplier = 1;
}

