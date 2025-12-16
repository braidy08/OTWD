#include "SBZAmbientSound.h"
#include "Components/SceneComponent.h"
#include "SBZAmbientSoundComponent.h"

ASBZAmbientSound::ASBZAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActiveAreaAttenuationScale = 1;
    this->DefaultAttenuation = 1;
    this->bUseDefaultAttenuation = true;
    this->AkAudioEvent = NULL;
    this->AmbientSoundComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("Ambient Sound Component"));
    this->AmbientSoundComponent->SetupAttachment(RootComponent);
}

void ASBZAmbientSound::HandleDeactivateSoundComponent(UActorComponent* Component) {
}

void ASBZAmbientSound::HandleActivateSoundComponent(UActorComponent* Component, bool bReset) {
}


