#include "SBZLaserSightActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SpotLightComponent.h"

ASBZLaserSightActor::ASBZLaserSightActor() {
    this->DotSpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->SightEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->LaserSightStats = NULL;
    this->RangedWeapon = NULL;
    this->MaxLightOffsetOut = 1;
    this->MinLightOffsetOut = 1;
    this->MaxLightOffsetIn = 1;
}

