#include "SBZMissionSaveData.h"

void USBZMissionSaveData::MarkAsCompletedWithDifficulty(ESBZDifficulty CompletedDifficulty) {
}

USBZMissionSaveData::USBZMissionSaveData() {
    this->CurrentMissionSchematic = NULL;
    this->bIsUnlocked = false;
    this->bFirstRunCompleted = false;
    this->HighestCompletedDifficulty = ESBZDifficulty::Normal;
}

