#include "SBZMeleeAttackAnimationCollection.h"

USBZMeleeAttackAnimationCollection::USBZMeleeAttackAnimationCollection() {
    this->WindupFromIdle = NULL;
    this->Windup = NULL;
    this->Swings.AddDefaulted(1);
    this->Swing = NULL;
    this->Bounce = NULL;
    this->WindupFromIdleBlendSpace = NULL;
    this->WindupBlendSpace = NULL;
    this->SwingBlendSpace = NULL;
    this->BounceBlendSpace = NULL;
}

