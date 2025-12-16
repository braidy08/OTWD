#include "SBZPlayerMovementComponent.h"

USBZPlayerMovementComponent::USBZPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartWalkAudioEvent = NULL;
    this->StartRunAudioEvent = NULL;
    this->WalkToRunAudioEvent = NULL;
    this->RunToWalkAudioEvent = NULL;
    this->StopWalkAudioEvent = NULL;
    this->StopRunAudioEvent = NULL;
}


