#include "SBZBTDecorator_ShootingPointType.h"

USBZBTDecorator_ShootingPointType::USBZBTDecorator_ShootingPointType() {
    this->NodeName = TEXT("ShootingPointType");
    this->MatchType = ESBZBTDecorator_ShootingPointTypeMatchType::All;
    this->ShootingPointTypes = 0;
    this->bUseShootingPointKey = false;
}


