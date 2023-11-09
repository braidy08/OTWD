#include "SBZPlayerAnimation.h"

bool USBZPlayerAnimation::IsMeleeAttack1() {
    return false;
}

bool USBZPlayerAnimation::IsAction() const {
    return false;
}

UAnimSequenceBase* USBZPlayerAnimation::GetWalkAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetStumbleAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetRunLoopAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetRunEnterAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetRecoilAnimation() const {
    return NULL;
}

UBlendSpaceBase* USBZPlayerAnimation::GetPointingBlendSpaceAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetPointingAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetJumpLoopAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetJumpExitAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetJumpEnterAnimation() const {
    return NULL;
}

UAnimSequenceBase* USBZPlayerAnimation::GetIdleADSAnimation() const {
    return NULL;
}

void USBZPlayerAnimation::AnimNotify_WalkStarted() {
}

void USBZPlayerAnimation::AnimNotify_WalkEnded() {
}

void USBZPlayerAnimation::AnimNotify_UnequipEnded() {
}

void USBZPlayerAnimation::AnimNotify_UnarmedInteractingStarted() {
}

void USBZPlayerAnimation::AnimNotify_UnarmedInteractingEnded() {
}

void USBZPlayerAnimation::AnimNotify_UnarmedIdleStarted() {
}

void USBZPlayerAnimation::AnimNotify_UnarmedIdleEnded() {
}

void USBZPlayerAnimation::AnimNotify_TurnStarted() {
}

void USBZPlayerAnimation::AnimNotify_TurnEnded() {
}

void USBZPlayerAnimation::AnimNotify_ThrowWaitingStart() {
}

void USBZPlayerAnimation::AnimNotify_ThrowWaitingEnd() {
}

void USBZPlayerAnimation::AnimNotify_ThrowEnded() {
}

void USBZPlayerAnimation::AnimNotify_RunningStumbleEnded() {
}

void USBZPlayerAnimation::AnimNotify_MeleeWindupExit() {
}

void USBZPlayerAnimation::AnimNotify_MeleeWindupEnter() {
}

void USBZPlayerAnimation::AnimNotify_MeleeSwingExit() {
}

void USBZPlayerAnimation::AnimNotify_MeleeSwingEnter() {
}

void USBZPlayerAnimation::AnimNotify_MeleeShoveExit() {
}

void USBZPlayerAnimation::AnimNotify_MeleeShoveEnter() {
}

void USBZPlayerAnimation::AnimNotify_MeleeDoneEnter() {
}

void USBZPlayerAnimation::AnimNotify_MeleeBounceExit() {
}

void USBZPlayerAnimation::AnimNotify_LeftUnjamExit() {
}

void USBZPlayerAnimation::AnimNotify_LeftRunExit() {
}

void USBZPlayerAnimation::AnimNotify_LeftRunEnter() {
}

void USBZPlayerAnimation::AnimNotify_LeftJumpEnter() {
}

void USBZPlayerAnimation::AnimNotify_LeftInteractExit() {
}

void USBZPlayerAnimation::AnimNotify_LandingEnded() {
}

void USBZPlayerAnimation::AnimNotify_InAirStarted() {
}

void USBZPlayerAnimation::AnimNotify_InAirEnded() {
}

void USBZPlayerAnimation::AnimNotify_IdleStarted() {
}

void USBZPlayerAnimation::AnimNotify_IdleEnded() {
}

void USBZPlayerAnimation::AnimNotify_GrappleKnifeOut() {
}

void USBZPlayerAnimation::AnimNotify_GrappleKnifeInNoKill() {
}

void USBZPlayerAnimation::AnimNotify_GrappleKnifeInKill() {
}

void USBZPlayerAnimation::AnimNotify_GrappleExit() {
}

void USBZPlayerAnimation::AnimNotify_GrappleEnter() {
}

void USBZPlayerAnimation::AnimNotify_GestureEnded() {
}

void USBZPlayerAnimation::AnimNotify_ExtraSwingSound() {
}

void USBZPlayerAnimation::AnimNotify_EquippableActivationEnded() {
}

void USBZPlayerAnimation::AnimNotify_EquipEnded() {
}

