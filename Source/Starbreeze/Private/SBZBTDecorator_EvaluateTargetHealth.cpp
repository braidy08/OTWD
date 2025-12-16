#include "SBZBTDecorator_EvaluateTargetHealth.h"

USBZBTDecorator_EvaluateTargetHealth::USBZBTDecorator_EvaluateTargetHealth() {
    this->NodeName = TEXT("Evaluate Target Health");
    this->ComparisonMethod = ESBZNumericComparison::EqualTo;
    this->Health = 1;
}


