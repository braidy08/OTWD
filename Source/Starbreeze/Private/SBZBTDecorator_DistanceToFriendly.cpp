#include "SBZBTDecorator_DistanceToFriendly.h"

USBZBTDecorator_DistanceToFriendly::USBZBTDecorator_DistanceToFriendly() {
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->Distance = 1;
    this->bSuccessIfNoneFound = true;
    this->bUseDistanceKey = false;
}

