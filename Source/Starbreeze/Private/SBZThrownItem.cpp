#include "SBZThrownItem.h"
#include "SBZHoldingItemEffect.h"

ASBZThrownItem::ASBZThrownItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->ToleratedPositionDifference = 1;
    this->ThrowVelocity = 1;
    this->OnHoldEffectClass = USBZHoldingItemEffect::StaticClass();
    this->CharacterMovementVelocityModifier = 1;
    this->ToleratedPositionDifferenceSquared = 1;
}


