#include "SBZHumanFollower.h"
#include "Components/CapsuleComponent.h"
#include "SBZCharacterPinningComponent.h"
#include "SBZInteractableComponent.h"
#include "Templates/SubclassOf.h"

bool ASBZHumanFollower::ShouldAlwaysSurviveWhenLosingGrapple() {
    return false;
}

void ASBZHumanFollower::SetHumanFollowerInteractionEnabled(bool bIsActive) {
}

void ASBZHumanFollower::QueueDelayedVOComment(ESBZVoiceComment NewDelayedComment, ASBZCharacter* SpeakingCharacter) {
}

void ASBZHumanFollower::PlayVOComment(ESBZVoiceComment CommentToSay, ASBZCharacter* SpeakingCharacter) {
}

void ASBZHumanFollower::OnMVComponentClimbStateChanged(EClimbType MVActionType) {
}

void ASBZHumanFollower::OnClimbComponentClimbStateChanged(ESBZLadderClimbActionType ClimbActionType) {
}

void ASBZHumanFollower::NetMulticast_UpdateNewStatusParams_Implementation(EHumanFollowerStatus NewStatus) {
}

void ASBZHumanFollower::Kill(const FGameplayEffectContextHandle& ContextHandle, TSubclassOf<UGameplayEffect> GameplayEffectClass, float KillDamage) {
}

void ASBZHumanFollower::InteractionSuccessfulHandler(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void ASBZHumanFollower::InteractionStartedHandler(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void ASBZHumanFollower::HandleFollowedCharacterKilled(ASBZCharacter* KilledOwner) {
}

void ASBZHumanFollower::HandleFollowedCharacterDestroyed(AActor* DespawnedActor) {
}

USBZCharacterPinningComponent* ASBZHumanFollower::GetPinningComponent() {
    return NULL;
}

USBZInteractableComponent* ASBZHumanFollower::GetHumanFollowerInteractableComponent() {
    return NULL;
}

USBZInteractableComponent* ASBZHumanFollower::GetFollowerInteractableComponent() {
    return NULL;
}

ASBZCharacter* ASBZHumanFollower::GetFollowedCharacter() {
    return NULL;
}

EHumanFollowerStatus ASBZHumanFollower::GetCurrentHumanFollowerStatus() {
    return EHumanFollowerStatus::Following;
}

void ASBZHumanFollower::FollowedCharacterTeleported(ASBZCharacter* Character) {
}

void ASBZHumanFollower::EndAnyCurrentAction() {
}

void ASBZHumanFollower::DoUnCrouch() {
}

void ASBZHumanFollower::DoCrouch() {
}

void ASBZHumanFollower::ChangeFollowerStatus(EHumanFollowerStatus NewStatus, ASBZCharacter* ByCharacter) {
}

ASBZHumanFollower::ASBZHumanFollower() {
    this->bIsKillable = true;
    this->PinningComponent = CreateDefaultSubobject<USBZCharacterPinningComponent>(TEXT("RescuableFollowerPinningComponent"));
    this->MinCrouchDelaySeconds = 1;
    this->MaxCrouchDelaySeconds = 1;
    this->bEnableFollowerVOs = true;
    this->bEnableFollowedChReactVOs = true;
    this->DefeatCapsuleUpper = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DefeatCapsuleUpper"));
    this->DefeatCapsuleLower = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DefeatCapsuleLower"));
    this->DefeatSettings = NULL;
    this->FollowerStatus = EHumanFollowerStatus::Following;
    this->FollowerInteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("FollowerInteractableComponent"));
}

