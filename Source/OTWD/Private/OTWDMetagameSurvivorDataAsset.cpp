#include "OTWDMetagameSurvivorDataAsset.h"

UOTWDMetagameSurvivorDataAsset::UOTWDMetagameSurvivorDataAsset() {
    this->HealingCost = 0;
    this->ClassType = NULL;
    this->CurrentXP = 0;
    this->Level = 0;
    this->MaxLevel = 0;
    this->bShowPotential = false;
    this->TurnsTillDeath = 0;
    this->SurvivorState = ESurvivorState::Idle;
}

