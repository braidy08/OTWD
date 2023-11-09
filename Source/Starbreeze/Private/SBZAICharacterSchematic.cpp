#include "SBZAICharacterSchematic.h"

USBZAICharacterSchematic::USBZAICharacterSchematic() {
    this->bCanStrafe = false;
    this->bOverrideCoverAssumptionDot = false;
    this->CoverAssumptionDot = 1;
    this->bOverrideCoverSafetyDot = false;
    this->CoverSafetyDot = 1;
    this->DramaOnDeathMultiplier = 1;
}

