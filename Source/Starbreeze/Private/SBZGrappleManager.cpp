#include "SBZGrappleManager.h"

bool ASBZGrappleManager::RequestGrapple(AActor* Attacker, AActor* Victim, const FSBZGrappleEventSettings& GrappleConfig, const FSBZGrappleAlignmentSettings& AlignmentSettings) {
    return false;
}

void ASBZGrappleManager::OnGrappleAnimationEnded(AActor* Participant, ESBZGrappleState AnimationState) {
}

void ASBZGrappleManager::NetMulticast_ShoveOff_Implementation(AActor* InInstigator, ASBZCharacter* Target, const FSBZHurtReactionPrediction& InHurtReactionPrediction) {
}

void ASBZGrappleManager::NetMulticast_RemoveParticipant_Implementation(AActor* Actor, bool bEndEventIfMainParticipant) {
}

void ASBZGrappleManager::NetMulticast_InitGrappleEvent_Implementation(int32 EventID, AActor* Attacker, AActor* Victim, FSBZGrappleEventSettings GrappleConfig, float AlignmentDuration, const TArray<int32>& VictimAlignIDs, const TArray<int32>& AttackerAlignIDs) {
}

void ASBZGrappleManager::NetMulticast_ForceEndEvent_Implementation(int32 EventID) {
}

void ASBZGrappleManager::NetMulticast_EndStruggle_Implementation(int32 EventID, ESBZGrappleParticipantType Winner) {
}

void ASBZGrappleManager::NetMulticast_AddAttacker_Implementation(int32 EventID, AActor* AddActor, float AlignDuration) {
}

bool ASBZGrappleManager::IsActorPartOfGrapple(AActor* Actor, int32& OutEventID, bool& OutIsPending) const {
    return false;
}

bool ASBZGrappleManager::IsActorGrappleVictim(AActor* Actor, int32& OutEventID, bool& OutIsPending) const {
    return false;
}

bool ASBZGrappleManager::IsActorGrappleAttacker(AActor* Actor, int32& OutEventID, bool& OutIsPending) const {
    return false;
}

bool ASBZGrappleManager::GetStruggleSettingsForAI(ASBZAICharacter* AICharacter, FSBZGrappleStruggleSettings& OutSettings) {
    return false;
}

ESBZGrappleState ASBZGrappleManager::GetParticipantState(AActor* Participant) {
    return ESBZGrappleState::None;
}

AActor* ASBZGrappleManager::GetOpponent(const AActor* Participant) {
    return NULL;
}

ASBZGrappleManager* ASBZGrappleManager::GetGrappleManager(const UObject* WorldContextObject) {
    return NULL;
}

void ASBZGrappleManager::EndStruggleByID(int32 EventID, ESBZGrappleParticipantType Winner) {
}

bool ASBZGrappleManager::AddAttackerToGrapple(int32 GrappleEventID, AActor* Attacker, float MaxDistance, float PositionAlignmentSpeed, bool bFullAdd) {
    return false;
}

ASBZGrappleManager::ASBZGrappleManager() {
    this->GrappleAlignmentTag = TEXT("Grapple");
    this->bDoKnifePenetrationDebug = false;
}

