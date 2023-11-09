#include "SBZBaseAnimation.h"

void USBZBaseAnimation::ResetGrappleProperties() {
}


void USBZBaseAnimation::OnGrappleAnimationEnded(ESBZGrappleState AnimationState) {
}

bool USBZBaseAnimation::IsPedestalReady() const {
    return false;
}

float USBZBaseAnimation::GetPlayRateFromTargetLength(UAnimSequenceBase* Sequence, float TargetLength, bool bAllowSpeedup, bool bAllowSlowdown) {
    return 0.0f;
}

UAnimSequenceBase* USBZBaseAnimation::GetPedestalIdleReadyVariation() const {
    return NULL;
}

UAnimSequenceBase* USBZBaseAnimation::GetPedestalIdleReadyToIdleNormalAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZBaseAnimation::GetPedestalIdleReadyAnimation() const {
    return NULL;
}

float USBZBaseAnimation::GetPedestalIdleOffset() const {
    return 0.0f;
}

UAnimSequenceBase* USBZBaseAnimation::GetPedestalIdleNormalVariation() const {
    return NULL;
}

UAnimSequenceBase* USBZBaseAnimation::GetPedestalIdleNormalToIdleReadyAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZBaseAnimation::GetPedestalIdleNormalAnimation() const {
    return NULL;
}

bool USBZBaseAnimation::Exists(const UAnimationAsset* Animation) {
    return false;
}

bool USBZBaseAnimation::CheckPedestalIdleVariation() {
    return false;
}

void USBZBaseAnimation::AnimNotify_ReloadStarted() {
}

void USBZBaseAnimation::AnimNotify_ReloadEnded() {
}

void USBZBaseAnimation::AnimNotify_PedestalIdleFullyBlended() {
}

void USBZBaseAnimation::AnimNotify_PedestalIdleEnded() {
}

void USBZBaseAnimation::AnimNotify_LeftUnjamExit() {
}

void USBZBaseAnimation::AnimNotify_GrappleExitingEnded() {
}

void USBZBaseAnimation::AnimNotify_FireStarted() {
}

void USBZBaseAnimation::AnimNotify_FireEnded() {
}

void USBZBaseAnimation::AnimNotify_EnteredUnjamLoop() {
}

void USBZBaseAnimation::AnimNotify_EnteredUnjamEnter() {
}

void USBZBaseAnimation::AnimNotify_EnteredReloadExit() {
}

void USBZBaseAnimation::AnimNotify_EnteredFireExit() {
}

void USBZBaseAnimation::AnimNotify_ActionsJamEntered() {
}

void USBZBaseAnimation::AnimNotify_ActionsJamDone() {
}

USBZBaseAnimation::USBZBaseAnimation() {
    this->GrappleFinisherState = ESBZPlayerGrappleFinisherState::Waiting;
    this->PedestalAnimationCollection = NULL;
    this->OwningActor = NULL;
    this->OwningCharacter = NULL;
    this->UnjammingSpeed = 1;
    this->ReloadSpeed = 1;
    this->bIsJamming = false;
    this->bIsUnjamming = false;
    this->bCanEnterUnjamLoopFromJam = false;
    this->bIsFiring = false;
    this->bIsInFireState = false;
    this->bIsFiringInterrupted = false;
    this->bIsReloading = false;
    this->bIsReloadingEmpty = false;
    this->bIsReloadInterrupted = false;
    this->bIsActionExiting = false;
    this->bIsFirstPerson = false;
    this->bIsJammed = false;
    this->bIsEmptyMagazine = false;
    this->bIsAds = false;
    this->bUseRecoilEmptyAnimation = false;
    this->bUseRecoilJammedAnimation = false;
    this->bIsFireAnimationLoop = false;
    this->bIsReloadAnimationLoop = false;
    this->bIsVaulting = false;
    this->bIsMantling = false;
    this->bIsVaultingEnter = false;
    this->bIsVaultingLoop = false;
    this->bIsVaultingExit = false;
    this->bIsMantlingEnter = false;
    this->bIsMantlingLoop = false;
    this->bIsMantlingExit = false;
    this->bIsLedgeGrabbingEnter = false;
    this->bIsLedgeGrabbingLoop = false;
    this->bIsLedgeGrabbingExit = false;
    this->MVIKFactor = 1;
    this->MVIKFactorRight = 1;
    this->bIsClimbing = false;
    this->bEnteringExitingLadder = false;
    this->bEnteringLadder = false;
    this->bExitingLadder = false;
    this->ClimbTime = 1;
    this->GrappleState = ESBZGrappleState::None;
    this->bIsTryingToGrapple = false;
    this->bIsGrappling = false;
    this->bHasValidPostGrappleSyncPinningAnimation = false;
    this->GrappleIntroAnimation = NULL;
    this->GrappleStruggleAnimation = NULL;
    this->GrappleOutroAnimation = NULL;
    this->GrappleShoveAnimation = NULL;
    this->IdleAnimation = NULL;
    this->IdlePoseAdditiveAnimation = NULL;
    this->ReloadAnimation = NULL;
    this->ReloadEmptyAnimation = NULL;
    this->ReloadEnterAnimation = NULL;
    this->ReloadLoopAnimation = NULL;
    this->ReloadExitAnimation = NULL;
    this->ReloadEmptyExitAnimation = NULL;
    this->RecoilAnimation = NULL;
    this->RecoilCrouchAnimation = NULL;
    this->CrouchReloadAnimation = NULL;
    this->RecoilEnterAnimation = NULL;
    this->RecoilLoopAnimation = NULL;
    this->RecoilExitAnimation = NULL;
    this->RecoilADSAnimation = NULL;
    this->RecoilADSEnterAnimation = NULL;
    this->RecoilADSLoopAnimation = NULL;
    this->RecoilADSExitAnimation = NULL;
    this->RecoilEmptyAnimation = NULL;
    this->RecoilJammedAnimation = NULL;
    this->JamAnimation = NULL;
    this->UnjamEnterAnimation = NULL;
    this->UnjamLoopAnimation = NULL;
    this->UnjamExitAnimation = NULL;
    this->VaultMontage = NULL;
    this->MantleMontage = NULL;
    this->MantleEnterAnimation = NULL;
    this->MantleLoopAnimation = NULL;
    this->MantleExitAnimation = NULL;
    this->ClimbLoopAnimation = NULL;
    this->ClimbEnterFromBottomMontage = NULL;
    this->ClimbExitFromBottomMontage = NULL;
    this->ClimbEnterFromTopMontageL = NULL;
    this->ClimbEnterFromTopMontageR = NULL;
    this->ClimbExitFromTopMontageL = NULL;
    this->ClimbExitFromTopMontageR = NULL;
    this->ClimbEnterFromFallingMontageL = NULL;
    this->ClimbEnterFromFallingMontageR = NULL;
    this->ClimbCurrentEnteringExitingAnimation = NULL;
    this->LedgeGrabEnterAnimation = NULL;
    this->LedgeGrabLoopAnimation = NULL;
    this->LedgeGrabExitAnimation = NULL;
    this->bIsLegless = false;
    this->bIsOnPedestal = false;
}