void USBZPlayerAnimation::AnimNotify_EnteredRunExit() {
}

void USBZPlayerAnimation::AnimNotify_EnteredRunEnter() {
}

void USBZPlayerAnimation::AnimNotify_EnteredResetLocomotion() {
}

void USBZPlayerAnimation::AnimNotify_EnteredResetAdditiveLocomotion() {
}

void USBZPlayerAnimation::AnimNotify_EnteredInteractExit() {
}

void USBZPlayerAnimation::AnimNotify_EnteredInteractEnter() {
}

void USBZPlayerAnimation::AnimNotify_DefeatTransitionStarted() {
}

void USBZPlayerAnimation::AnimNotify_DefeatTransitionEnded() {
}

void USBZPlayerAnimation::AnimNotify_DeadStarted() {
}

void USBZPlayerAnimation::AnimNotify_ActionsMeleeExit() {
}

void USBZPlayerAnimation::AnimNotify_ActionsMeleeEnter() {
}

USBZPlayerAnimation::USBZPlayerAnimation() {
    this->EquipSpeed = 1;
    this->MeleeWeaponAnimationCollection = NULL;
    this->OwningPlayerCharacter = NULL;
    this->bIsLocallyControlled = false;
    this->bIsPrimaryAttackPressed = false;
    this->bIsSecondaryAttackPressed = false;
    this->bIsPrimaryAttackPressedLast = false;
    this->bIsActivatingEquippable = false;
    this->bIsJumping = false;
    this->bIsInAir = false;
    this->bIsLanding = false;
    this->bIsProne = false;
    this->bIsRunExiting = false;
    this->bIsTurning = false;
    this->bIsTurningInterrupted = false;
    this->TurnYaw = 1;
    this->TurnSpeed = 1;
    this->AdditiveLocomotionAlpha = 1;
    this->WalkSpeed = 1;
    this->HeadAimPitch = 1;
    this->HeadAimYaw = 1;
    this->bIsInteracting = false;
    this->bIsInteractInterrupted = false;
    this->bIsUnequippingOutsideScreen = false;
    this->bIsUnequipped = false;
    this->bIsMeleeWindupFromIdle = false;
    this->bIsMeleeComboWindowTriggered = false;
    this->bIsGesturing = false;
    this->IdleADSJammedAnimation = NULL;
    this->WalkJammedAnimation = NULL;
    this->RunJammedEnterAnimation = NULL;
    this->RunJammedLoopAnimation = NULL;
    this->JumpJammedEnterAnimation = NULL;
    this->JumpJammedLoopAnimation = NULL;
    this->JumpJammedExitAnimation = NULL;
    this->EquipJammedAnimation = NULL;
    this->UnequipJammedAnimation = NULL;
    this->PointingJammedAnimation = NULL;
    this->IdleADSAnimation = NULL;
    this->StandTurnBlendSpaceAnimation = NULL;
    this->CrouchTurnBlendSpaceAnimation = NULL;
    this->WalkAnimation = NULL;
    this->RunEnterAnimation = NULL;
    this->RunLoopAnimation = NULL;
    this->ProneMoveBlendSpaceAnimation = NULL;
    this->ProneIdleAimOffsetAnimation = NULL;
    this->ProneMoveAimOffsetAnimation = NULL;
    this->JumpEnterAnimation = NULL;
    this->JumpLoopAnimation = NULL;
    this->JumpExitAnimation = NULL;
    this->ToProneAnimation = NULL;
    this->CrouchToProneAnimation = NULL;
    this->ProneToCrouchAnimation = NULL;
    this->IdleProneAnimation = NULL;
    this->EquipAnimation = NULL;
    this->UnequipAnimation = NULL;
    this->ShoveAnimation = NULL;
    this->ShoveBlendSpaceAnimation = NULL;
    this->CurrentGestureAnimation = NULL;
    this->CurrentGestureBlendSpaceAnimation = NULL;
    this->StandRecoilAimOffsetAnimation = NULL;
    this->CrouchRecoilAimOffsetAnimation = NULL;
    this->PointingGestureAnimation = NULL;
    this->SprintBlendSpaceAnimation = NULL;
    this->LocomotionUpperBodyAdditiveAnimation = NULL;
    this->bUseGunKickAnimation = false;
    this->GunKickAimOffsetAnimation = NULL;
    this->EnterExitOffset = 1;
    this->DefeatState = ESBZPlayerDefeatAnimationState::None;
    this->DefeatCondition = ESBZPlayerDefeatAnimationExtraCondition::None;
    this->DefeatTransitionState = ESBZPlayerDefeatAnimationTransition::None;
    this->bIsMeleeAttacking = false;
    this->bIsMeleeComboAllowed = false;
    this->bIsMeleeLightAttackAllowed = false;
    this->bDidMeleeAttackBounce = false;
    this->bIsEnterDefeatCrouching = false;
    this->HeavyWindupAnimationScale = 1;
    this->LightWindupAnimationScale = 1;
    this->HeavySwingAnimationScale = 1;
    this->LightSwingAnimationScale = 1;
    this->bIsMeleeLightAttack = false;
    this->bIsMeleeAttack1 = false;
    this->HeavyWindupAnimation1 = NULL;
    this->HeavyWindupAnimation2 = NULL;
    this->HeavyWindupBlendSpaceAnimation1 = NULL;
    this->HeavyWindupBlendSpaceAnimation2 = NULL;
    this->HeavySwingAnimation1 = NULL;
    this->HeavySwingAnimation2 = NULL;
    this->HeavySwingBlendSpaceAnimation1 = NULL;
    this->HeavySwingBlendSpaceAnimation2 = NULL;
    this->HeavyBounceAnimation1 = NULL;
    this->HeavyBounceAnimation2 = NULL;
    this->HeavyBounceBlendSpaceAnimation1 = NULL;
    this->HeavyBounceBlendSpaceAnimation2 = NULL;
    this->LightWindupAnimation1 = NULL;
    this->LightWindupAnimation2 = NULL;
    this->LightWindupBlendSpaceAnimation1 = NULL;
    this->LightWindupBlendSpaceAnimation2 = NULL;
    this->LightSwingAnimation1 = NULL;
    this->LightSwingAnimation2 = NULL;
    this->LightSwingBlendSpaceAnimation1 = NULL;
    this->LightSwingBlendSpaceAnimation2 = NULL;
    this->LightBounceAnimation1 = NULL;
    this->LightBounceAnimation2 = NULL;
    this->LightBounceBlendSpaceAnimation1 = NULL;
    this->LightBounceBlendSpaceAnimation2 = NULL;
    this->DefeatBleedOutEnter = NULL;
    this->DefeatBleedOutToAlive = NULL;
    this->DefeatBleedOutToDead = NULL;
    this->DefeatBleedOutToDowned = NULL;
    this->DefeatStandingToDead = NULL;
    this->DefeatDead = NULL;
    this->DefeatDownedToAlive = NULL;
    this->DefeatDownedNoZombie = NULL;
    this->DefeatDownedWithZombie = NULL;
    this->DefeatDownedZombieToNo = NULL;
    this->DefeatDownedWithZombieToDead = NULL;
    this->DefeatDownedNoZombieToDead = NULL;
    this->FacialBleedOut = NULL;
    this->FacialBleedOutEnter = NULL;
    this->FacialIdle = NULL;
    this->FacialRun = NULL;
    this->FacialDeathLight = NULL;
    this->FacialDeathMedium = NULL;
    this->FacialDeathHeavy = NULL;
    this->FacialDeathHurt = NULL;
    this->FacialMelee = NULL;
    this->bIsLeftTurnFootIKEnabled = false;
    this->LeftTurnFootIK = 1;
    this->LeftTurnFootIKFadeTime = 1;
    this->bIsRightTurnFootIKEnabled = false;
    this->RightTurnFootIK = 1;
    this->RightTurnFootIKFadeTime = 1;
    this->ActionTwistAngle = 1;
    this->ActionTwistInterpSpeed = 1;
    this->ResetZeroActionTwistInterpSpeed = 1;
    this->bIsFullbodyAction = false;
    this->PlayerActionHandler = NULL;
}

