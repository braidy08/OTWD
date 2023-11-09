#include "SBZEnvQueryGenerator_PointsWithinHardPoint.h"

USBZEnvQueryGenerator_PointsWithinHardPoint::USBZEnvQueryGenerator_PointsWithinHardPoint() {
    this->SpaceBetweenPoints = 1;
    this->bLimitPointsAroundQuerier = false;
    this->GenerateAround = NULL;
    this->NavigationFilter = NULL;
}

