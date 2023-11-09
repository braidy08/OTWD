#include "PathConnectionResponderComponent.h"

void UPathConnectionResponderComponent::OnConnectionReset_Implementation() {
}

void UPathConnectionResponderComponent::OnConnectionOpened_Implementation(const uint8 ChosenDirection) {
}

void UPathConnectionResponderComponent::OnConnectionClosed_Implementation(const uint8 ChosenDirection, const bool bIsFullyClosed) {
}

bool UPathConnectionResponderComponent::IsDirectionAllowed(const uint8 Direction) const {
    return false;
}

UPathConnectionResponderComponent::UPathConnectionResponderComponent() {
    this->AllowedDirections = 3;
    this->bRespondWhenOpened = true;
}

