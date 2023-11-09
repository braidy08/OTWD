#include "SBZGameplayEffectComparison.h"

FSBZGameplayEffectComparison::FSBZGameplayEffectComparison() {
    this->GameplayEffect = NULL;
    this->Count = 0;
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->FailedIcon = NULL;
}

