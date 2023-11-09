#include "SBZObjectiveSchematic.h"

float USBZObjectiveSchematic::GetTimer(ESBZDifficulty Difficulty) const {
    return 0.0f;
}

USBZObjectiveSchematic::USBZObjectiveSchematic() {
    this->StartCount = 0;
    this->Icon = NULL;
    this->SortingOrder = 0;
    this->bFailOnTimerEnd = true;
    this->bCompleteOnTimerEnd = false;
    this->bShowCount = true;
    this->bOnlyShowCurrentCount = false;
    this->bCompleteOnChildrenCompletion = true;
    this->bAutoClear = false;
    this->bCompleteOnIncrementDecrement = true;
    this->TargetCount = 0;
    this->Timer = 1;
}

