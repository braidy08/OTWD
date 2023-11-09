#include "OTWDMissionEndReport.h"

FOTWDMissionEndReport::FOTWDMissionEndReport() {
    this->BonusObjectiveExperienceReward = 0;
    this->PlayedDifficulty = ESBZDifficulty::Normal;
    this->PlayerLevelIdx = 0;
    this->PrimaryPowerLevel = 0;
    this->SecondaryPowerLevel = 0;
    this->MeleePowerLevel = 0;
    this->TimePlayed = 0;
    this->HordeLevel = 0;
    this->PartySize = 0;
    this->WeaponDropsCollected = 0;
    this->MissionData = NULL;
    this->ExperienceLevelModifier = 1;
    this->ProgressValue = 1;
    this->EndMissionState = ESBZEndMissionState::VE_SUCCESS;
    this->RewardedLevelExperience = 0;
    this->RewardedBonusExperience = 0;
    this->RewaredPrestigeLevels = 0;
}

