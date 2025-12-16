#include "SBZEnvQueryTest_Hardpoint.h"

USBZEnvQueryTest_Hardpoint::USBZEnvQueryTest_Hardpoint() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AgentContext = NULL;
}


