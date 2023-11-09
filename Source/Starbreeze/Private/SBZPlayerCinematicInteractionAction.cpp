#include "SBZPlayerCinematicInteractionAction.h"

void ASBZPlayerCinematicInteractionAction::OnInteractionSuccessful(USBZInteractableComponent* InInteractable, const TArray<USBZBaseInteractorComponent*>& InInteractors) {
}

ASBZPlayerCinematicInteractionAction::ASBZPlayerCinematicInteractionAction() {
    this->InteractableActor = NULL;
    this->CharacterMontageOnSuccess1P = NULL;
    this->CharacterMontageOnSuccess3P = NULL;
    this->WeaponMontageOnSuccess1P = NULL;
    this->WeaponMontageOnSuccess3P = NULL;
    this->WeaponMeshActorClassOnSuccess1P = NULL;
    this->WeaponMeshActorClassOnSuccess3P = NULL;
}

