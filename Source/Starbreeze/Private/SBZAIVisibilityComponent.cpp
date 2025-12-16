#include "SBZAIVisibilityComponent.h"

USBZAIVisibilityComponent::USBZAIVisibilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Schematic = NULL;
    this->bReadyForUse = true;
    this->bHasFinishedBuilding = false;
}


