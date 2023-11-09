#include "SBZBTDecorator_Distance.h"

USBZBTDecorator_Distance::USBZBTDecorator_Distance() {
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->Distance = 1;
    this->bUseDistanceKey = false;
    this->bSeparateDirectionChecks = false;
    this->Distance2D = 1;
    this->DistanceZ = 1;
    this->bRequiresBothDirections = true;
}

