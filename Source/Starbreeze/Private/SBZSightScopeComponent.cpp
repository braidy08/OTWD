#include "SBZSightScopeComponent.h"

USBZSightScopeComponent::USBZSightScopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLocallyControlled = false;
    this->bIsTargeting = false;
    this->PlayerOwner = NULL;
    this->SightScopeStats = NULL;
    this->TargetingMeshComponent = NULL;
}

void USBZSightScopeComponent::OnLeaveTargeting() {
}

void USBZSightScopeComponent::OnEnterTargeting() {
}


