#include "SBZRocketProjectileMovementComponent.h"

USBZRocketProjectileMovementComponent::USBZRocketProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseInaccuracy = false;
    this->TimeBeforeInaccuracyStarts = 1;
    this->TimeBeforeInaccuracyRandomizes = 1;
    this->bUseSpiral = false;
    this->TimeBeforeSpirallingStarts = 1;
}


