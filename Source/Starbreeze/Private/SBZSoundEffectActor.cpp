#include "SBZSoundEffectActor.h"
#include "AkComponent.h"

void ASBZSoundEffectActor::OnEffectSpawned(FName InEventName, float InEmitterTime, FVector InLocation, FVector InVelocity) {
}

void ASBZSoundEffectActor::OnEffectDone(UParticleSystemComponent* InParticleSystemComponent) {
}

ASBZSoundEffectActor::ASBZSoundEffectActor() {
    this->ParticleSystem = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ParticleSystemComponent = NULL;
}

