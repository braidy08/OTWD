#include "SBZTacticalNavigationQueryFilter.h"

USBZTacticalNavigationQueryFilter::USBZTacticalNavigationQueryFilter() {
    this->VisibilityCostMultiplier = 1;
    this->DistanceCostMultiplier = 1;
    this->HeuristicScale = 1;
    this->EnemyExcluderRadius = 1;
    this->MaxRelevantDist = 1;
    this->VisibilityScoreBoostMultiplier = 1;
    this->RejectingHeightDiffBetweenNodeAndEnemy = 1;
    this->bActive = true;
}

