#include "SBZEnvQueryTest_ShootingPointType.h"

USBZEnvQueryTest_ShootingPointType::USBZEnvQueryTest_ShootingPointType() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bInvertResult = false;
    this->MatchType = ESBZEnvQueryTest_ShootingPointTypeMatchType::All;
    this->ShootingPointTypes = 0;
}


