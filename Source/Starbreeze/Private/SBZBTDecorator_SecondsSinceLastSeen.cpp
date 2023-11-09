#include "SBZBTDecorator_SecondsSinceLastSeen.h"

USBZBTDecorator_SecondsSinceLastSeen::USBZBTDecorator_SecondsSinceLastSeen() {
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->Seconds = 1;
    this->bReadValueFromBlackboard = false;
    this->bContinouslyCheckCondition = false;
}

