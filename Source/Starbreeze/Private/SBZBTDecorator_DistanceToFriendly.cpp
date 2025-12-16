#include "SBZBTDecorator_DistanceToFriendly.h"

UDEPRECATED_SBZBTDecorator_DistanceToFriendly::UDEPRECATED_SBZBTDecorator_DistanceToFriendly() {
    this->NodeName = TEXT("DistanceToFriendly DEPRECATED Use Distance To instead");
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->Distance = 1;
    this->bSuccessIfNoneFound = true;
    this->bUseDistanceKey = false;
}


