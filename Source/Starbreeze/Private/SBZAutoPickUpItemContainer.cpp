#include "SBZAutoPickUpItemContainer.h"
#include "SBZInteractableComponent.h"

void ASBZAutoPickUpItemContainer::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

ASBZAutoPickUpItemContainer::ASBZAutoPickUpItemContainer() {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->MaxPickUpDistributionRadius = 1;
    this->bShouldDestroyOnLooted = false;
}

