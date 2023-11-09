#include "SBZLevelSchematic.h"

bool USBZLevelSchematic::IsWeeklyMission() const {
    return false;
}

bool USBZLevelSchematic::IsTutorial() const {
    return false;
}

bool USBZLevelSchematic::IsSoloMission() const {
    return false;
}

bool USBZLevelSchematic::IsExpedition() const {
    return false;
}

bool USBZLevelSchematic::IsDifficultyAvailableForLevel(ESBZDifficulty InDifficulty) {
    return false;
}

bool USBZLevelSchematic::IsCampLevel() const {
    return false;
}

bool USBZLevelSchematic::HasQuestRequirement() {
    return false;
}

int32 USBZLevelSchematic::GetRecommendedPowerLevelForDifficulty(ESBZDifficulty InDifficulty) {
    return 0;
}

void USBZLevelSchematic::GenerateSaveDataID() {
}

USBZLevelSchematic::USBZLevelSchematic() {
    this->Flags = 0;
    this->CompletionRewards = NULL;
    this->MapX = 0;
    this->MapY = 0;
    this->MissionType = EMissionTypes::Scavenge;
    this->LevelQuestRequirement = NULL;
    this->LightScenario = ESBZLightScenario::Day;
    this->RecommendPowerLevelPerDifficulty[0] = 0;
    this->RecommendPowerLevelPerDifficulty[1] = 0;
    this->RecommendPowerLevelPerDifficulty[2] = 0;
    this->RecommendPowerLevelPerDifficulty[3] = 0;
    this->AvailableDifficulties[0] = ESBZMissionDifficultyAvailable::DifficultyAvailable;
    this->AvailableDifficulties[1] = ESBZMissionDifficultyAvailable::DifficultyAvailable;
    this->AvailableDifficulties[2] = ESBZMissionDifficultyAvailable::DifficultyAvailable;
    this->AvailableDifficulties[3] = ESBZMissionDifficultyAvailable::DifficultyAvailable;
    this->bHasFirstRunFixedDifficulty = true;
    this->FirstRunFixedDifficulty = ESBZDifficulty::Normal;
    this->LevelModifierIntensity = 1;
    this->LevelModifierTimer = 1;
    this->bIsSoloMission = false;
}

