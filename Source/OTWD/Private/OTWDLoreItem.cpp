#include "OTWDLoreItem.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZAmbientSoundComponent.h"

AOTWDLoreItem::AOTWDLoreItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
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
    this->AmbientSoundComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("Ambient Sound Component"));
    this->AmbientSoundComponent->SetupAttachment(RootComponent);
    this->InteractionShapeComponent->SetupAttachment(RootComponent);
    this->ParticleSystemComponent->SetupAttachment(RootComponent);
}

void AOTWDLoreItem::OnLocalInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

bool AOTWDLoreItem::IsInteractionAllowedByInteractor(const USBZBaseInteractorComponent* Interactor) {
    return false;
}


