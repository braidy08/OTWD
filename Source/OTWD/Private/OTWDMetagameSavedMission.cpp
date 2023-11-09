#include "OTWDMetagameSavedMission.h"

FOTWDMetagameSavedMission::FOTWDMetagameSavedMission() {
    this->TurnsActive = 0;
    this->SuccessChance = 1;
    this->bIsMissionComplete = false;
    this->bWasMissionASuccess = false;
    this->bDidSurvivorsDieOnMission = false;
    this->bIsOldestMission = false;
    this->bIsNew = false;
}

