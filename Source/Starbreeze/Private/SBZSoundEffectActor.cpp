#include "SBZSoundEffectActor.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"

ASBZSoundEffectActor::ASBZSoundEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ParticleSystem = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ParticleSystemComponent = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
}

void ASBZSoundEffectActor::OnEffectSpawned(FName InEventName, float InEmitterTime, FVector InLocation, FVector InVelocity) {
}

void ASBZSoundEffectActor::OnEffectDone(UParticleSystemComponent* InParticleSystemComponent) {
}


