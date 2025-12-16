#include "SBZBTTask_GetCoverShootingPoint.h"

UDEPRECATED_SBZBTTask_GetCoverShootingPoint::UDEPRECATED_SBZBTTask_GetCoverShootingPoint() {
    this->NodeName = TEXT("GetCoverShootingPoint - Deprecated - Use GetCoverShootingLocation");
    this->ShootingPoint = ESBZShootingPointType::CrouchLeft;
    this->ShootingPointDistance = 1;
    this->bUseShootingPointKey = false;
}


