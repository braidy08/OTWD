#include "SBZThrowItemData.h"

FSBZThrowItemData::FSBZThrowItemData() {
    this->ThrowForce = 1;
    this->ThrowAngle = 1;
    this->ThrownItemClass = NULL;
    this->ThrownItem = NULL;
    this->CharacterMovementModifier = 1;
    this->bIsHeldItem = false;
}

