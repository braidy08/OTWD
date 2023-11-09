#include "OTWDMetagameSurvivorMission.h"

FOTWDMetagameSurvivorMission::FOTWDMetagameSurvivorMission() {
    this->MissionType = NULL;
    this->MaxSurvivorSlots = 0;
    this->RecommendedLevel = 0;
    this->BaseSuccessChance = 1;
    this->MaxSuccessChance = 1;
    this->TurnsRequired = 0;
    this->XpOnSuccess = 0;
    this->XpFailureModifier = 1;
    this->bFirstTurnMission = false;
}

