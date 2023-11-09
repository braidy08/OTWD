#include "SBZBTTask_GetCoverShootingLocation.h"

USBZBTTask_GetCoverShootingLocation::USBZBTTask_GetCoverShootingLocation() {
    this->ShootingPoint = ESBZShootingPointType::CrouchLeft;
    this->ShootingPointDistance = 1;
    this->bUseShootingPointKey = false;
}

