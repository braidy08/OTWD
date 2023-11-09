#include "SBZHumanAICharacterAnimation.h"

void USBZHumanAICharacterAnimation::PlayMontageTransition(UAnimMontage* MontageTransition) {
}

void USBZHumanAICharacterAnimation::OverrideRotationRateDuringTransition(float YawSpeedPerSec) {
}

USBZAIShoveHandlerComponent* USBZHumanAICharacterAnimation::GetShoveHandler() const {
    return NULL;
}

float USBZHumanAICharacterAnimation::GetClampedWeightFromValueInRange(float InputValue, float RangeMin, float RangeMax) {
    return 0.0f;
}

void USBZHumanAICharacterAnimation::AnimNotify_StaggerExit() {
}

void USBZHumanAICharacterAnimation::AnimNotify_StaggerEnter() {
}



void USBZHumanAICharacterAnimation::AnimNotify_SetShoveDisabled() {
}

void USBZHumanAICharacterAnimation::AnimNotify_ReloadStarted() {
}

void USBZHumanAICharacterAnimation::AnimNotify_ReloadEnded() {
}

void USBZHumanAICharacterAnimation::AnimNotify_OnPeekUpExit() {
}

void USBZHumanAICharacterAnimation::AnimNotify_OnPeekUpEnter() {
}

void USBZHumanAICharacterAnimation::AnimNotify_OnPeekRightExit() {
}

void USBZHumanAICharacterAnimation::AnimNotify_OnPeekRightEnter() {
}

void USBZHumanAICharacterAnimation::AnimNotify_OnPeekLeftExit() {
}

void USBZHumanAICharacterAnimation::AnimNotify_OnPeekLeftEnter() {
}

void USBZHumanAICharacterAnimation::AnimNotify_OnIdleEnter() {
}

void USBZHumanAICharacterAnimation::AnimNotify_IdleToStringStartMove() {
}

void USBZHumanAICharacterAnimation::AnimNotify_DefeatReviveEnded() {
}

