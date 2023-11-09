#include "SBZCameraComponent.h"

bool USBZCameraComponent::IsWorldPointInsideViewport(const FVector& WorldPoint) const {
    return false;
}

bool USBZCameraComponent::IsActorInsideViewport(AActor* TargetActor) const {
    return false;
}

USBZCameraComponent::USBZCameraComponent() {
    this->ViewDistance = 1;
    this->bCheckCollision = true;
}

