#include "SBZMeleeAttack.h"

USBZMeleeAttack::USBZMeleeAttack() {
    this->FirstPersonPlayer = NULL;
    this->ThirdPersonPlayer = NULL;
    this->DistancePriorityCurve = NULL;
    this->AnglePriorityCurve = NULL;
    this->AnglePriorityCurveOffset = 1;
    this->AnglePriorityCurveScale = 1;
    this->ForceFeedbackEffect = NULL;
}

