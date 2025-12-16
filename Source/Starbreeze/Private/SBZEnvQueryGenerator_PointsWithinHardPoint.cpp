#include "SBZEnvQueryGenerator_PointsWithinHardPoint.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

USBZEnvQueryGenerator_PointsWithinHardPoint::USBZEnvQueryGenerator_PointsWithinHardPoint() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->SpaceBetweenPoints = 1;
    this->bLimitPointsAroundQuerier = false;
    this->GenerateAround = NULL;
    this->NavigationFilter = NULL;
}


