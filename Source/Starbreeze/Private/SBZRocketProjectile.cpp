#include "SBZRocketProjectile.h"
#include "AkComponent.h"


ASBZRocketProjectile::ASBZRocketProjectile() {
    this->ExplosionRadius = 1;
    this->Damage = 1;
    this->DamageFalloff = 1;
    this->DamageOuterRadius = 1;
    this->EmitterTemplate = NULL;
    this->DamageType = NULL;
    this->DestroyDelay = 1;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ThrowEvent = NULL;
    this->DetonationEvent = NULL;
}

