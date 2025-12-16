#include "SBZOnInteractionObjective.h"

USBZOnInteractionObjective::USBZOnInteractionObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableClass = NULL;
    this->bPlayerCharacter = true;
    this->bApplyToAllInteractables = false;
}

void USBZOnInteractionObjective::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}


