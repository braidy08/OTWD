#include "SBZBTTask_SuppressiveCover.h"

USBZBTTask_SuppressiveCover::USBZBTTask_SuppressiveCover() {
    this->bShootFromCover = false;
    this->bUseProvider = true;
    this->RandomChanceValue = 1;
    this->SearchRadius = 1;
    this->EnemyDistanceOffset = 1;
    this->CoverHeightOffset = 1;
    this->bShootAtCover = true;
}

