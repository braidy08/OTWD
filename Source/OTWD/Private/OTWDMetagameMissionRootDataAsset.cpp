#include "OTWDMetagameMissionRootDataAsset.h"

UOTWDMetagameMissionRootDataAsset::UOTWDMetagameMissionRootDataAsset() {
    this->MissionsDataTable = NULL;
    this->MissionInjuryDataTable = NULL;
    this->MissionDeathDataTable = NULL;
    this->MoraleMissionSuccessModifiers = NULL;
    this->BaseChanceModifier = 1;
    this->LevelModMultiplier = 1;
    this->LevelModMaxBonus = 1;
    this->LevelModMaxLoss = 1;
    this->SupportBonus = 1;
    this->InjuredBonus = 1;
    this->DeathChanceMultiplier = 1;
    this->TurnsTillDyingOnInjury = 0;
    this->TurnsTillDeathOnDying = 0;
}

