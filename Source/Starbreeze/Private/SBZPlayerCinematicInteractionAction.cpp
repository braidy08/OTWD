#include "SBZPlayerCinematicInteractionAction.h"
#include "Components/SceneComponent.h"

ASBZPlayerCinematicInteractionAction::ASBZPlayerCinematicInteractionAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractableActor = NULL;
    this->CharacterMontageOnSuccess1P = NULL;
    this->CharacterMontageOnSuccess3P = NULL;
    this->WeaponMontageOnSuccess1P = NULL;
    this->WeaponMontageOnSuccess3P = NULL;
    this->WeaponMeshActorClassOnSuccess1P = NULL;
    this->WeaponMeshActorClassOnSuccess3P = NULL;
}

void ASBZPlayerCinematicInteractionAction::OnInteractionSuccessful(USBZInteractableComponent* InInteractable, const TArray<USBZBaseInteractorComponent*>& InInteractors) {
}


