#include "SBZAIAimTargetComponent.h"

FVector USBZAIAimTargetComponent::GetAimTargetLocation() const {
    return FVector{};
}

USBZAIAimTargetComponent::USBZAIAimTargetComponent() {
    this->Priority = 0;
    this->Attitudes = 0;
    this->Character = NULL;
}

