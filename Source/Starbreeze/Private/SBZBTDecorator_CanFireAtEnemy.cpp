#include "SBZBTDecorator_CanFireAtEnemy.h"

USBZBTDecorator_CanFireAtEnemy::USBZBTDecorator_CanFireAtEnemy() {
    this->NodeName = TEXT("Can Fire at Enemy");
    this->EyeHeight = ESBZEyeHeight::Current;
    this->bCheckFriendlyFire = true;
    this->bCheckLineOfSight = true;
    this->bUseTimedCache = true;
    this->CacheTimeOut = 1;
}


