#include "SBZAIDoorInteractionComponent.h"
#include "Net/UnrealNetwork.h"

USBZAIDoorInteractionComponent::USBZAIDoorInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->LastDoor = NULL;
}

void USBZAIDoorInteractionComponent::OnRep_InteractionData() {
}

ASBZDoor* USBZAIDoorInteractionComponent::GetCurrentDoor() const {
    return NULL;
}

void USBZAIDoorInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIDoorInteractionComponent, CurrentInteractionDatas);
}


