#include "SBZAIVisibilityManager.h"

void ASBZAIVisibilityManager::UnregisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent) {
}

void ASBZAIVisibilityManager::UnregisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor) {
}

void ASBZAIVisibilityManager::RegisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent) {
}

void ASBZAIVisibilityManager::RegisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor) {
}

void ASBZAIVisibilityManager::RateTargetLocation(const ASBZCharacter* TargetCharacter, const FVector& StartLocation, const FVector& TargetLocation, const float MaxRelevantDist, const float EnemyExcluderRadius, const float RejectingHeightDiffBetweenNodeAndTarget, uint8& OutVisibilityScore, uint8& OutDistanceScore) const {
}

bool ASBZAIVisibilityManager::IsNodeNotVisibleLocation(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsNodeNotVisibleActor(const FSBZAIVisibilityLeafNode& LeafNode, const AActor* ActorObserver, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsLocationNotVisibleFromLocation(const FVector& Location, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsCharacterNotVisibleFromCharacter(const ASBZCharacter* Character, const ASBZCharacter* ObserverCharacter, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::IsAIVisibilityRelevantNotVisibleFromAIVisibility(const TScriptInterface<ISBZAIVisibilityRelevant> AIVisibilityRelevant, const TScriptInterface<ISBZAIVisibilityRelevant> ObserverAIVisibilityRelevant, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const {
    return false;
}

bool ASBZAIVisibilityManager::HasVisibilityData() const {
    return false;
}

FSBZAIVisibilityLeafNode ASBZAIVisibilityManager::GetAiVisibilityNode(const FVector& Location) const {
    return FSBZAIVisibilityLeafNode{};
}

ASBZAIVisibilityManager* ASBZAIVisibilityManager::GetAIVisibilityManager(UObject* WorldContextObject) {
    return NULL;
}

bool ASBZAIVisibilityManager::DebugLocation(const UObject* WorldContextObject, const FVector& Location, const bool bDrawAzymuts) const {
    return false;
}

ASBZAIVisibilityManager::ASBZAIVisibilityManager() {
    this->MaxComputedNodePerFrame = 0;
    this->MaxDistFromObstacleToBeStandCovered = 1;
    this->MaxDistFromObstacleToBeCrouchCovered = 1;
    this->MinDistFromEnemyToBeCrouchCovered = 1;
    this->MinDistFromEnemyToBeStandCovered = 1;
    this->VisibilityComponent = NULL;
}

