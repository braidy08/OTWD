#include "SBZEnvQueryTest_VehicleValidation.h"

USBZEnvQueryTest_VehicleValidation::USBZEnvQueryTest_VehicleValidation() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


