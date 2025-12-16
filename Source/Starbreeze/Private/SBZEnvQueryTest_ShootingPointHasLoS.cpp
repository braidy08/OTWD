#include "SBZEnvQueryTest_ShootingPointHasLoS.h"

USBZEnvQueryTest_ShootingPointHasLoS::USBZEnvQueryTest_ShootingPointHasLoS() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bInvertResult = false;
    this->AgentContext = NULL;
    this->TargetContext = NULL;
}


