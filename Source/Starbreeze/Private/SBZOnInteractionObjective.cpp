#include "SBZOnInteractionObjective.h"

void USBZOnInteractionObjective::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

USBZOnInteractionObjective::USBZOnInteractionObjective() {
    this->InteractableClass = NULL;
    this->bPlayerCharacter = true;
    this->bApplyToAllInteractables = false;
}

