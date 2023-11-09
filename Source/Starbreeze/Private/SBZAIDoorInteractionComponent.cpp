#include "SBZAIDoorInteractionComponent.h"
#include "Net/UnrealNetwork.h"

void USBZAIDoorInteractionComponent::OnRep_InteractionData() {
}

ASBZDoor* USBZAIDoorInteractionComponent::GetCurrentDoor() const {
    return NULL;
}

void USBZAIDoorInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIDoorInteractionComponent, CurrentInteractionDatas);
}

USBZAIDoorInteractionComponent::USBZAIDoorInteractionComponent() {
    this->LastDoor = NULL;
}

