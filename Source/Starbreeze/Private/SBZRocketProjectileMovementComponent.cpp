#include "SBZRocketProjectileMovementComponent.h"

USBZRocketProjectileMovementComponent::USBZRocketProjectileMovementComponent() {
    this->bUseInaccuracy = false;
    this->TimeBeforeInaccuracyStarts = 1;
    this->TimeBeforeInaccuracyRandomizes = 1;
    this->bUseSpiral = false;
    this->TimeBeforeSpirallingStarts = 1;
}

