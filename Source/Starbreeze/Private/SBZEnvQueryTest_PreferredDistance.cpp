#include "SBZEnvQueryTest_PreferredDistance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USBZEnvQueryTest_PreferredDistance::USBZEnvQueryTest_PreferredDistance() {
    this->TestMode = EEnvTestDistance::Distance3D;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
    this->MinimumScoring = ESBZDistanceScoringFunction::Square;
    this->MaximumScoring = ESBZDistanceScoringFunction::SquareRoot;
    this->bScoreOutsideDistances = false;
}

