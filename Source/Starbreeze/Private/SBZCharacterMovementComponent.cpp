#include "SBZCharacterMovementComponent.h"

void USBZCharacterMovementComponent::UpdateTargetMaxSpeedMultiplier() {
}

float USBZCharacterMovementComponent::GetMaxWalkSpeed() const {
    return 0.0f;
}

float USBZCharacterMovementComponent::GetMaxClimbSpeed() const {
    return 0.0f;
}

USBZCharacterMovementComponent::USBZCharacterMovementComponent() {
    this->bUseSlideMinDistance = false;
    this->SlideMoveMinSlideDistance = 1;
    this->SlideMoveMaxDistance = 1;
    this->SlideMoveMinDistance = 1;
    this->SlideAutoHeightSlideOver = 1;
    this->SlideSlopeDirectionLerpModifier = 1;
    this->bEnableSlopeModifier = false;
    this->SlideSlopeMaxAngleUp = 1;
    this->SlideSlopeMaxDistanceModifierUp = 1;
    this->SlideSlopeMaxSpeedModifierUp = 1;
    this->SlideSlopeMaxAngleDown = 1;
    this->SlideSlopeMaxDistanceModifierDown = 1;
    this->SlideSlopeMaxSpeedModifierDown = 1;
    this->SlideCheckDistance = 1;
    this->HeightTransitionTime = 1;
    this->bCanLedgeGrab = false;
    this->bLedgeGrabAutoMantle = false;
    this->LedgeGrabPredictionTime = 1;
    this->LedgeGrabHoldHeightOffset = 1;
    this->LedgeGrabCameraBlendTimePercent = 1;
    this->LedgeGrabCameraYawLimit = 1;
    this->LedgeGrabCameraPitchLimit = 1;
    this->LedgeGrabMinimumLerpSpeed = 1;
    this->LedgeGrabGrabHeight = 1;
    this->bDropFromLedgeAfterTime = false;
    this->LedgeGrabMaximumTime = 1;
    this->LedgeGrabChannel = ECC_WorldStatic;
    this->PullUpCollisionProfile = TEXT("PlayerPawn");
    this->LedgeGrabVelocityDot = 1;
    this->LedgeGrabClimbSchematic = NULL;
    this->bGrabLedgeIfWalkOffBackwards = false;
    this->bGrabLedgeIfCrouchWalkOffBackwards = false;
    this->bGrabLedgeIfWalkOffBackwardsIfFallIsFatal = false;
    this->FatalFallMaxHeightToCheck = 1;
    this->bConstrainStrafeSpeed = false;
    this->StrafeSpeedMultiplier = 1;
    this->MaxClimbSpeed = 1;
    this->CurrentMaxSpeedMultiplier = 1;
    this->TargetMaxSpeedMultiplier = 1;
    this->TargetMaxSpeedMultiplierUpdateRate = 1;
    this->MaxSpeedMultiplierInterpSpeed = 1;
    this->OwnerAbilitySystem = NULL;
    this->OwningPlayerCharacter = NULL;
    this->OwningCharacter = NULL;
    this->OwningAICharacter = NULL;
    this->CurrentMovementState = ESBZPlayerMovementState::Walk;
}

