#include "SBZEnvQueryGenerator_CoverPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

USBZEnvQueryGenerator_CoverPoints::USBZEnvQueryGenerator_CoverPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->bConsiderHardpointsWhenApplicable = false;
    this->bConsiderSearchRadiusForHardpoints = false;
}


