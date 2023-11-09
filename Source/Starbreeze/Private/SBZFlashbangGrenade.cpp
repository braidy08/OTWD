#include "SBZFlashbangGrenade.h"

void ASBZFlashbangGrenade::OnDetonate() {
}

ASBZFlashbangGrenade::ASBZFlashbangGrenade() {
    this->GameplayEffectClass = NULL;
    this->MaximumAngleDifference = 1;
    this->PlayerFlashTime = 1;
    this->PostDetonateLifetime = 1;
    this->FlashPlayerFalloffExponent = 1;
    this->GuaranteedFlashDistance = 1;
    this->StunTime = 1;
    this->EmitterTemplate = NULL;
    this->NoiseLoudness = 1;
    this->NoiseMaxRange = 1;
    this->NoiseUserData = NULL;
    this->ClassFilter = NULL;
}

