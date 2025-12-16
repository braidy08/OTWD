#include "SBZMissionSaveData.h"

USBZMissionSaveData::USBZMissionSaveData() {
    this->CurrentMissionSchematic = NULL;
    this->bIsUnlocked = false;
    this->bFirstRunCompleted = false;
    this->HighestCompletedDifficulty = ESBZDifficulty::Normal;
}

void USBZMissionSaveData::MarkAsCompletedWithDifficulty(ESBZDifficulty CompletedDifficulty) {
}


