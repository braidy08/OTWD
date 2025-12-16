#include "SBZBTDecorator_DistanceTo.h"

USBZBTDecorator_DistanceTo::USBZBTDecorator_DistanceTo() {
    this->bCheckFriendlyDistance = true;
    this->ComparisonMethodFriendly = ESBZNumericComparison::EqualTo;
    this->DistanceFriendly = 1;
    this->bUseDistanceKeyFriendly = false;
    this->EvaluatePositionFriendly = 0;
    this->bCheckCoverPoint = false;
    this->ComparisonMethodCoverPoint = ESBZNumericComparison::EqualTo;
    this->DistanceCoverPoint = 1;
    this->bUseDistanceKeyCoverPoint = false;
    this->bSuccessIfNoneFound = true;
}


