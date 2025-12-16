#include "SBZEnvQueryGenerator_CoverPointsWithInHardPoint.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UDEPRECATED_SBZEnvQueryGenerator_CoverPointsWithInHardPoint::UDEPRECATED_SBZEnvQueryGenerator_CoverPointsWithInHardPoint() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->SearchCenter = NULL;
}


