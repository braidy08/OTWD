#include "ExplosionFalloffData.h"

FExplosionFalloffData::FExplosionFalloffData() {
    this->DamageCauser = NULL;
    this->Instigator = NULL;
    this->DamageAmount = 1;
    this->MinimumDamageAmount = 1;
    this->DamageInnerRadius = 1;
    this->DamageOuterRadius = 1;
    this->DamageFalloff = 1;
    this->EmitterTemplate = NULL;
    this->DamageType = NULL;
}