USBZHumanAICharacterAnimation::USBZHumanAICharacterAnimation() {
    this->bForceDisableAimOffset = false;
    this->LeftHandIKEffectorBarricadePositionAlpha = 1;
    this->PatrolIdleAnimation = NULL;
    this->PatrolIdleHandsOverwriteAnimation = NULL;
    this->PatrolStandMoveBlendSpaceAnimation = NULL;
    this->PatrolStandIdleTurnAroundBlendSpace = NULL;
    this->InvestigateIdleAnimation = NULL;
    this->InvestigateIdleHandsOverwriteAnimation = NULL;
    this->InvestigateStandMoveBlendSpaceAnimation = NULL;
    this->InvestigateStandIdleTurnAroundBlendSpace = NULL;
    this->SuspiciousIdleAnimation = NULL;
    this->SuspiciousStandIdleTurnAroundBlendSpace = NULL;
    this->CombatStandIdleTurnAroundBlendSpace = NULL;
    this->CombatCrouchIdleTurnAroundBlendSpace = NULL;
    this->SearchIdleAnimation = NULL;
    this->SearchStandMoveBlendSpace = NULL;
    this->CombatIdleAnimation = NULL;
    this->CombatStandMoveBlendSpace = NULL;
    this->CombatStandMoveJogBlendSpace = NULL;
    this->CombatStandMoveSprintBlendSpace = NULL;
    this->CombatShoveAnimation = NULL;
    this->TankShoveAnticipation = NULL;
    this->TankShoveLoopAnticipation = NULL;
    this->TankShoveBash = NULL;
    this->TankShoveBashLoop = NULL;
    this->TankShoveHit = NULL;
    this->TankShoveRecovery = NULL;
    this->TankShoveHitSuccess = NULL;
    this->TankShoveHitMiss = NULL;
    this->TankShoveHitMissLoop = NULL;
    this->TankShoveHitMissRecover = NULL;
    this->TankShoveHitEnd = NULL;
    this->TankStaggerOpenShieldStart = NULL;
    this->TankStaggerOpenShieldLoop = NULL;
    this->TankStaggerOpenShieldEnd = NULL;
    this->TankStaggerToKneel = NULL;
    this->TankStaggerKneelingLoop = NULL;
    this->TankStaggerKneelRecover = NULL;
    this->bIsShoving = false;
    this->ShoveState = ESBZAIShoveInfo::SI_NONE;
    this->StaggerState = ESBZTankStaggerState::TSS_None;
    this->CrouchCoverIdle = NULL;
    this->CrouchCoverPeekLeft = NULL;
    this->CrouchCoverPeekRight = NULL;
    this->CrouchCoverPeekUpEnter = NULL;
    this->CrouchCoverPeekUpLoop = NULL;
    this->CrouchCoverPeekUpExit = NULL;
    this->CrouchCoverPeekUpLowEnter = NULL;
    this->CrouchCoverPeekUpLowLoop = NULL;
    this->CrouchCoverPeekUpLowExit = NULL;
    this->StandCoverIdle = NULL;
    this->StandCoverPeekLeft = NULL;
    this->StandCoverPeekRight = NULL;
    this->StandCoverPeekUpHighAimOffsetAnimation = NULL;
    this->StandCoverPeekUpLowAimOffsetAnimation = NULL;
    this->CrouchCoverPeekRightAimOffsetAnimation = NULL;
    this->CrouchCoverPeekLeftAimOffsetAnimation = NULL;
    this->StandCoverPeekRightAimOffsetAnimation = NULL;
    this->StandCoverPeekLeftAimOffsetAnimation = NULL;
    this->LastCoverPeekPlayedMontage = NULL;
    this->PickedTransitionSprintToIdle = NULL;
    this->PickedTransitionSprintToCover = NULL;
    this->PickedTransitionIdleToSprint = NULL;
    this->PickedMontageTransition = NULL;
    this->DEPRECATED_CurrentAimOffset = NULL;
    this->FacialIdle = NULL;
    this->FacialRun = NULL;
    this->FacialDeathLight = NULL;
    this->FacialDeathMedium = NULL;
    this->FacialDeathHeavy = NULL;
    this->FacialDeathHurt = NULL;
    this->FacialMelee = NULL;
    this->DefeatDownedToAlive = NULL;
    this->DefeatDowned = NULL;
    this->DefeatDownedWithZombie = NULL;
    this->DefeatDownedZombieToNo = NULL;
    this->TransitionIdleToSprintForward = NULL;
    this->TransitionIdleToSprintLeft = NULL;
    this->TransitionIdleToSprintRight = NULL;
    this->TransitionIdleToSprintBackwardLeft = NULL;
    this->TransitionIdleToSprintBackwardRight = NULL;
    this->TransitionCoverToSprintForward = NULL;
    this->TransitionCoverToSprintForwardLeft = NULL;
    this->TransitionCoverToSprintLeft = NULL;
    this->TransitionCoverToSprintForwardRight = NULL;
    this->TransitionCoverToSprintRight = NULL;
    this->TransitionCoverToSprintBackwardLeft = NULL;
    this->TransitionCoverToSprintBackwardRight = NULL;
    this->TransitionSprintToCoverForward = NULL;
    this->TransitionSprintToCoverLeft = NULL;
    this->TransitionSprintToCoverRight = NULL;
    this->TransitionSprintToIdleForward = NULL;
    this->TransitionSprintToIdleLeft = NULL;
    this->TransitionSprintToIdleRight = NULL;
    this->TransitionSprintToIdleBackwardLeft = NULL;
    this->TransitionSprintToIdleBackwardRight = NULL;
    this->RemovingBarricadeInteraction = NULL;
    this->RemovingBarricadeInteractionMontage = NULL;
    this->OpenDoorInteraction = NULL;
    this->OpenDoorPatrolAnimMontage = NULL;
    this->OpenDoorCombatAnimMontage = NULL;
    this->bCoverPeekLeft = false;
    this->bCoverPeekRight = false;
    this->bCoverPeekUp = false;
    this->bCoverPeekUpLow = false;
    this->bInCover = false;
    this->bIsPlayingCoverPeekMontage = false;
    this->bIsPlayingIdleToSprintTransition = false;
    this->bHasReceivedStartMoveNotification = false;
    this->bIsPlayingRMTransition = false;
    this->bRMTransitionHasBlendedOut = false;
    this->bWaitingForWalkAfterMontageTransition = false;
    this->DefeatState = ESBZHumanAICharacterDefeatAnimationState::None;
}

