#include "ExplosionData.h"

FExplosionData::FExplosionData() {
    this->DamageCauser = NULL;
    this->Instigator = NULL;
    this->DamageAmount = 1;
    this->Radius = 1;
    this->EmitterTemplate = NULL;
    this->DamageType = NULL;
}

