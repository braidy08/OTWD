#include "SBZBTDecorator_PerceptionMemory.h"

USBZBTDecorator_PerceptionMemory::USBZBTDecorator_PerceptionMemory() {
    this->NodeName = TEXT("PerceptionMemory");
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->CompareDistance = 1;
}


