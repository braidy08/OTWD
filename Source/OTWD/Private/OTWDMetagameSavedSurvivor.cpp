#include "OTWDMetagameSavedSurvivor.h"

FOTWDMetagameSavedSurvivor::FOTWDMetagameSavedSurvivor() {
    this->CurrentAssignedBuilding = NULL;
    this->HealingCost = 0;
    this->ClassType = NULL;
    this->CurrentXP = 0;
    this->Level = 0;
    this->MaxLevel = 0;
    this->bShowPotential = false;
    this->TurnsTillDying = 0;
    this->TurnsTillDeath = 0;
    this->SurvivorState = ESurvivorState::Idle;
    this->bIsOnAMission = false;
    this->bIsNew = false;
}

