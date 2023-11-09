#include "SBZEnvQueryTest_Elevation.h"
#include "SBZEnvQueryContext_Enemy.h"

USBZEnvQueryTest_Elevation::USBZEnvQueryTest_Elevation() {
    this->EnemyContext = USBZEnvQueryContext_Enemy::StaticClass();
    this->ScoringBelowPreferredElevation = EEnvTestScoreEquation::Square;
    this->ScoringAbovePreferredElevation = EEnvTestScoreEquation::SquareRoot;
    this->ElevtionWeight = 1;
}

