#include "SBZCharacterFootStepComponent.h"

USBZCharacterFootStepComponent::USBZCharacterFootStepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideSoundEvent = NULL;
    this->bUseSquaredDistance = false;
    this->NormalStepDistance = 1;
    this->CrouchStepDistance = 1;
    this->RunStepDistance = 1;
    this->ADSStepDistance = 1;
    this->AISoundSchematic = NULL;
    this->CurrentFootStepNoise = NULL;
    this->OwnerCharacter = NULL;
    this->OwnerCharacterMovementComponent = NULL;
}


