#include "SBZLaserSightActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpotLightComponent -FallbackName=SpotLightComponent

ASBZLaserSightActor::ASBZLaserSightActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DotSpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->SightEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->LaserSightStats = NULL;
    this->RangedWeapon = NULL;
    this->MaxLightOffsetOut = 1;
    this->MinLightOffsetOut = 1;
    this->MaxLightOffsetIn = 1;
    this->SightEffectComponent->SetupAttachment(RootComponent);
    this->DotSpotLightComponent->SetupAttachment(RootComponent);
}


