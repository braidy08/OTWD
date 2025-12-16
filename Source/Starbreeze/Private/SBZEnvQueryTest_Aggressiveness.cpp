#include "SBZEnvQueryTest_Aggressiveness.h"

USBZEnvQueryTest_Aggressiveness::USBZEnvQueryTest_Aggressiveness() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Aggressiveness = ESBZAIRoleAggressiveness::ERoleAggressivenessVeryLow;
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
}


