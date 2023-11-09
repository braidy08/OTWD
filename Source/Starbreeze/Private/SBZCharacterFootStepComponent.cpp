#include "SBZCharacterFootStepComponent.h"

USBZCharacterFootStepComponent::USBZCharacterFootStepComponent() {
    this->OverrideSoundEvent = NULL;
    this->NormalStepDistance = 1;
    this->CrouchStepDistance = 1;
    this->RunStepDistance = 1;
    this->ADSStepDistance = 1;
    this->AISoundSchematic = NULL;
    this->CurrentFootStepNoise = NULL;
    this->OwnerCharacter = NULL;
    this->OwnerCharacterMovementComponent = NULL;
}

