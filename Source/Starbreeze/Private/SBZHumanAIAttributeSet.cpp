#include "SBZHumanAIAttributeSet.h"

FGameplayAttribute USBZHumanAIAttributeSet::GetAccuracyMultiplierAttribute() {
    return FGameplayAttribute{};
}

USBZHumanAIAttributeSet::USBZHumanAIAttributeSet() {
    this->AccuracyMultiplier = 1;
}

