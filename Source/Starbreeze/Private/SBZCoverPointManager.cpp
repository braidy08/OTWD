#include "SBZCoverPointManager.h"

ASBZCoverPoint* USBZCoverPointManager::K2GetBestCoverPointWithFSearch(FBoxSphereBounds& Bounds, ASBZCoverPoint* CurCoverPoint, const FSBZCoverSearch& CoverSearch, const TArray<ASBZCoverPoint*> RejectedCoverPoints) {
    return NULL;
}

ASBZCoverPoint* USBZCoverPointManager::K2GetBestCoverPoint(FBoxSphereBounds& Bounds, ASBZCoverPoint* CurCoverPoint, FVector PlayerPos, FVector EnemyPos, float MinDistFromEnemy, float PreferredDistFromEnemy, float PreferredDistFromPlayer, float MaxShootingAngle, float MaxEnemyCoverageAngle, uint8 AngleSearchBitMask, uint8 DistSearchBitMask, const TArray<ASBZCoverPoint*> RejectedCoverPoints) {
    return NULL;
}

bool USBZCoverPointManager::IsUsingAiVisibilitySystem() const {
    return false;
}

USBZCoverPointManager* USBZCoverPointManager::GetCoverPointManagerFromWorld(UWorld* WorldObject) {
    return NULL;
}

USBZCoverPointManager* USBZCoverPointManager::GetCoverPointManager(UObject* WorldContextObject) {
    return NULL;
}

USBZCoverPointManager::USBZCoverPointManager() {
    this->ShootingPointHeightOffset = 1;
    this->bUseAiVisibilitySystem = false;
    this->MinVisibilityScoreToBeSafe = 1;
    this->ScoringMode = ESBZCoverPointScoringMode::Min;
}

