#include "SBZEnvQueryTest_CoverSafeAngle.h"
#include "SBZEnvQueryContext_Enemy.h"

USBZEnvQueryTest_CoverSafeAngle::USBZEnvQueryTest_CoverSafeAngle() {
    this->EnemyContext = USBZEnvQueryContext_Enemy::StaticClass();
    this->TestCenter = NULL;
    this->bFallbackToPlayerParty = false;
    this->MaxElevation = 1;
}

