#include "OTWDRescuableFollower.h"

bool AOTWDRescuableFollower::ShouldBeCrouched() {
    return false;
}

bool AOTWDRescuableFollower::SetScaredAnimationCollection() {
    return false;
}

bool AOTWDRescuableFollower::SetNeutralAnimationCollection() {
    return false;
}

void AOTWDRescuableFollower::RescueCompleted() {
}

void AOTWDRescuableFollower::OnMVComponentClimbStateChanged(EClimbType MVActionType) {
}

void AOTWDRescuableFollower::OnFollowedPlayerTargetingToggled(bool bIsNowAiming) {
}

void AOTWDRescuableFollower::OnFollowedPlayerTargetInfoUpdated(ASBZPlayerCharacter* CurrentFollowedCharacter, int32 NewAlertEnemiesNumber, int32 NewAggroEnemiesNumber) {
}

void AOTWDRescuableFollower::OnFollowedPlayerContinuousFireToggled(bool bIsNowContinuouslyFiring) {
}

void AOTWDRescuableFollower::OnClimbComponentClimbStateChanged(ESBZLadderClimbActionType ClimbActionType) {
}

void AOTWDRescuableFollower::NetMulticast_SetGeneralAnimationCollection_Implementation(ERescuableFollowerAnimCollection SelectedAnimSet) {
}

void AOTWDRescuableFollower::NetMulticast_LastPinnerReleased_Implementation() {
}

void AOTWDRescuableFollower::NetMulticast_FirstPinnerAdded_Implementation() {
}

void AOTWDRescuableFollower::MoveToIndependentLocation(FVector IndependentLocation, bool bLimitMoveTime) {
}

void AOTWDRescuableFollower::HandlePinningAvailabilityToggled(bool bIsNowAnyAvailable) {
}

void AOTWDRescuableFollower::HandlePinnedActorAdded(AActor* NewPinnedActor, ESBZPinningType PinningType) {
}

void AOTWDRescuableFollower::HandleLastPinnedActorReleased(AActor* NewPinnedActor, ESBZPinningType PinningType) {
}

void AOTWDRescuableFollower::HandleFollowedCharacterCrouchChanged(bool bIsNowCrouched) {
}

void AOTWDRescuableFollower::HandleDestinationReached(AActor* DestinationActor) {
}

void AOTWDRescuableFollower::ChangeFollowerStatus(EHumanFollowerStatus NewStatus, ASBZCharacter* ByCharacter) {
}

void AOTWDRescuableFollower::ApplySurvivorData() {
}

AOTWDRescuableFollower::AOTWDRescuableFollower() {
    this->EatenByZombiesAct = NULL;
    this->RescuableName = ERescuableFollowerName::Unknown;
    this->RescuableType = ERescuableFollowerType::Random;
    this->PinningReEnableDelaySeconds = 1;
    this->AllowCrouchMaxDistance = 1;
    this->NeutralGeneralAnimations = NULL;
    this->ScaredGeneralAnimations = NULL;
    this->BeingTargetedOnReviveDelay = 1;
    this->MetersAwayWhenRevived = 1;
}

