#include "SBZThrownItem.h"
#include "SBZHoldingItemEffect.h"

void ASBZThrownItem::ThrowCompleted_Implementation(FTransform ServerTransform) {
}

ASBZThrownItem::ASBZThrownItem() {
    this->ToleratedPositionDifference = 1;
    this->ThrowVelocity = 1;
    this->OnHoldEffectClass = USBZHoldingItemEffect::StaticClass();
    this->CharacterMovementVelocityModifier = 1;
    this->ToleratedPositionDifferenceSquared = 1;
}

