#include "SBZSightScopeComponent.h"

void USBZSightScopeComponent::OnLeaveTargeting() {
}

void USBZSightScopeComponent::OnEnterTargeting() {
}

USBZSightScopeComponent::USBZSightScopeComponent() {
    this->bIsLocallyControlled = false;
    this->bIsTargeting = false;
    this->PlayerOwner = NULL;
    this->SightScopeStats = NULL;
    this->TargetingMeshComponent = NULL;
}

