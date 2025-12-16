#include "SBZEnvQueryTest_NoFriendlyFire.h"

USBZEnvQueryTest_NoFriendlyFire::USBZEnvQueryTest_NoFriendlyFire() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->EnemyContext = NULL;
}


