#include "SBZFragGrenade.h"
#include "SBZExplosionDamageType.h"

ASBZFragGrenade::ASBZFragGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Damage = 1;
    this->DamageFalloff = 1;
    this->DamageOuterRadius = 1;
    this->EmitterTemplate = NULL;
    this->DamageType = USBZExplosionDamageType::StaticClass();
    this->DestroyDelay = 1;
}

void ASBZFragGrenade::OnDetonate() {
}


