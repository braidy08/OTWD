#include "SBZAIAimTargetComponent.h"

USBZAIAimTargetComponent::USBZAIAimTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
    this->Attitudes = 0;
    this->Character = NULL;
}

FVector USBZAIAimTargetComponent::GetAimTargetLocation() const {
    return FVector{};
}


