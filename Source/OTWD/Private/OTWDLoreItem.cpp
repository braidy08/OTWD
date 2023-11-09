#include "OTWDLoreItem.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SBZInteractableComponent.h"

void AOTWDLoreItem::OnLocalInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

bool AOTWDLoreItem::IsInteractionAllowedByInteractor(const USBZBaseInteractorComponent* Interactor) {
    return false;
}

AOTWDLoreItem::AOTWDLoreItem() {
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle System"));
    this->InteractionShapeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionShape"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->InteractionTemplate = NULL;
    this->LibraryDataToUnlock = NULL;
    this->QuestItem = NULL;
    this->AudioEventOnPickup = NULL;
    this->AmbientAudioEventStart = NULL;
    this->AmbientAudioEventEnd = NULL;
    this->AudioRange = 1;
    this->PickupComment = ESBZVoiceComment::None;
    this->AkComponent = NULL;
}

