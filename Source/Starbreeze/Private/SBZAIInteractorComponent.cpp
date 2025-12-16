#include "SBZAIInteractorComponent.h"

USBZAIInteractorComponent::USBZAIInteractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetClass = NULL;
    this->bIsInteracting = false;
    this->Widget = NULL;
    this->AIOwner = NULL;
    this->CurrentInteractable = NULL;
    this->MinVisibleDistance = 1;
    this->MaxVisibleDistance = 1;
    this->bHasOnScreenTracking = true;
    this->bHasOffScreenTracking = false;
}

bool USBZAIInteractorComponent::SetInteractable(USBZAIInteractableComponent* InCurrentInteractable) {
    return false;
}

bool USBZAIInteractorComponent::SearchInteractable(const FName Type, float Distance) {
    return false;
}

void USBZAIInteractorComponent::OnOwnerKilled(ASBZCharacter* KilledOwner) {
}

bool USBZAIInteractorComponent::IsValid() {
    return false;
}

bool USBZAIInteractorComponent::InterruptAction() {
    return false;
}

void USBZAIInteractorComponent::InteractionProgressChanged(USBZInteractableComponent* Interactable, float InteractionProgressSeconds, float InteractionProgressScale) {
}


