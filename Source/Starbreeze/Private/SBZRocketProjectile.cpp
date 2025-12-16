#include "SBZRocketProjectile.h"
#include "AkComponent.h"
#include "SBZRocketProjectileMovementComponent.h"

ASBZRocketProjectile::ASBZRocketProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZRocketProjectileMovementComponent>(TEXT("ProjectileMovement"))) {
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
    this->AkComponent->SetupAttachment(RootComponent);
}



