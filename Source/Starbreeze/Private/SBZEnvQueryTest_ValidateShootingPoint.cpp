#include "SBZEnvQueryTest_ValidateShootingPoint.h"

USBZEnvQueryTest_ValidateShootingPoint::USBZEnvQueryTest_ValidateShootingPoint() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TargetContext = NULL;
}


