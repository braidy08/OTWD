#include "PathNodeResponderComponent.h"

UPathNodeResponderComponent::UPathNodeResponderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowedUsages = 15;
    this->bRespondWhenActivated = true;
}

void UPathNodeResponderComponent::OnNodeReset_Implementation() {
}

void UPathNodeResponderComponent::OnNodeDeactivated_Implementation() {
}

void UPathNodeResponderComponent::OnNodeActivated_Implementation(const EPathNodeActualUsage ChosenUsage) {
}

bool UPathNodeResponderComponent::IsUsageAllowed(const EPathNodeActualUsage Usage) const {
    return false;
}


