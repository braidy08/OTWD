#include "SBZMoveToInteractionHandlerComponent.h"

USBZMoveToInteractionHandlerComponent::USBZMoveToInteractionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentMoveToInteraction = NULL;
    this->OwningCharacter = NULL;
}


