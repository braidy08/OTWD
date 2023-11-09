#include "SBZGameplayAttributeComparison.h"

FSBZGameplayAttributeComparison::FSBZGameplayAttributeComparison() {
    this->Value = 1;
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->bCheckAgainstBase = false;
    this->FailedIcon = NULL;
}

