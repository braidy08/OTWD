#include "SBZEnvQueryTest_CoverSafeness.h"
#include "SBZEnvQueryContext_Enemy.h"

USBZEnvQueryTest_CoverSafeness::USBZEnvQueryTest_CoverSafeness() {
    this->EnemyContext = USBZEnvQueryContext_Enemy::StaticClass();
    this->TestCenter = NULL;
    this->bUseAngleCheck = false;
}

