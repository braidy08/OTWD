#include "SBZPOIComponent.h"
#include "Net/UnrealNetwork.h"

void UDEPRECATED_SBZPOIComponent::OnRep_User() {
}

void UDEPRECATED_SBZPOIComponent::NetMulticast_AbortUsage_Implementation() {
}

void UDEPRECATED_SBZPOIComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDEPRECATED_SBZPOIComponent, UsingCharacter);
}

UDEPRECATED_SBZPOIComponent::UDEPRECATED_SBZPOIComponent() {
    this->AnimationSet = NULL;
    this->bLoopingUsingAnimation = false;
    this->UsingAnimationDuration = 1;
}

