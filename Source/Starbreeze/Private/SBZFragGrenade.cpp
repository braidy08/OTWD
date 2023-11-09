#include "SBZFragGrenade.h"
#include "SBZExplosionDamageType.h"

void ASBZFragGrenade::OnDetonate() {
}

ASBZFragGrenade::ASBZFragGrenade() {
    this->Damage = 1;
    this->DamageFalloff = 1;
    this->DamageOuterRadius = 1;
    this->EmitterTemplate = NULL;
    this->DamageType = USBZExplosionDamageType::StaticClass();
    this->DestroyDelay = 1;
}

