#include "SBZEnvQueryGenerator_CoverPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USBZEnvQueryGenerator_CoverPoints::USBZEnvQueryGenerator_CoverPoints() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->bConsiderHardpointsWhenApplicable = false;
    this->bConsiderSearchRadiusForHardpoints = false;
}

