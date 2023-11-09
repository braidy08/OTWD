#include "SBZCharacterAnimation.h"


bool USBZCharacterAnimation::IsRightHandOverwriteEnabled() const {
    return false;
}

bool USBZCharacterAnimation::IsLeftHandOverwriteEnabled() const {
    return false;
}

UBlendSpaceBase* USBZCharacterAnimation::GetUnequipBlendSpaceAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZCharacterAnimation::GetUnequipAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZCharacterAnimation::GetToStandAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZCharacterAnimation::GetToCrouchAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZCharacterAnimation::GetRunExitAnimation() const {
    return NULL;
}

FRotator USBZCharacterAnimation::GetRightHandIKRotation() const {
    return FRotator{};
}

FVector USBZCharacterAnimation::GetRightHandIKJointTargetLocation() const {
    return FVector{};
}

FVector USBZCharacterAnimation::GetRightHandIKEffectorLocation() const {
    return FVector{};
}

UAnimSequenceBase* USBZCharacterAnimation::GetMantleExitAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZCharacterAnimation::GetMantleEnterAnimation() const {
    return NULL;
}

FRotator USBZCharacterAnimation::GetLeftHandIKRotation() const {
    return FRotator{};
}

FVector USBZCharacterAnimation::GetLeftHandIKJointTargetLocation() const {
    return FVector{};
}

FVector USBZCharacterAnimation::GetLeftHandIKEffectorLocation() const {
    return FVector{};
}

float USBZCharacterAnimation::GetJammedIKAlpha() const {
    return 0.0f;
}

UAnimSequenceBase* USBZCharacterAnimation::GetIdleAnimation() const {
    return NULL;
}

UBlendSpaceBase* USBZCharacterAnimation::GetEquipBlendSpaceAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZCharacterAnimation::GetEquipAnimation() const {
    return NULL;
}

void USBZCharacterAnimation::AnimNotify_ThrowStarted() {
}

void USBZCharacterAnimation::AnimNotify_ThrowEnded() {
}

void USBZCharacterAnimation::AnimNotify_PostThrowSound() {
}

void USBZCharacterAnimation::AnimNotify_GrappleKnifeOut() {
}

void USBZCharacterAnimation::AnimNotify_GrappleKnifeInNoKill() {
}

void USBZCharacterAnimation::AnimNotify_GrappleKnifeInKill() {
}

void USBZCharacterAnimation::AnimNotify_FacialHurtStarted() {
}

void USBZCharacterAnimation::AnimNotify_FacialHurtEnded() {
}

void USBZCharacterAnimation::AnimNotify_EquipEnter() {
}

void USBZCharacterAnimation::AnimNotify_DoThrow() {
}

void USBZCharacterAnimation::AnimNotify_ArmThrow() {
}

void USBZCharacterAnimation::AnimNotify_AllowEarlyThrow() {
}

USBZCharacterAnimation::USBZCharacterAnimation() {
    this->DummyActor = NULL;
    this->DummyVisCount = 0;
    this->GeneralAnimationCollection = NULL;
    this->RangedWeaponAnimationCollection = NULL;
    this->LeftHandIK = 1;
    this->LeftHandIKFadeTime = 1;
    this->LastHurtReactionWeight = ESBZHurtReactionWeight::Light;
    this->FaceAlpha = 1;
    this->HorizontalSpeed = 1;
    this->MoveDirection = 1;
    this->AimPitch = 1;
    this->AimYaw = 1;
    this->IdleJammedAnimation = NULL;
    this->RunJammedExitAnimation = NULL;
    this->ToCrouchJammedAnimation = NULL;
    this->ToStandJammedAnimation = NULL;
    this->MantleJammedEnterAnimation = NULL;
    this->MantleJammedExitAnimation = NULL;
    this->IdleHandsOverwriteAnimation = NULL;
    this->RunExitAnimation = NULL;
    this->StandMoveBlendSpaceAnimation = NULL;
    this->CrouchMoveBlendSpaceAnimation = NULL;
    this->StandIdleAimOffsetAnimation = NULL;
    this->StandMoveAimOffsetAnimation = NULL;
    this->StandJogAimOffsetAnimation = NULL;
    this->CrouchIdleAimOffsetAnimation = NULL;
    this->CrouchMoveAimOffsetAnimation = NULL;
    this->ToCrouchAnimation = NULL;
    this->IdleCrouchAnimation = NULL;
    this->ToStandAnimation = NULL;
    this->CurrentAimOffset = NULL;
    this->CurrentThrowAnimation = NULL;
    this->CurrentThrowBlendSpaceAnimation = NULL;
    this->CurrentThrowLoopAnimation = NULL;
    this->CurrentThrowLoopBlendSpaceAnimation = NULL;
    this->CurrentThrowEndAnimation = NULL;
    this->CurrentThrowEndBlendSpaceAnimation = NULL;
    this->bIsShoved = false;
    this->bIsLeftHandIKEnabled = true;
    this->bUseIdleHandsOverwriteAnimation = false;
    this->bUseMoveAimOffsetAnimation = false;
    this->bUseJogAimOffsetAnimation = false;
    this->bIsHurtFace = false;
    this->bIsHurtFaceInterrupted = false;
    this->bWasHurtDeath = false;
    this->bIsInHurtFaceState = false;
    this->bIsWalking = false;
    this->bIsRunning = false;
    this->bIsCrouching = false;
    this->bIsThrowing = false;
    this->bIsInThrowState = false;
    this->bIsThrowingInterrupted = false;
    this->bThrowWaitLoop = false;
    this->bThrowAllowEarly = false;
    this->bIsEquipping = false;
    this->bIsUnequipping = false;
}

