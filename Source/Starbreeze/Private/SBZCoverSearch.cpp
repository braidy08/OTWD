#include "SBZCoverSearch.h"

FSBZCoverSearch::FSBZCoverSearch() {
    this->MinDistFromEnemy = 1;
    this->PreferredDistFromEnemy = 1;
    this->PreferredDistFromPlayer = 1;
    this->MaxShootingAngle = 1;
    this->MaxEnemyCoverageAngle = 1;
    this->AngleSearchBitMask = 0;
    this->DistSearchBitMask = 0;
}

