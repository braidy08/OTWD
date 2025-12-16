#include "PathConnectionResponderComponent.h"

UPathConnectionResponderComponent::UPathConnectionResponderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowedDirections = 3;
    this->bRespondWhenOpened = true;
}

void UPathConnectionResponderComponent::OnConnectionReset_Implementation() {
}

void UPathConnectionResponderComponent::OnConnectionOpened_Implementation(const uint8 ChosenDirection) {
}

void UPathConnectionResponderComponent::OnConnectionClosed_Implementation(const uint8 ChosenDirection, const bool bIsFullyClosed) {
}

bool UPathConnectionResponderComponent::IsDirectionAllowed(const uint8 Direction) const {
    return false;
}


