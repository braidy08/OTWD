#include "SBZCameraComponent.h"

USBZCameraComponent::USBZCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewDistance = 1;
    this->bCheckCollision = true;
}

bool USBZCameraComponent::IsWorldPointInsideViewport(const FVector& WorldPoint) const {
    return false;
}

bool USBZCameraComponent::IsActorInsideViewport(AActor* TargetActor) const {
    return false;
}


