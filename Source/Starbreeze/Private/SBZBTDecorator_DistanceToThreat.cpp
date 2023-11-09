#include "SBZBTDecorator_DistanceToThreat.h"

USBZBTDecorator_DistanceToThreat::USBZBTDecorator_DistanceToThreat() {
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->Distance = 1;
    this->bUseDistanceKey = false;
    this->bSuccessOnNoThreat = true;
    this->bCheckHighestAggroOnly = false;
    this->bCheckVisibility = false;
}

